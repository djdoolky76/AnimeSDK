#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHAJMKCEEPJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHAJMKCEEPJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E481960)
#define GHAJMKCEEPJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E481BC0)
#define GHAJMKCEEPJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E481510)
#define GHAJMKCEEPJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E4814D0)
#define GHAJMKCEEPJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4814C0)
#define GHAJMKCEEPJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E4816E0)
#define GHAJMKCEEPJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E4815D0)
#define GHAJMKCEEPJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E4817C0)
#define GHAJMKCEEPJ_GNJHDBGBCBL_OFFSET UNITYSDK_OFFSET(0x1E4815A0)
#define GHAJMKCEEPJ_IEIAADAJHOL_OFFSET UNITYSDK_OFFSET(0x1E481590)
#define GHAJMKCEEPJ_JCCIGJLMFEP_OFFSET UNITYSDK_OFFSET(0x1E4815C0)
#define GHAJMKCEEPJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E481450)
#define GHAJMKCEEPJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E481A40)
#define GHAJMKCEEPJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E481A00)
#define GHAJMKCEEPJ_NEONFOEDFLJ_OFFSET UNITYSDK_OFFSET(0x1E4815B0)
#define GHAJMKCEEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E4814B0)
#define GHAJMKCEEPJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E4817F0)
#define GHAJMKCEEPJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E481850)

	class GHAJMKCEEPJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 KEDAGJKKFFN; // 0x18
		::System::Boolean GEIKIKJPHAE; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHAJMKCEEPJ")->GetStaticField(0x165A0);
		}

		// static const ::System::Object NMCANELKJNL; // 0x0
		// static const ::System::Object HIBNNPNNIBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHAJMKCEEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHAJMKCEEPJ*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHAJMKCEEPJ* Clone()
		{
			return ((::GHAJMKCEEPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_CLONE_OFFSET))(this);
		}

		::System::Boolean IEIAADAJHOL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_IEIAADAJHOL_OFFSET))(this);
		}

		::System::Void GNJHDBGBCBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_GNJHDBGBCBL_OFFSET))(this, a1);
		}

		::System::UInt32 NEONFOEDFLJ()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_NEONFOEDFLJ_OFFSET))(this);
		}

		::System::Void JCCIGJLMFEP(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_JCCIGJLMFEP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHAJMKCEEPJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHAJMKCEEPJ*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHAJMKCEEPJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHAJMKCEEPJ*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHAJMKCEEPJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
