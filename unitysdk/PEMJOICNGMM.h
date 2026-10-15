#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PEMJOICNGMM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PEMJOICNGMM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF1DD30)
#define PEMJOICNGMM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF1DF90)
#define PEMJOICNGMM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF1D930)
#define PEMJOICNGMM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF1D8A0)
#define PEMJOICNGMM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D850)
#define PEMJOICNGMM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF1DA60)
#define PEMJOICNGMM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF1D970)
#define PEMJOICNGMM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF1DB50)
#define PEMJOICNGMM_GGBIBBBEIME_OFFSET UNITYSDK_OFFSET(0x1DF1D960)
#define PEMJOICNGMM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF1D810)
#define PEMJOICNGMM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF1DDF0)
#define PEMJOICNGMM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF1DDA0)
#define PEMJOICNGMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF1D840)
#define PEMJOICNGMM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF1DC50)
#define PEMJOICNGMM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF1DCB0)

inline static constexpr unsigned int PEMJOICNGMM_TypeDefinitionIndex = 31420;

	class PEMJOICNGMM : public ::System::Object
	{
	public:
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* OOHIHEEINHP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PEMJOICNGMM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PEMJOICNGMM*>**)UnitySDK::FromName("", "PEMJOICNGMM")->GetStaticField(0x3A370);
		}

		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_KOBKPJHOFJM()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "PEMJOICNGMM")->GetStaticField(0x3A378);
		}

		// static const ::System::Object EKMLLJKGIDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PEMJOICNGMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMJOICNGMM*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PEMJOICNGMM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PEMJOICNGMM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PEMJOICNGMM*>*(*)())((::PBYTE)hIl2Cpp + PEMJOICNGMM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PEMJOICNGMM* Clone()
		{
			return ((::PEMJOICNGMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* GGBIBBBEIME()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_GGBIBBBEIME_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PEMJOICNGMM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PEMJOICNGMM*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PEMJOICNGMM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PEMJOICNGMM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PEMJOICNGMM*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PEMJOICNGMM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
