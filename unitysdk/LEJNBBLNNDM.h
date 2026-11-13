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

#define LEJNBBLNNDM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F8240A0)
#define LEJNBBLNNDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8243E0)
#define LEJNBBLNNDM_CLONE_OFFSET UNITYSDK_OFFSET(0x1F823900)
#define LEJNBBLNNDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F823810)
#define LEJNBBLNNDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1F823800)
#define LEJNBBLNNDM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F823CC0)
#define LEJNBBLNNDM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F823A70)
#define LEJNBBLNNDM_FHGAPGHAPFH_OFFSET UNITYSDK_OFFSET(0x1F823A60)
#define LEJNBBLNNDM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F823EF0)
#define LEJNBBLNNDM_IOIFPHAMFDF_OFFSET UNITYSDK_OFFSET(0x1F823A50)
#define LEJNBBLNNDM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F823790)
#define LEJNBBLNNDM_LPJGBMNIAIL_OFFSET UNITYSDK_OFFSET(0x1F823A30)
#define LEJNBBLNNDM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F824230)
#define LEJNBBLNNDM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F824130)
#define LEJNBBLNNDM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F8237F0)
#define LEJNBBLNNDM_PLNBIBDNIJK_OFFSET UNITYSDK_OFFSET(0x1F823A40)
#define LEJNBBLNNDM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F823F60)
#define LEJNBBLNNDM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F823FC0)

inline static constexpr unsigned int LEJNBBLNNDM_TypeDefinitionIndex = 32656;

	class LEJNBBLNNDM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EPKGFJDJMHM* GAPGOEGADAD; // 0x18
		::OBEBKODGODB* HDAIPLJBGAB; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LEJNBBLNNDM*>**)UnitySDK::FromName("", "LEJNBBLNNDM")->GetStaticField(0x2FCE0);
		}

		// static const ::System::Object GANGLFDOJDI; // 0x0
		// static const ::System::Object CGMFPGNNGEK; // 0x0
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

		::EPKGFJDJMHM* LPJGBMNIAIL()
		{
			return ((::EPKGFJDJMHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_LPJGBMNIAIL_OFFSET))(this);
		}

		::System::Void PLNBIBDNIJK(::EPKGFJDJMHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPKGFJDJMHM*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_PLNBIBDNIJK_OFFSET))(this, a1);
		}

		::OBEBKODGODB* IOIFPHAMFDF()
		{
			return ((::OBEBKODGODB*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_IOIFPHAMFDF_OFFSET))(this);
		}

		::System::Void FHGAPGHAPFH(::OBEBKODGODB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OBEBKODGODB*))((::PBYTE)hIl2Cpp + LEJNBBLNNDM_FHGAPGHAPFH_OFFSET))(this, a1);
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
