#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKGFMPCFOOK;
class KJMKOJEHMII;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKGFMPCFOOK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E39D7F0)
#define AKGFMPCFOOK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E39DB10)
#define AKGFMPCFOOK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E39D220)
#define AKGFMPCFOOK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E39D1B0)
#define AKGFMPCFOOK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E39D1A0)
#define AKGFMPCFOOK_DDLGCOIFIAB_OFFSET UNITYSDK_OFFSET(0x1E39D2B0)
#define AKGFMPCFOOK_ELHFCMBPKIL_OFFSET UNITYSDK_OFFSET(0x1E39D2A0)
#define AKGFMPCFOOK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E39D460)
#define AKGFMPCFOOK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E39D2E0)
#define AKGFMPCFOOK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E39D2D0)
#define AKGFMPCFOOK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E39D5E0)
#define AKGFMPCFOOK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E39D160)
#define AKGFMPCFOOK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E39D950)
#define AKGFMPCFOOK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E39D8C0)
#define AKGFMPCFOOK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E39D2C0)
#define AKGFMPCFOOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E39D190)
#define AKGFMPCFOOK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E39D6B0)
#define AKGFMPCFOOK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E39D710)

inline static constexpr unsigned int AKGFMPCFOOK_TypeDefinitionIndex = 34950;

	class AKGFMPCFOOK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::KJMKOJEHMII* HOPDKOBGIGG; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AKGFMPCFOOK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKGFMPCFOOK*>**)UnitySDK::FromName("", "AKGFMPCFOOK")->GetStaticField(0x3EC80);
		}

		// static const ::System::Object NLGBNLCIKGN; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKGFMPCFOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKGFMPCFOOK*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKGFMPCFOOK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKGFMPCFOOK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKGFMPCFOOK*>*(*)())((::PBYTE)hIl2Cpp + AKGFMPCFOOK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKGFMPCFOOK* Clone()
		{
			return ((::AKGFMPCFOOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_CLONE_OFFSET))(this);
		}

		::KJMKOJEHMII* ELHFCMBPKIL()
		{
			return ((::KJMKOJEHMII*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_ELHFCMBPKIL_OFFSET))(this);
		}

		::System::Void DDLGCOIFIAB(::KJMKOJEHMII* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KJMKOJEHMII*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_DDLGCOIFIAB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKGFMPCFOOK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKGFMPCFOOK*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKGFMPCFOOK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKGFMPCFOOK*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKGFMPCFOOK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
