#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AGPKFBLGDIH;
class KAJLLLAAKOG;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class FieldCodec_1; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAJLLLAAKOG_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7B9110)
#define KAJLLLAAKOG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7B94C0)
#define KAJLLLAAKOG_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7B8C60)
#define KAJLLLAAKOG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7B8B30)
#define KAJLLLAAKOG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7B8AA0)
#define KAJLLLAAKOG_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7B8D30)
#define KAJLLLAAKOG_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7B8CD0)
#define KAJLLLAAKOG_FBCEKOGFBHK_OFFSET UNITYSDK_OFFSET(0x1E7B8CB0)
#define KAJLLLAAKOG_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7B8E80)
#define KAJLLLAAKOG_HILNCIEIKJK_OFFSET UNITYSDK_OFFSET(0x1E7B8CC0)
#define KAJLLLAAKOG_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7B8A30)
#define KAJLLLAAKOG_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7B92A0)
#define KAJLLLAAKOG_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7B91F0)
#define KAJLLLAAKOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7B8A90)
#define KAJLLLAAKOG_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7B8FD0)
#define KAJLLLAAKOG_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7B9030)

inline static constexpr unsigned int KAJLLLAAKOG_TypeDefinitionIndex = 28323;

	class KAJLLLAAKOG : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* EIDOLJNCKIN; // 0x18
		::Google::Protobuf::Collections::RepeatedField_1<::AGPKFBLGDIH*>* LALJKCMDCDL; // 0x20
		static ::Google::Protobuf::FieldCodec_1<::System::UInt32>** StaticGet_FAECDPOGFIP()
		{
			return (::Google::Protobuf::FieldCodec_1<::System::UInt32>**)UnitySDK::FromName("", "KAJLLLAAKOG")->GetStaticField(0xCB10);
		}

		static ::Google::Protobuf::FieldCodec_1<::AGPKFBLGDIH*>** StaticGet_DHLNGKFOMKK()
		{
			return (::Google::Protobuf::FieldCodec_1<::AGPKFBLGDIH*>**)UnitySDK::FromName("", "KAJLLLAAKOG")->GetStaticField(0xCB18);
		}

		static ::Google::Protobuf::MessageParser_1<::KAJLLLAAKOG*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAJLLLAAKOG*>**)UnitySDK::FromName("", "KAJLLLAAKOG")->GetStaticField(0xCB20);
		}

		// static const ::System::Object BEEJOMPINMN; // 0x0
		// static const ::System::Object PAICPDPECJF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAJLLLAAKOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJLLLAAKOG*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAJLLLAAKOG_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KAJLLLAAKOG*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAJLLLAAKOG*>*(*)())((::PBYTE)hIl2Cpp + KAJLLLAAKOG_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAJLLLAAKOG* Clone()
		{
			return ((::KAJLLLAAKOG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_CLONE_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::AGPKFBLGDIH*>* FBCEKOGFBHK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::AGPKFBLGDIH*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_FBCEKOGFBHK_OFFSET))(this);
		}

		::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>* HILNCIEIKJK()
		{
			return ((::Google::Protobuf::Collections::RepeatedField_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_HILNCIEIKJK_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAJLLLAAKOG* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAJLLLAAKOG*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAJLLLAAKOG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJLLLAAKOG*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAJLLLAAKOG_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
