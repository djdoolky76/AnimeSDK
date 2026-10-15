#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFNKNNFJILK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define NFNKNNFJILK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1EAD9F20)
#define NFNKNNFJILK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EADA140)
#define NFNKNNFJILK_CLONE_OFFSET UNITYSDK_OFFSET(0x1EAD9B10)
#define NFNKNNFJILK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EAD9AE0)
#define NFNKNNFJILK_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9AD0)
#define NFNKNNFJILK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1EAD9CA0)
#define NFNKNNFJILK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1EAD9BA0)
#define NFNKNNFJILK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1EAD9E10)
#define NFNKNNFJILK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1EAD9A60)
#define NFNKNNFJILK_KDMMPKDFKEO_OFFSET UNITYSDK_OFFSET(0x1EAD9B90)
#define NFNKNNFJILK_LHDJCMAJEMG_OFFSET UNITYSDK_OFFSET(0x1EAD9B80)
#define NFNKNNFJILK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1EAD9FE0)
#define NFNKNNFJILK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1EAD9FB0)
#define NFNKNNFJILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1EAD9AC0)
#define NFNKNNFJILK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1EAD9E40)
#define NFNKNNFJILK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1EAD9EA0)

inline static constexpr unsigned int NFNKNNFJILK_TypeDefinitionIndex = 34846;

	class NFNKNNFJILK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 EPMDEFGJGMP; // 0x18
		static ::Google::Protobuf::MessageParser_1<::NFNKNNFJILK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::NFNKNNFJILK*>**)UnitySDK::FromName("", "NFNKNNFJILK")->GetStaticField(0x63430);
		}

		// static const ::System::Object IOAOIBAEGFN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::NFNKNNFJILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFNKNNFJILK*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFNKNNFJILK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::NFNKNNFJILK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::NFNKNNFJILK*>*(*)())((::PBYTE)hIl2Cpp + NFNKNNFJILK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::NFNKNNFJILK* Clone()
		{
			return ((::NFNKNNFJILK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_CLONE_OFFSET))(this);
		}

		::System::UInt32 LHDJCMAJEMG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_LHDJCMAJEMG_OFFSET))(this);
		}

		::System::Void KDMMPKDFKEO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NFNKNNFJILK_KDMMPKDFKEO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::NFNKNNFJILK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::NFNKNNFJILK*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NFNKNNFJILK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::NFNKNNFJILK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NFNKNNFJILK*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + NFNKNNFJILK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
