#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEJCDBOCLHM;
class KPLHHLEGGCD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define DEJCDBOCLHM_AILACCLIFBD_OFFSET UNITYSDK_OFFSET(0x1E1680E0)
#define DEJCDBOCLHM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E1684D0)
#define DEJCDBOCLHM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1687D0)
#define DEJCDBOCLHM_CLONE_OFFSET UNITYSDK_OFFSET(0x1E1680B0)
#define DEJCDBOCLHM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E168000)
#define DEJCDBOCLHM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E167FB0)
#define DEJCDBOCLHM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E168230)
#define DEJCDBOCLHM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E1680F0)
#define DEJCDBOCLHM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E168350)
#define DEJCDBOCLHM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E167F70)
#define DEJCDBOCLHM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E168610)
#define DEJCDBOCLHM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E168570)
#define DEJCDBOCLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E167FA0)
#define DEJCDBOCLHM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E1683C0)
#define DEJCDBOCLHM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E168420)

inline static constexpr unsigned int DEJCDBOCLHM_TypeDefinitionIndex = 28048;

	class DEJCDBOCLHM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* JCBODCAOPNP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::FieldCodec_1<::KPLHHLEGGCD*>** StaticGet_MHKCJBOBAEH()
		{
			return (::Google::Protobuf::FieldCodec_1<::KPLHHLEGGCD*>**)UnitySDK::FromName("", "DEJCDBOCLHM")->GetStaticField(0x2C670);
		}

		static ::Google::Protobuf::MessageParser_1<::DEJCDBOCLHM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::DEJCDBOCLHM*>**)UnitySDK::FromName("", "DEJCDBOCLHM")->GetStaticField(0x2C678);
		}

		// static const ::System::Object BFLHHJPMDGD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::DEJCDBOCLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEJCDBOCLHM*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DEJCDBOCLHM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::DEJCDBOCLHM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::DEJCDBOCLHM*>*(*)())((::PBYTE)hIl2Cpp + DEJCDBOCLHM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::DEJCDBOCLHM* Clone()
		{
			return ((::DEJCDBOCLHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>* AILACCLIFBD()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::KPLHHLEGGCD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_AILACCLIFBD_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::DEJCDBOCLHM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DEJCDBOCLHM*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::DEJCDBOCLHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DEJCDBOCLHM*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + DEJCDBOCLHM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
