#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GDLPHFCCCFL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define GDLPHFCCCFL_BCNLAHMHJFH_OFFSET UNITYSDK_OFFSET(0x1E44E420)
#define GDLPHFCCCFL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E44E7D0)
#define GDLPHFCCCFL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44EB70)
#define GDLPHFCCCFL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E44E3B0)
#define GDLPHFCCCFL_CMFGFDOOFFI_OFFSET UNITYSDK_OFFSET(0x1E44E440)
#define GDLPHFCCCFL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E44E370)
#define GDLPHFCCCFL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44E360)
#define GDLPHFCCCFL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E44E540)
#define GDLPHFCCCFL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E44E460)
#define GDLPHFCCCFL_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E44E410)
#define GDLPHFCCCFL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E44E610)
#define GDLPHFCCCFL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E44E320)
#define GDLPHFCCCFL_JKHFJOFLIAH_OFFSET UNITYSDK_OFFSET(0x1E44E430)
#define GDLPHFCCCFL_MEIGHCDGBDI_OFFSET UNITYSDK_OFFSET(0x1E44E450)
#define GDLPHFCCCFL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E44E9B0)
#define GDLPHFCCCFL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E44E960)
#define GDLPHFCCCFL_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E44E400)
#define GDLPHFCCCFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E44E350)
#define GDLPHFCCCFL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E44E640)
#define GDLPHFCCCFL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E44E6A0)

inline static constexpr unsigned int GDLPHFCCCFL_TypeDefinitionIndex = 29988;

	class GDLPHFCCCFL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 DNKADAFBILN; // 0x18
		::System::UInt32 BAHFIEBMLLO; // 0x1C
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::GDLPHFCCCFL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::GDLPHFCCCFL*>**)UnitySDK::FromName("", "GDLPHFCCCFL")->GetStaticField(0x11340);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object DDAHPJKBBMD; // 0x0
		// static const ::System::Object AOEBNCAILPJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::GDLPHFCCCFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLPHFCCCFL*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::GDLPHFCCCFL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::GDLPHFCCCFL*>*(*)())((::PBYTE)hIl2Cpp + GDLPHFCCCFL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::GDLPHFCCCFL* Clone()
		{
			return ((::GDLPHFCCCFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 BCNLAHMHJFH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_BCNLAHMHJFH_OFFSET))(this);
		}

		::System::Void JKHFJOFLIAH(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_JKHFJOFLIAH_OFFSET))(this, a1);
		}

		::System::UInt32 CMFGFDOOFFI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CMFGFDOOFFI_OFFSET))(this);
		}

		::System::Void MEIGHCDGBDI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_MEIGHCDGBDI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::GDLPHFCCCFL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::GDLPHFCCCFL*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::GDLPHFCCCFL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GDLPHFCCCFL*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + GDLPHFCCCFL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
