#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NBCOEHFDNDL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NBCOEHFDNDL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x201563B0)
#define NBCOEHFDNDL_CCTOR_OFFSET UNITYSDK_OFFSET(0x20156570)
#define NBCOEHFDNDL_CLONE_OFFSET UNITYSDK_OFFSET(0x20155F90)
#define NBCOEHFDNDL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x20155F60)
#define NBCOEHFDNDL_CTOR_OFFSET UNITYSDK_OFFSET(0x20155F50)
#define NBCOEHFDNDL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x201560E0)
#define NBCOEHFDNDL_EQUALS_OFFSET UNITYSDK_OFFSET(0x20156000)
#define NBCOEHFDNDL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x20156260)
#define NBCOEHFDNDL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x20155F10)
#define NBCOEHFDNDL_LJJDDOMKMLA_OFFSET UNITYSDK_OFFSET(0x20155FE0)
#define NBCOEHFDNDL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x20156410)
#define NBCOEHFDNDL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x201563E0)
#define NBCOEHFDNDL_OKIGCFPMBLK_OFFSET UNITYSDK_OFFSET(0x20155FF0)
#define NBCOEHFDNDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x20155F40)
#define NBCOEHFDNDL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x20156290)
#define NBCOEHFDNDL_WRITETO_OFFSET UNITYSDK_OFFSET(0x201562F0)

inline static constexpr unsigned int NBCOEHFDNDL_TypeDefinitionIndex = 32803;

	class NBCOEHFDNDL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::Boolean EANAKLCIGNI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NBCOEHFDNDL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NBCOEHFDNDL*>**)UnitySDK::FromName("", "NBCOEHFDNDL")->GetStaticField(0x57F60);
		}

		// static const ::System::Object NFKMDPBNLEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NBCOEHFDNDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBCOEHFDNDL*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NBCOEHFDNDL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NBCOEHFDNDL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NBCOEHFDNDL*>*(*)())((::PBYTE)hIl2Cpp + NBCOEHFDNDL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NBCOEHFDNDL* Clone()
		{
			return ((::NBCOEHFDNDL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_CLONE_OFFSET))(this);
		}

		::System::Boolean LJJDDOMKMLA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_LJJDDOMKMLA_OFFSET))(this);
		}

		::System::Void OKIGCFPMBLK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_OKIGCFPMBLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NBCOEHFDNDL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NBCOEHFDNDL*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NBCOEHFDNDL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBCOEHFDNDL*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NBCOEHFDNDL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
