#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class APHKOFKECCK;
class FAOEGBHJBED;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FAOEGBHJBED_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E2FD850)
#define FAOEGBHJBED_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FDCF0)
#define FAOEGBHJBED_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FE0A0)
#define FAOEGBHJBED_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FD7B0)
#define FAOEGBHJBED_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FD740)
#define FAOEGBHJBED_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FD730)
#define FAOEGBHJBED_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FD9F0)
#define FAOEGBHJBED_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FD870)
#define FAOEGBHJBED_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E2FD840)
#define FAOEGBHJBED_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FDB70)
#define FAOEGBHJBED_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FD6F0)
#define FAOEGBHJBED_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FDEA0)
#define FAOEGBHJBED_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FDDC0)
#define FAOEGBHJBED_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E2FD860)
#define FAOEGBHJBED_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E2FD830)
#define FAOEGBHJBED_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FD720)
#define FAOEGBHJBED_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FDBB0)
#define FAOEGBHJBED_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FDC10)

inline static constexpr unsigned int FAOEGBHJBED_TypeDefinitionIndex = 26089;

	class FAOEGBHJBED : public ::System::Object
	{
	public:
		::APHKOFKECCK* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 NAEACGPKNNH; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FAOEGBHJBED*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FAOEGBHJBED*>**)UnitySDK::FromName("", "FAOEGBHJBED")->GetStaticField(0x4D5F0);
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

		static ::Google::Protobuf::MessageParser_1<::FAOEGBHJBED*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FAOEGBHJBED*>*(*)())((::PBYTE)hIl2Cpp + FAOEGBHJBED_JJGHOBBFNJD_OFFSET))();
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
