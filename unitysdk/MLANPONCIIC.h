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

#define MLANPONCIIC_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x205D88A0)
#define MLANPONCIIC_CCTOR_OFFSET UNITYSDK_OFFSET(0x205D8CD0)
#define MLANPONCIIC_CLONE_OFFSET UNITYSDK_OFFSET(0x205D8330)
#define MLANPONCIIC_CTOR_1_OFFSET UNITYSDK_OFFSET(0x205D82A0)
#define MLANPONCIIC_CTOR_OFFSET UNITYSDK_OFFSET(0x205D8290)
#define MLANPONCIIC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x205D8590)
#define MLANPONCIIC_EQUALS_OFFSET UNITYSDK_OFFSET(0x205D8410)
#define MLANPONCIIC_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x205D8400)
#define MLANPONCIIC_FLPDELEDIBK_OFFSET UNITYSDK_OFFSET(0x205D83E0)
#define MLANPONCIIC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x205D8710)
#define MLANPONCIIC_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x205D8250)
#define MLANPONCIIC_LHJEMKJFLJK_OFFSET UNITYSDK_OFFSET(0x205D83D0)
#define MLANPONCIIC_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x205D8AD0)
#define MLANPONCIIC_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x205D8970)
#define MLANPONCIIC_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x205D83F0)
#define MLANPONCIIC_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x205D8280)
#define MLANPONCIIC_TOSTRING_OFFSET UNITYSDK_OFFSET(0x205D8760)
#define MLANPONCIIC_WRITETO_OFFSET UNITYSDK_OFFSET(0x205D87C0)

inline static constexpr unsigned int MLANPONCIIC_TypeDefinitionIndex = 33474;

	class MLANPONCIIC : public ::System::Object
	{
	public:
		::PFCKBFLDHNI* MGBEADJIBJM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::MLANPONCIIC*>**)UnitySDK::FromName("", "MLANPONCIIC")->GetStaticField(0x503F0);
		}

		// static const ::System::Object JMEOLDPADHB; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
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

		::PFCKBFLDHNI* LHJEMKJFLJK()
		{
			return ((::PFCKBFLDHNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_LHJEMKJFLJK_OFFSET))(this);
		}

		::System::Void FLPDELEDIBK(::PFCKBFLDHNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFCKBFLDHNI*))((::PBYTE)hIl2Cpp + MLANPONCIIC_FLPDELEDIBK_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MLANPONCIIC_FAEKBILGPCO_OFFSET))(this, a1);
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
