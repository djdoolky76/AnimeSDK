#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APHKOFKECCK;
class FAOEGBHJBED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAOEGBHJBED_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E32AEE0)
#define FAOEGBHJBED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E32B380)
#define FAOEGBHJBED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E32B730)
#define FAOEGBHJBED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E32AE40)
#define FAOEGBHJBED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E32ADD0)
#define FAOEGBHJBED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E32ADC0)
#define FAOEGBHJBED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E32B080)
#define FAOEGBHJBED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E32AF00)
#define FAOEGBHJBED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E32AED0)
#define FAOEGBHJBED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E32B200)
#define FAOEGBHJBED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E32AD80)
#define FAOEGBHJBED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E32B530)
#define FAOEGBHJBED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E32B450)
#define FAOEGBHJBED_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E32AEF0)
#define FAOEGBHJBED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E32AEC0)
#define FAOEGBHJBED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E32ADB0)
#define FAOEGBHJBED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E32B240)
#define FAOEGBHJBED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E32B2A0)

inline static constexpr unsigned int FAOEGBHJBED_TypeDefinitionIndex = 26089;

	class FAOEGBHJBED : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::APHKOFKECCK* LKDEFKKLEDJ; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "FAOEGBHJBED")->GetStaticField(0x587A0);
		}

		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object HNBHJOFPFLM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FAOEGBHJBED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAOEGBHJBED*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAOEGBHJBED_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + FAOEGBHJBED_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FAOEGBHJBED* Clone()
		{
			return ((::FAOEGBHJBED*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_CLONE_OFFSET))(this);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FAOEGBHJBED_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::APHKOFKECCK* BLBBMAGLFDL()
		{
			return ((::APHKOFKECCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::APHKOFKECCK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APHKOFKECCK*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FAOEGBHJBED* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FAOEGBHJBED*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FAOEGBHJBED_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FAOEGBHJBED* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAOEGBHJBED*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FAOEGBHJBED_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
