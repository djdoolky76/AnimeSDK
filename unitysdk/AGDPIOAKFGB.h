#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGDPIOAKFGB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AGDPIOAKFGB_BIBPBCCNBMK_OFFSET UNITYSDK_OFFSET(0x1E0FBCE0)
#define AGDPIOAKFGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0FC020)
#define AGDPIOAKFGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0FC2F0)
#define AGDPIOAKFGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0FBC70)
#define AGDPIOAKFGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0FBC40)
#define AGDPIOAKFGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0FBC30)
#define AGDPIOAKFGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0FBDE0)
#define AGDPIOAKFGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0FBD00)
#define AGDPIOAKFGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E0FBCD0)
#define AGDPIOAKFGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0FBEB0)
#define AGDPIOAKFGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0FBBF0)
#define AGDPIOAKFGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0FC170)
#define AGDPIOAKFGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0FC130)
#define AGDPIOAKFGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E0FBCC0)
#define AGDPIOAKFGB_OIEMAEFDBCB_OFFSET UNITYSDK_OFFSET(0x1E0FBCF0)
#define AGDPIOAKFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0FBC20)
#define AGDPIOAKFGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0FBEE0)
#define AGDPIOAKFGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0FBF40)

inline static constexpr unsigned int AGDPIOAKFGB_TypeDefinitionIndex = 30457;

	class AGDPIOAKFGB : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 BGMLGHECGBM; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::AGDPIOAKFGB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AGDPIOAKFGB*>**)UnitySDK::FromName("", "AGDPIOAKFGB")->GetStaticField(0x36F50);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object LANLJAPHOCL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AGDPIOAKFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDPIOAKFGB*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AGDPIOAKFGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AGDPIOAKFGB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AGDPIOAKFGB*>*(*)())((::PBYTE)hIl2Cpp + AGDPIOAKFGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AGDPIOAKFGB* Clone()
		{
			return ((::AGDPIOAKFGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BIBPBCCNBMK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_BIBPBCCNBMK_OFFSET))(this);
		}

		::System::Void OIEMAEFDBCB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_OIEMAEFDBCB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AGDPIOAKFGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AGDPIOAKFGB*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AGDPIOAKFGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AGDPIOAKFGB*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AGDPIOAKFGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
