#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLANPONCIIC;
class PFCKBFLDHNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define MLANPONCIIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EA4FCA0)
#define MLANPONCIIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA500C0)
#define MLANPONCIIC_CLONE_OFFSET UNITYSDK_OFFSET(0x1EA31590)
#define MLANPONCIIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EA31510)
#define MLANPONCIIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA31500)
#define MLANPONCIIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EA317E0)
#define MLANPONCIIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EA31660)
#define MLANPONCIIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1EA31630)
#define MLANPONCIIC_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x1EA31650)
#define MLANPONCIIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EA31960)
#define MLANPONCIIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EA314C0)
#define MLANPONCIIC_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x1EA31640)
#define MLANPONCIIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EA4FEC0)
#define MLANPONCIIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EA4FD70)
#define MLANPONCIIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1EA31620)
#define MLANPONCIIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EA314F0)
#define MLANPONCIIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EA4FB60)
#define MLANPONCIIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EA4FBC0)

inline static constexpr unsigned int MLANPONCIIC_TypeDefinitionIndex = 32559;

	class MLANPONCIIC : public ::System::Object
	{
	public:
		::PFCKBFLDHNI* MGBEADJIBJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>**)UnitySDK::FromName("", "MLANPONCIIC")->GetStaticField(0x55720);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object JMEOLDPADHB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::MLANPONCIIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLANPONCIIC*))((::PBYTE)hIl2Cpp + MLANPONCIIC_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLANPONCIIC_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>*(*)())((::PBYTE)hIl2Cpp + MLANPONCIIC_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::MLANPONCIIC* Clone()
		{
			return ((::MLANPONCIIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLANPONCIIC_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::PFCKBFLDHNI* LHJEMKJFLJK()
		{
			return ((::PFCKBFLDHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::PFCKBFLDHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + MLANPONCIIC_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MLANPONCIIC_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::MLANPONCIIC* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MLANPONCIIC*))((::PBYTE)hIl2Cpp + MLANPONCIIC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + MLANPONCIIC_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::MLANPONCIIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLANPONCIIC*))((::PBYTE)hIl2Cpp + MLANPONCIIC_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + MLANPONCIIC_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
