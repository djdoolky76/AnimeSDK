#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GHBKJLIHHGJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GHBKJLIHHGJ_BEGPKDAIOPO_OFFSET UNITYSDK_OFFSET(0x1E484080)
#define GHBKJLIHHGJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E4843B0)
#define GHBKJLIHHGJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E484680)
#define GHBKJLIHHGJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1E484000)
#define GHBKJLIHHGJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E483FD0)
#define GHBKJLIHHGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1E483FC0)
#define GHBKJLIHHGJ_EPFPLLOFFFB_OFFSET UNITYSDK_OFFSET(0x1E484070)
#define GHBKJLIHHGJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E484170)
#define GHBKJLIHHGJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E484090)
#define GHBKJLIHHGJ_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E484060)
#define GHBKJLIHHGJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E484240)
#define GHBKJLIHHGJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E483F80)
#define GHBKJLIHHGJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E484500)
#define GHBKJLIHHGJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E4844C0)
#define GHBKJLIHHGJ_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E484050)
#define GHBKJLIHHGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E483FB0)
#define GHBKJLIHHGJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E484270)
#define GHBKJLIHHGJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E4842D0)

inline static constexpr unsigned int GHBKJLIHHGJ_TypeDefinitionIndex = 30326;

	class GHBKJLIHHGJ : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 ECCMJBDHOBD; // 0x1C
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "GHBKJLIHHGJ")->GetStaticField(0x169B0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object CEDDGAMLKJK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GHBKJLIHHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHBKJLIHHGJ*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GHBKJLIHHGJ* Clone()
		{
			return ((::GHBKJLIHHGJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 EPFPLLOFFFB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_EPFPLLOFFFB_OFFSET))(this);
		}

		::System::Void BEGPKDAIOPO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_BEGPKDAIOPO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GHBKJLIHHGJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GHBKJLIHHGJ*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GHBKJLIHHGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GHBKJLIHHGJ*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GHBKJLIHHGJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
