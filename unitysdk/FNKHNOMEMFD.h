#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FNKHNOMEMFD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FNKHNOMEMFD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x202DADC0)
#define FNKHNOMEMFD_CCTOR_OFFSET UNITYSDK_OFFSET(0x202DB090)
#define FNKHNOMEMFD_CLONE_OFFSET UNITYSDK_OFFSET(0x202DAA10)
#define FNKHNOMEMFD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x202DA9E0)
#define FNKHNOMEMFD_CTOR_OFFSET UNITYSDK_OFFSET(0x202DA9D0)
#define FNKHNOMEMFD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x202DAB80)
#define FNKHNOMEMFD_EQUALS_OFFSET UNITYSDK_OFFSET(0x202DAAA0)
#define FNKHNOMEMFD_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x202DAA90)
#define FNKHNOMEMFD_GCMNAFEEDOB_OFFSET UNITYSDK_OFFSET(0x202DAA70)
#define FNKHNOMEMFD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x202DAC50)
#define FNKHNOMEMFD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x202DA990)
#define FNKHNOMEMFD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x202DAF10)
#define FNKHNOMEMFD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x202DAED0)
#define FNKHNOMEMFD_NKLMJHMJCEB_OFFSET UNITYSDK_OFFSET(0x202DAA60)
#define FNKHNOMEMFD_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x202DAA80)
#define FNKHNOMEMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x202DA9C0)
#define FNKHNOMEMFD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x202DAC80)
#define FNKHNOMEMFD_WRITETO_OFFSET UNITYSDK_OFFSET(0x202DACE0)

inline static constexpr unsigned int FNKHNOMEMFD_TypeDefinitionIndex = 27170;

	class FNKHNOMEMFD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NAEACGPKNNH; // 0x18
		::System::UInt32 KOGFKAFJNPB; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::FNKHNOMEMFD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FNKHNOMEMFD*>**)UnitySDK::FromName("", "FNKHNOMEMFD")->GetStaticField(0x4FCC0);
		}

		// static const ::System::Object PPBAGFBKGBK; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FNKHNOMEMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNKHNOMEMFD*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FNKHNOMEMFD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FNKHNOMEMFD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FNKHNOMEMFD*>*(*)())((::PBYTE)hIl2Cpp + FNKHNOMEMFD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FNKHNOMEMFD* Clone()
		{
			return ((::FNKHNOMEMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_CLONE_OFFSET))(this);
		}

		::System::UInt32 NKLMJHMJCEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_NKLMJHMJCEB_OFFSET))(this);
		}

		::System::Void GCMNAFEEDOB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_GCMNAFEEDOB_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FNKHNOMEMFD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FNKHNOMEMFD*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FNKHNOMEMFD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FNKHNOMEMFD*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FNKHNOMEMFD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
