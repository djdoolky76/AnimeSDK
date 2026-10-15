#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AKMCODLAEKI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AKMCODLAEKI_AFADJMFGCGN_OFFSET UNITYSDK_OFFSET(0x1E3A3300)
#define AKMCODLAEKI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E3A38B0)
#define AKMCODLAEKI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3B40)
#define AKMCODLAEKI_CLHOECGMLFH_OFFSET UNITYSDK_OFFSET(0x1E3A3310)
#define AKMCODLAEKI_CLONE_OFFSET UNITYSDK_OFFSET(0x1E3A3280)
#define AKMCODLAEKI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E3A3230)
#define AKMCODLAEKI_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3220)
#define AKMCODLAEKI_DKDLBLLMPNE_OFFSET UNITYSDK_OFFSET(0x1E3A32F0)
#define AKMCODLAEKI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E3A3390)
#define AKMCODLAEKI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E3A3360)
#define AKMCODLAEKI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E3A35A0)
#define AKMCODLAEKI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E3A31E0)
#define AKMCODLAEKI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E3A3990)
#define AKMCODLAEKI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E3A3930)
#define AKMCODLAEKI_MNLDMBGAJIF_OFFSET UNITYSDK_OFFSET(0x1E3A32E0)
#define AKMCODLAEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E3A3210)
#define AKMCODLAEKI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E3A3750)
#define AKMCODLAEKI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E3A37B0)

inline static constexpr unsigned int AKMCODLAEKI_TypeDefinitionIndex = 33390;

	class AKMCODLAEKI : public ::System::Object
	{
	public:
		::System::String* PDKNJCIEBHA; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::Double DFKHBNCHKBI; // 0x20
		static ::Google::Protobuf::MessageParser_1<::AKMCODLAEKI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AKMCODLAEKI*>**)UnitySDK::FromName("", "AKMCODLAEKI")->GetStaticField(0x17850);
		}

		// static const ::System::Object JLAAHBJNEML; // 0x0
		// static const ::System::Object AFBDHEMJEPP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AKMCODLAEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKMCODLAEKI*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AKMCODLAEKI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AKMCODLAEKI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AKMCODLAEKI*>*(*)())((::PBYTE)hIl2Cpp + AKMCODLAEKI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AKMCODLAEKI* Clone()
		{
			return ((::AKMCODLAEKI*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_CLONE_OFFSET))(this);
		}

		::System::Double MNLDMBGAJIF()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_MNLDMBGAJIF_OFFSET))(this);
		}

		::System::Void DKDLBLLMPNE(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + AKMCODLAEKI_DKDLBLLMPNE_OFFSET))(this, a1);
		}

		::System::String* AFADJMFGCGN()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_AFADJMFGCGN_OFFSET))(this);
		}

		::System::Void CLHOECGMLFH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_CLHOECGMLFH_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AKMCODLAEKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AKMCODLAEKI*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AKMCODLAEKI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AKMCODLAEKI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AKMCODLAEKI*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AKMCODLAEKI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
