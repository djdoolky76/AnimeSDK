#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LHHGCDLCJDA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LHHGCDLCJDA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E932F60)
#define LHHGCDLCJDA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E933270)
#define LHHGCDLCJDA_CLONE_OFFSET UNITYSDK_OFFSET(0x1E932AE0)
#define LHHGCDLCJDA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E932AA0)
#define LHHGCDLCJDA_CTOR_OFFSET UNITYSDK_OFFSET(0x1E932A90)
#define LHHGCDLCJDA_EHANHCFAENH_OFFSET UNITYSDK_OFFSET(0x1E932B70)
#define LHHGCDLCJDA_EIOMMLPIAKP_OFFSET UNITYSDK_OFFSET(0x1E932B50)
#define LHHGCDLCJDA_EJKLCCIOMDH_OFFSET UNITYSDK_OFFSET(0x1E932B30)
#define LHHGCDLCJDA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E932C80)
#define LHHGCDLCJDA_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E932B90)
#define LHHGCDLCJDA_GEMDLCGEPMD_OFFSET UNITYSDK_OFFSET(0x1E932B60)
#define LHHGCDLCJDA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E932D60)
#define LHHGCDLCJDA_HCKNJHLADBK_OFFSET UNITYSDK_OFFSET(0x1E932B80)
#define LHHGCDLCJDA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E932A50)
#define LHHGCDLCJDA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E9330D0)
#define LHHGCDLCJDA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E933080)
#define LHHGCDLCJDA_OAMFFKDDCON_OFFSET UNITYSDK_OFFSET(0x1E932B40)
#define LHHGCDLCJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E932A80)
#define LHHGCDLCJDA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E932D90)
#define LHHGCDLCJDA_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E932DF0)

inline static constexpr unsigned int LHHGCDLCJDA_TypeDefinitionIndex = 30241;

	class LHHGCDLCJDA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 FLBKCMIIFFP; // 0x18
		::System::Boolean DFCONJODMDO; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 GEMFJILOPLL; // 0x20
		static ::Google::Protobuf::MessageParser_1<::LHHGCDLCJDA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::LHHGCDLCJDA*>**)UnitySDK::FromName("", "LHHGCDLCJDA")->GetStaticField(0x1DE90);
		}

		// static const ::System::Object IEAPGPOMBIN; // 0x0
		// static const ::System::Object AKFFJEHMCCB; // 0x0
		// static const ::System::Object OFGOMHLJLMI; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LHHGCDLCJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHGCDLCJDA*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LHHGCDLCJDA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::LHHGCDLCJDA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::LHHGCDLCJDA*>*(*)())((::PBYTE)hIl2Cpp + LHHGCDLCJDA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LHHGCDLCJDA* Clone()
		{
			return ((::LHHGCDLCJDA*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_CLONE_OFFSET))(this);
		}

		::System::UInt32 EJKLCCIOMDH()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_EJKLCCIOMDH_OFFSET))(this);
		}

		::System::Void OAMFFKDDCON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_OAMFFKDDCON_OFFSET))(this, a1);
		}

		::System::UInt32 EIOMMLPIAKP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_EIOMMLPIAKP_OFFSET))(this);
		}

		::System::Void GEMDLCGEPMD(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_GEMDLCGEPMD_OFFSET))(this, a1);
		}

		::System::Boolean EHANHCFAENH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_EHANHCFAENH_OFFSET))(this);
		}

		::System::Void HCKNJHLADBK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_HCKNJHLADBK_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LHHGCDLCJDA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHHGCDLCJDA*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LHHGCDLCJDA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LHHGCDLCJDA*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LHHGCDLCJDA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
