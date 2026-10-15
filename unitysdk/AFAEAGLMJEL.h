#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AFAEAGLMJEL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AFAEAGLMJEL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E0E2A20)
#define AFAEAGLMJEL_CCCMLFMHHGI_OFFSET UNITYSDK_OFFSET(0x1E0E26B0)
#define AFAEAGLMJEL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2C40)
#define AFAEAGLMJEL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E0E2670)
#define AFAEAGLMJEL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0E2640)
#define AFAEAGLMJEL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2630)
#define AFAEAGLMJEL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E0E27A0)
#define AFAEAGLMJEL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E26D0)
#define AFAEAGLMJEL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E2910)
#define AFAEAGLMJEL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E0E25F0)
#define AFAEAGLMJEL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E0E2AE0)
#define AFAEAGLMJEL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E0E2AB0)
#define AFAEAGLMJEL_MLDJFAEOJBM_OFFSET UNITYSDK_OFFSET(0x1E0E26C0)
#define AFAEAGLMJEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E0E2620)
#define AFAEAGLMJEL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E2940)
#define AFAEAGLMJEL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E0E29A0)

inline static constexpr unsigned int AFAEAGLMJEL_TypeDefinitionIndex = 34513;

	class AFAEAGLMJEL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 HJOAMKICMLG; // 0x18
		static ::Google::Protobuf::MessageParser_1<::AFAEAGLMJEL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AFAEAGLMJEL*>**)UnitySDK::FromName("", "AFAEAGLMJEL")->GetStaticField(0x34A10);
		}

		// static const ::System::Object FDGNFAPFFEI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AFAEAGLMJEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AFAEAGLMJEL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AFAEAGLMJEL*>*(*)())((::PBYTE)hIl2Cpp + AFAEAGLMJEL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AFAEAGLMJEL* Clone()
		{
			return ((::AFAEAGLMJEL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CLONE_OFFSET))(this);
		}

		::System::UInt32 CCCMLFMHHGI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CCCMLFMHHGI_OFFSET))(this);
		}

		::System::Void MLDJFAEOJBM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MLDJFAEOJBM_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AFAEAGLMJEL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AFAEAGLMJEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFAEAGLMJEL*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AFAEAGLMJEL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
