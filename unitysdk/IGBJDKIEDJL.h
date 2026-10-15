#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IGBJDKIEDJL;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define IGBJDKIEDJL_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E61B1D0)
#define IGBJDKIEDJL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E61B410)
#define IGBJDKIEDJL_CLONE_OFFSET UNITYSDK_OFFSET(0x1E61ACD0)
#define IGBJDKIEDJL_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E61AC90)
#define IGBJDKIEDJL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E61AC80)
#define IGBJDKIEDJL_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E61AE80)
#define IGBJDKIEDJL_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E61AD80)
#define IGBJDKIEDJL_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E61B020)
#define IGBJDKIEDJL_GLDPFFLEBGK_OFFSET UNITYSDK_OFFSET(0x1E61AD30)
#define IGBJDKIEDJL_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E61AC40)
#define IGBJDKIEDJL_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E61B280)
#define IGBJDKIEDJL_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E61B240)
#define IGBJDKIEDJL_NHPNOKFJCKL_OFFSET UNITYSDK_OFFSET(0x1E61AD20)
#define IGBJDKIEDJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E61AC70)
#define IGBJDKIEDJL_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E61B0E0)
#define IGBJDKIEDJL_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E61B140)

inline static constexpr unsigned int IGBJDKIEDJL_TypeDefinitionIndex = 30823;

	class IGBJDKIEDJL : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::String* LKKJAHOJCME; // 0x18
		static ::Google::Protobuf::MessageParser_1<::IGBJDKIEDJL*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::IGBJDKIEDJL*>**)UnitySDK::FromName("", "IGBJDKIEDJL")->GetStaticField(0x4AA30);
		}

		// static const ::System::Object FNIIGHEHCFJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::IGBJDKIEDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGBJDKIEDJL*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IGBJDKIEDJL_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::IGBJDKIEDJL*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::IGBJDKIEDJL*>*(*)())((::PBYTE)hIl2Cpp + IGBJDKIEDJL_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::IGBJDKIEDJL* Clone()
		{
			return ((::IGBJDKIEDJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_CLONE_OFFSET))(this);
		}

		::System::String* NHPNOKFJCKL()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_NHPNOKFJCKL_OFFSET))(this);
		}

		::System::Void GLDPFFLEBGK(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_GLDPFFLEBGK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::IGBJDKIEDJL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IGBJDKIEDJL*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::IGBJDKIEDJL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGBJDKIEDJL*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + IGBJDKIEDJL_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
