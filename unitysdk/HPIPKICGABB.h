#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMKALFJHFJP;
class HPIPKICGABB;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HPIPKICGABB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x2004F350)
#define HPIPKICGABB_CCTOR_OFFSET UNITYSDK_OFFSET(0x2004F680)
#define HPIPKICGABB_CLONE_OFFSET UNITYSDK_OFFSET(0x2004EC40)
#define HPIPKICGABB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x2004EBD0)
#define HPIPKICGABB_CTOR_OFFSET UNITYSDK_OFFSET(0x2004EBC0)
#define HPIPKICGABB_EFIJJAGKKLK_OFFSET UNITYSDK_OFFSET(0x2004ECD0)
#define HPIPKICGABB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x2004EE50)
#define HPIPKICGABB_EQUALS_OFFSET UNITYSDK_OFFSET(0x2004ECE0)
#define HPIPKICGABB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x2004F120)
#define HPIPKICGABB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x2004EB80)
#define HPIPKICGABB_KNPALEMOMNC_OFFSET UNITYSDK_OFFSET(0x2004ECC0)
#define HPIPKICGABB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x2004F4B0)
#define HPIPKICGABB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x2004F3B0)
#define HPIPKICGABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x2004EBB0)
#define HPIPKICGABB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x2004F260)
#define HPIPKICGABB_WRITETO_OFFSET UNITYSDK_OFFSET(0x2004F2C0)

inline static constexpr unsigned int HPIPKICGABB_TypeDefinitionIndex = 33795;

	class HPIPKICGABB : public ::System::Object
	{
	public:
		::AMKALFJHFJP* IHKMLPIEIPG; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::HPIPKICGABB*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::HPIPKICGABB*>**)UnitySDK::FromName("", "HPIPKICGABB")->GetStaticField(0x3FD10);
		}

		// static const ::System::Object CKDHNKOODAD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HPIPKICGABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIPKICGABB*))((::PBYTE)hIl2Cpp + HPIPKICGABB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPIPKICGABB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::HPIPKICGABB*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::HPIPKICGABB*>*(*)())((::PBYTE)hIl2Cpp + HPIPKICGABB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HPIPKICGABB* Clone()
		{
			return ((::HPIPKICGABB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_CLONE_OFFSET))(this);
		}

		::AMKALFJHFJP* KNPALEMOMNC()
		{
			return ((::AMKALFJHFJP*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_KNPALEMOMNC_OFFSET))(this);
		}

		::System::Void EFIJJAGKKLK(::AMKALFJHFJP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AMKALFJHFJP*))((::PBYTE)hIl2Cpp + HPIPKICGABB_EFIJJAGKKLK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HPIPKICGABB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HPIPKICGABB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPIPKICGABB*))((::PBYTE)hIl2Cpp + HPIPKICGABB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HPIPKICGABB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HPIPKICGABB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HPIPKICGABB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPIPKICGABB*))((::PBYTE)hIl2Cpp + HPIPKICGABB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HPIPKICGABB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
