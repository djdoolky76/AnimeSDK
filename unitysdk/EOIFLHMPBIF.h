#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MMFOGJPOHGJ.h"
#include "unitysdk/System/Object.h"
class EOIFLHMPBIF;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define EOIFLHMPBIF_AFDBLMGBHDJ_OFFSET UNITYSDK_OFFSET(0x1E2FC000)
#define EOIFLHMPBIF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2FC360)
#define EOIFLHMPBIF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FC6C0)
#define EOIFLHMPBIF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2FBF90)
#define EOIFLHMPBIF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2FBF50)
#define EOIFLHMPBIF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBF40)
#define EOIFLHMPBIF_EPEFNNDEPLH_OFFSET UNITYSDK_OFFSET(0x1E2FC010)
#define EOIFLHMPBIF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2FC100)
#define EOIFLHMPBIF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2FC020)
#define EOIFLHMPBIF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2FC1D0)
#define EOIFLHMPBIF_IONLEMBGMHH_OFFSET UNITYSDK_OFFSET(0x1E2FBFF0)
#define EOIFLHMPBIF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2FBF00)
#define EOIFLHMPBIF_KNCKGIKIAPF_OFFSET UNITYSDK_OFFSET(0x1E2FBFE0)
#define EOIFLHMPBIF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2FC540)
#define EOIFLHMPBIF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2FC500)
#define EOIFLHMPBIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2FBF30)
#define EOIFLHMPBIF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2FC210)
#define EOIFLHMPBIF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2FC270)

	class EOIFLHMPBIF : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt64 BPHNGKADNFE; // 0x18
		::MMFOGJPOHGJ DJHNBHFKLLH; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "EOIFLHMPBIF")->GetStaticField(0x54BC0);
		}

		// static const ::System::Object EPDEJFFDDOD; // 0x0
		// static const ::System::Object FLDOFDJBLJB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::EOIFLHMPBIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOIFLHMPBIF*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EOIFLHMPBIF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + EOIFLHMPBIF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::EOIFLHMPBIF* Clone()
		{
			return ((::EOIFLHMPBIF*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_CLONE_OFFSET))(this);
		}

		::MMFOGJPOHGJ KNCKGIKIAPF()
		{
			return ((::MMFOGJPOHGJ(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_KNCKGIKIAPF_OFFSET))(this);
		}

		::System::Void IONLEMBGMHH(::MMFOGJPOHGJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::MMFOGJPOHGJ))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_IONLEMBGMHH_OFFSET))(this, a1);
		}

		::System::UInt64 AFDBLMGBHDJ()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_AFDBLMGBHDJ_OFFSET))(this);
		}

		::System::Void EPEFNNDEPLH(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_EPEFNNDEPLH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::EOIFLHMPBIF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EOIFLHMPBIF*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::EOIFLHMPBIF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EOIFLHMPBIF*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + EOIFLHMPBIF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
