#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class COMGNGLLCFN;
class DFMGCEABBAD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DFMGCEABBAD_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x206458F0)
#define DFMGCEABBAD_CCTOR_OFFSET UNITYSDK_OFFSET(0x20645BA0)
#define DFMGCEABBAD_CLONE_OFFSET UNITYSDK_OFFSET(0x1FFBACE0)
#define DFMGCEABBAD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FFBAC50)
#define DFMGCEABBAD_CTOR_OFFSET UNITYSDK_OFFSET(0x1FFBAC10)
#define DFMGCEABBAD_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FFBAE60)
#define DFMGCEABBAD_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FFBAD20)
#define DFMGCEABBAD_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x206457A0)
#define DFMGCEABBAD_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FFBABD0)
#define DFMGCEABBAD_KJBDBPBIIBF_OFFSET UNITYSDK_OFFSET(0x1FFBAD10)
#define DFMGCEABBAD_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20645A00)
#define DFMGCEABBAD_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x20645960)
#define DFMGCEABBAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FFBAC00)
#define DFMGCEABBAD_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20645810)
#define DFMGCEABBAD_WRITETO_OFFSET UNITYSDK_OFFSET(0x20645870)

inline static constexpr unsigned int DFMGCEABBAD_TypeDefinitionIndex = 25896;

	class DFMGCEABBAD : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::COMGNGLLCFN*>* NKAGCEJIBEN; // 0x18
		static ::Google::Protobuf::MessageParser_1<::DFMGCEABBAD*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DFMGCEABBAD*>**)UnitySDK::FromName("", "DFMGCEABBAD")->GetStaticField(0x1E690);
		}

		static ::Google::Protobuf::FieldCodec_1<::COMGNGLLCFN*>** StaticGet_MNCHCOFMDMM()
		{
			return (::Google::Protobuf::FieldCodec_1<::COMGNGLLCFN*>**)UnitySDK::FromName("", "DFMGCEABBAD")->GetStaticField(0x1E698);
		}

		// static const ::System::Object AIICFPIDLIB; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DFMGCEABBAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMGCEABBAD*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFMGCEABBAD_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DFMGCEABBAD*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DFMGCEABBAD*>*(*)())((::PBYTE)hIl2Cpp + DFMGCEABBAD_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DFMGCEABBAD* Clone()
		{
			return ((::DFMGCEABBAD*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::COMGNGLLCFN*>* KJBDBPBIIBF()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::COMGNGLLCFN*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_KJBDBPBIIBF_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DFMGCEABBAD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DFMGCEABBAD*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DFMGCEABBAD_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DFMGCEABBAD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DFMGCEABBAD*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DFMGCEABBAD_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
