#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFFOCFJNBF;
class HFGBCEKGFHK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HFGBCEKGFHK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E567960)
#define HFGBCEKGFHK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E567C60)
#define HFGBCEKGFHK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5674E0)
#define HFGBCEKGFHK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E567430)
#define HFGBCEKGFHK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5673E0)
#define HFGBCEKGFHK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5676C0)
#define HFGBCEKGFHK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E567540)
#define HFGBCEKGFHK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5677E0)
#define HFGBCEKGFHK_JFENPNKDNNO_OFFSET UNITYSDK_OFFSET(0x1E567530)
#define HFGBCEKGFHK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E567370)
#define HFGBCEKGFHK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E567AA0)
#define HFGBCEKGFHK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E567A00)
#define HFGBCEKGFHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5673D0)
#define HFGBCEKGFHK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E567850)
#define HFGBCEKGFHK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5678B0)

inline static constexpr unsigned int HFGBCEKGFHK_TypeDefinitionIndex = 32646;

	class HFGBCEKGFHK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::AEFFOCFJNBF*>* DNEGCPEICDO; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HFGBCEKGFHK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HFGBCEKGFHK*>**)UnitySDK::FromName("", "HFGBCEKGFHK")->GetStaticField(0x34310);
		}

		static ::Google::Protobuf::FieldCodec_1<::AEFFOCFJNBF*>** StaticGet_EMGMHKKJPNC()
		{
			return (::Google::Protobuf::FieldCodec_1<::AEFFOCFJNBF*>**)UnitySDK::FromName("", "HFGBCEKGFHK")->GetStaticField(0x34318);
		}

		// static const ::System::Object JNJNDDPKJHN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HFGBCEKGFHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGBCEKGFHK*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HFGBCEKGFHK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HFGBCEKGFHK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HFGBCEKGFHK*>*(*)())((::PBYTE)hIl2Cpp + HFGBCEKGFHK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HFGBCEKGFHK* Clone()
		{
			return ((::HFGBCEKGFHK*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AEFFOCFJNBF*>* JFENPNKDNNO()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AEFFOCFJNBF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_JFENPNKDNNO_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HFGBCEKGFHK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HFGBCEKGFHK*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HFGBCEKGFHK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HFGBCEKGFHK*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HFGBCEKGFHK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
