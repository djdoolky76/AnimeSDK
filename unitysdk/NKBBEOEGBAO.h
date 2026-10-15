#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NKBBEOEGBAO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NKBBEOEGBAO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EB55C30)
#define NKBBEOEGBAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB55E70)
#define NKBBEOEGBAO_CLONE_OFFSET UNITYSDK_OFFSET(0x1EB55730)
#define NKBBEOEGBAO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EB556F0)
#define NKBBEOEGBAO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB556E0)
#define NKBBEOEGBAO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EB558E0)
#define NKBBEOEGBAO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EB557E0)
#define NKBBEOEGBAO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EB55A80)
#define NKBBEOEGBAO_HIGMHCHDPDL_OFFSET UNITYSDK_OFFSET(0x1EB55780)
#define NKBBEOEGBAO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EB556A0)
#define NKBBEOEGBAO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EB55CE0)
#define NKBBEOEGBAO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EB55CA0)
#define NKBBEOEGBAO_MJDLJPBICHP_OFFSET UNITYSDK_OFFSET(0x1EB55790)
#define NKBBEOEGBAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EB556D0)
#define NKBBEOEGBAO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EB55B40)
#define NKBBEOEGBAO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EB55BA0)

inline static constexpr unsigned int NKBBEOEGBAO_TypeDefinitionIndex = 32026;

	class NKBBEOEGBAO : public ::System::Object
	{
	public:
		::System::String* JDOJAMHCAJD; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "NKBBEOEGBAO")->GetStaticField(0x65D50);
		}

		// static const ::System::Object DBKOHLFBPNI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NKBBEOEGBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKBBEOEGBAO*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NKBBEOEGBAO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + NKBBEOEGBAO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NKBBEOEGBAO* Clone()
		{
			return ((::NKBBEOEGBAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_CLONE_OFFSET))(this);
		}

		::System::String* HIGMHCHDPDL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_HIGMHCHDPDL_OFFSET))(this);
		}

		::System::Void MJDLJPBICHP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_MJDLJPBICHP_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NKBBEOEGBAO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NKBBEOEGBAO*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NKBBEOEGBAO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NKBBEOEGBAO*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NKBBEOEGBAO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
