#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ELNAIJEFGMK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define ELNAIJEFGMK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E2A99D0)
#define ELNAIJEFGMK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2A9BF0)
#define ELNAIJEFGMK_CLONE_OFFSET UNITYSDK_OFFSET(0x1E2A9620)
#define ELNAIJEFGMK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E2A95F0)
#define ELNAIJEFGMK_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2A95E0)
#define ELNAIJEFGMK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E2A9750)
#define ELNAIJEFGMK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E2A9680)
#define ELNAIJEFGMK_GAMOKDFCKDB_OFFSET UNITYSDK_OFFSET(0x1E2A9670)
#define ELNAIJEFGMK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E2A98C0)
#define ELNAIJEFGMK_HAAECAKOKKB_OFFSET UNITYSDK_OFFSET(0x1E2A9660)
#define ELNAIJEFGMK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E2A95A0)
#define ELNAIJEFGMK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E2A9A90)
#define ELNAIJEFGMK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E2A9A60)
#define ELNAIJEFGMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E2A95D0)
#define ELNAIJEFGMK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E2A98F0)
#define ELNAIJEFGMK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E2A9950)

inline static constexpr unsigned int ELNAIJEFGMK_TypeDefinitionIndex = 30744;

	class ELNAIJEFGMK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 NLBFDLOJBMJ; // 0x18
		static ::Google::Protobuf::MessageParser_1<::ELNAIJEFGMK*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::ELNAIJEFGMK*>**)UnitySDK::FromName("", "ELNAIJEFGMK")->GetStaticField(0x52040);
		}

		// static const ::System::Object DENKEPPLFEE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::ELNAIJEFGMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELNAIJEFGMK*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ELNAIJEFGMK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::ELNAIJEFGMK*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::ELNAIJEFGMK*>*(*)())((::PBYTE)hIl2Cpp + ELNAIJEFGMK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::ELNAIJEFGMK* Clone()
		{
			return ((::ELNAIJEFGMK*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_CLONE_OFFSET))(this);
		}

		::System::UInt32 HAAECAKOKKB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_HAAECAKOKKB_OFFSET))(this);
		}

		::System::Void GAMOKDFCKDB(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_GAMOKDFCKDB_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::ELNAIJEFGMK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ELNAIJEFGMK*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::ELNAIJEFGMK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ELNAIJEFGMK*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + ELNAIJEFGMK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
