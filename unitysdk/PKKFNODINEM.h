#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PKKFNODINEM;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PKKFNODINEM_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DF93DD0)
#define PKKFNODINEM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DF93E70)
#define PKKFNODINEM_CLONE_OFFSET UNITYSDK_OFFSET(0x1DF93AC0)
#define PKKFNODINEM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DF93A90)
#define PKKFNODINEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF93A80)
#define PKKFNODINEM_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DF93BD0)
#define PKKFNODINEM_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DF93B00)
#define PKKFNODINEM_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DF93D30)
#define PKKFNODINEM_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DF93A40)
#define PKKFNODINEM_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DF93E20)
#define PKKFNODINEM_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DF93DF0)
#define PKKFNODINEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DF93A70)
#define PKKFNODINEM_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DF93D60)
#define PKKFNODINEM_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DF93DC0)

inline static constexpr unsigned int PKKFNODINEM_TypeDefinitionIndex = 26941;

	class PKKFNODINEM : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		static ::Google::Protobuf::MessageParser_1<::PKKFNODINEM*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PKKFNODINEM*>**)UnitySDK::FromName("", "PKKFNODINEM")->GetStaticField(0x49E70);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PKKFNODINEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKFNODINEM*))((::PBYTE)hIl2Cpp + PKKFNODINEM_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PKKFNODINEM_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PKKFNODINEM*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PKKFNODINEM*>*(*)())((::PBYTE)hIl2Cpp + PKKFNODINEM_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PKKFNODINEM* Clone()
		{
			return ((::PKKFNODINEM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_CLONE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PKKFNODINEM_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PKKFNODINEM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PKKFNODINEM*))((::PBYTE)hIl2Cpp + PKKFNODINEM_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PKKFNODINEM_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PKKFNODINEM_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PKKFNODINEM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKKFNODINEM*))((::PBYTE)hIl2Cpp + PKKFNODINEM_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PKKFNODINEM_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
