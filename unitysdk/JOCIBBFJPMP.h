#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JOCIBBFJPMP;
class OIHFMECAJBH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JOCIBBFJPMP_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7700E0)
#define JOCIBBFJPMP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7703E0)
#define JOCIBBFJPMP_CLONE_OFFSET UNITYSDK_OFFSET(0x1E76FC60)
#define JOCIBBFJPMP_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E76FBB0)
#define JOCIBBFJPMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E76FB60)
#define JOCIBBFJPMP_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E76FE40)
#define JOCIBBFJPMP_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E76FCC0)
#define JOCIBBFJPMP_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E76FF60)
#define JOCIBBFJPMP_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E76FAF0)
#define JOCIBBFJPMP_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E770220)
#define JOCIBBFJPMP_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E770180)
#define JOCIBBFJPMP_MJOEMBBMBON_OFFSET UNITYSDK_OFFSET(0x1E76FCB0)
#define JOCIBBFJPMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E76FB50)
#define JOCIBBFJPMP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E76FFD0)
#define JOCIBBFJPMP_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E770030)

inline static constexpr unsigned int JOCIBBFJPMP_TypeDefinitionIndex = 25171;

	class JOCIBBFJPMP : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::OIHFMECAJBH*>* CBFGBDBJHID; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JOCIBBFJPMP*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JOCIBBFJPMP*>**)UnitySDK::FromName("", "JOCIBBFJPMP")->GetStaticField(0x1E470);
		}

		static ::Google::Protobuf::FieldCodec_1<::OIHFMECAJBH*>** StaticGet_DDFODHOFBIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::OIHFMECAJBH*>**)UnitySDK::FromName("", "JOCIBBFJPMP")->GetStaticField(0x1E478);
		}

		// static const ::System::Object IMGDAOEBONP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JOCIBBFJPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JOCIBBFJPMP_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JOCIBBFJPMP*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JOCIBBFJPMP*>*(*)())((::PBYTE)hIl2Cpp + JOCIBBFJPMP_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JOCIBBFJPMP* Clone()
		{
			return ((::JOCIBBFJPMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::OIHFMECAJBH*>* MJOEMBBMBON()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::OIHFMECAJBH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_MJOEMBBMBON_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JOCIBBFJPMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JOCIBBFJPMP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOCIBBFJPMP*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JOCIBBFJPMP_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
