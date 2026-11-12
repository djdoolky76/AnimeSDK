#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJEFBKAKNAH;
class ONHKODAFEMH;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define FJEFBKAKNAH_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F6A6100)
#define FJEFBKAKNAH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6A6420)
#define FJEFBKAKNAH_CLONE_OFFSET UNITYSDK_OFFSET(0x1F6A5B70)
#define FJEFBKAKNAH_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F6A5B00)
#define FJEFBKAKNAH_CTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5AF0)
#define FJEFBKAKNAH_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F6A5DB0)
#define FJEFBKAKNAH_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F6A5C30)
#define FJEFBKAKNAH_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F6A5F30)
#define FJEFBKAKNAH_JIHJMJJMDKB_OFFSET UNITYSDK_OFFSET(0x1F6A5BF0)
#define FJEFBKAKNAH_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F6A5AB0)
#define FJEFBKAKNAH_KPFBAKNHMAO_OFFSET UNITYSDK_OFFSET(0x1F6A5C00)
#define FJEFBKAKNAH_LGNJMEKLHIE_OFFSET UNITYSDK_OFFSET(0x1F6A5C20)
#define FJEFBKAKNAH_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F6A6260)
#define FJEFBKAKNAH_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F6A61D0)
#define FJEFBKAKNAH_MPMFFOGBGGM_OFFSET UNITYSDK_OFFSET(0x1F6A5C10)
#define FJEFBKAKNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F6A5AE0)
#define FJEFBKAKNAH_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F6A5FC0)
#define FJEFBKAKNAH_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F6A6020)

inline static constexpr unsigned int FJEFBKAKNAH_TypeDefinitionIndex = 31845;

	class FJEFBKAKNAH : public ::System::Object
	{
	public:
		::ONHKODAFEMH* GAICODFFOFL; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 FLFEKHCLHCE; // 0x20
		static ::Google::Protobuf::MessageParser_1<::FJEFBKAKNAH*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::FJEFBKAKNAH*>**)UnitySDK::FromName("", "FJEFBKAKNAH")->GetStaticField(0x17900);
		}

		// static const ::System::Object CPHNGFPDBPG; // 0x0
		// static const ::System::Object MOLKOGENBDE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::FJEFBKAKNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::FJEFBKAKNAH*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::FJEFBKAKNAH*>*(*)())((::PBYTE)hIl2Cpp + FJEFBKAKNAH_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::FJEFBKAKNAH* Clone()
		{
			return ((::FJEFBKAKNAH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CLONE_OFFSET))(this);
		}

		::System::UInt32 JIHJMJJMDKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_JIHJMJJMDKB_OFFSET))(this);
		}

		::System::Void KPFBAKNHMAO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_KPFBAKNHMAO_OFFSET))(this, a1);
		}

		::ONHKODAFEMH* MPMFFOGBGGM()
		{
			return ((::ONHKODAFEMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MPMFFOGBGGM_OFFSET))(this);
		}

		::System::Void LGNJMEKLHIE(::ONHKODAFEMH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ONHKODAFEMH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_LGNJMEKLHIE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::FJEFBKAKNAH* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::FJEFBKAKNAH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJEFBKAKNAH*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + FJEFBKAKNAH_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
