#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEEHGNIBIFE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEEHGNIBIFE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E716AD0)
#define JEEHGNIBIFE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E716DA0)
#define JEEHGNIBIFE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E716720)
#define JEEHGNIBIFE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7166F0)
#define JEEHGNIBIFE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7166E0)
#define JEEHGNIBIFE_DNJJKOANJNF_OFFSET UNITYSDK_OFFSET(0x1E716780)
#define JEEHGNIBIFE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E716890)
#define JEEHGNIBIFE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7167B0)
#define JEEHGNIBIFE_FCAIJANDDDP_OFFSET UNITYSDK_OFFSET(0x1E7167A0)
#define JEEHGNIBIFE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E716960)
#define JEEHGNIBIFE_INLFGGJOJJJ_OFFSET UNITYSDK_OFFSET(0x1E716770)
#define JEEHGNIBIFE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7166A0)
#define JEEHGNIBIFE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E716C20)
#define JEEHGNIBIFE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E716BE0)
#define JEEHGNIBIFE_OCACDPCLIBF_OFFSET UNITYSDK_OFFSET(0x1E716790)
#define JEEHGNIBIFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7166D0)
#define JEEHGNIBIFE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E716990)
#define JEEHGNIBIFE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7169F0)

inline static constexpr unsigned int JEEHGNIBIFE_TypeDefinitionIndex = 26204;

	class JEEHGNIBIFE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 AFFBGDFNCBG; // 0x18
		::System::UInt32 EPAAJOIOGKG; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::JEEHGNIBIFE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JEEHGNIBIFE*>**)UnitySDK::FromName("", "JEEHGNIBIFE")->GetStaticField(0x119B0);
		}

		// static const ::System::Object DLMAGPJNIPP; // 0x0
		// static const ::System::Object OICKCNEBADE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEEHGNIBIFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEHGNIBIFE*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEEHGNIBIFE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JEEHGNIBIFE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JEEHGNIBIFE*>*(*)())((::PBYTE)hIl2Cpp + JEEHGNIBIFE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEEHGNIBIFE* Clone()
		{
			return ((::JEEHGNIBIFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_CLONE_OFFSET))(this);
		}

		::System::UInt32 INLFGGJOJJJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_INLFGGJOJJJ_OFFSET))(this);
		}

		::System::Void DNJJKOANJNF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_DNJJKOANJNF_OFFSET))(this, a1);
		}

		::System::UInt32 OCACDPCLIBF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_OCACDPCLIBF_OFFSET))(this);
		}

		::System::Void FCAIJANDDDP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_FCAIJANDDDP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEEHGNIBIFE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEEHGNIBIFE*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEEHGNIBIFE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEEHGNIBIFE*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEEHGNIBIFE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
