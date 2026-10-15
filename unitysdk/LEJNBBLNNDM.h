#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EPKGFJDJMHM;
class LEJNBBLNNDM;
class OBEBKODGODB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LEJNBBLNNDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E907E50)
#define LEJNBBLNNDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E908190)
#define LEJNBBLNNDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E9076B0)
#define LEJNBBLNNDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E9075C0)
#define LEJNBBLNNDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9075B0)
#define LEJNBBLNNDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E907A70)
#define LEJNBBLNNDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E907820)
#define LEJNBBLNNDM_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1E9077F0)
#define LEJNBBLNNDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E907CA0)
#define LEJNBBLNNDM_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1E9077E0)
#define LEJNBBLNNDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E907540)
#define LEJNBBLNNDM_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1E907800)
#define LEJNBBLNNDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E907FE0)
#define LEJNBBLNNDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E907EE0)
#define LEJNBBLNNDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E9075A0)
#define LEJNBBLNNDM_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1E907810)
#define LEJNBBLNNDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E907D10)
#define LEJNBBLNNDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E907D70)

inline static constexpr unsigned int LEJNBBLNNDM_TypeDefinitionIndex = 31743;

	class LEJNBBLNNDM : public ::System::Object
	{
	public:
		::OBEBKODGODB* HDAIPLJBGAB; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::EPKGFJDJMHM* GAPGOEGADAD; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>**)UnitySDK::FromName("", "LEJNBBLNNDM")->GetStaticField(0x320E0);
		}

		// static const ::System::Object CGMFPGNNGEK; // 0x0
		// static const ::System::Object GANGLFDOJDI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LEJNBBLNNDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJNBBLNNDM*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJNBBLNNDM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>*(*)())((::PBYTE)hIl2Cpp + LEJNBBLNNDM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LEJNBBLNNDM* Clone()
		{
			return ((::LEJNBBLNNDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_CLONE_OFFSET))(this);
		}

		::OBEBKODGODB* IOIFPHAMFDF()
		{
			return ((::OBEBKODGODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::OBEBKODGODB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEBKODGODB*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_FHGAPGHAPFH_OFFSET))(this, a1);
		}

		::EPKGFJDJMHM* LPJGBMNIAIL()
		{
			return ((::EPKGFJDJMHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::EPKGFJDJMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPKGFJDJMHM*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LEJNBBLNNDM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LEJNBBLNNDM*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LEJNBBLNNDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LEJNBBLNNDM*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
