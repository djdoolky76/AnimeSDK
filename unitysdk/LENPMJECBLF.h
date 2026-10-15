#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENPMJECBLF;
class ODHJEDHKHOD;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define LENPMJECBLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E9384C0)
#define LENPMJECBLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E938870)
#define LENPMJECBLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E937EA0)
#define LENPMJECBLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E937E30)
#define LENPMJECBLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E937E20)
#define LENPMJECBLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E9380B0)
#define LENPMJECBLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E937F40)
#define LENPMJECBLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E938380)
#define LENPMJECBLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E937DE0)
#define LENPMJECBLF_KFEKNBPADEC_OFFSET UNITYSDK_OFFSET(0x1E937F30)
#define LENPMJECBLF_KHPMAGBEICC_OFFSET UNITYSDK_OFFSET(0x1E937F20)
#define LENPMJECBLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E938660)
#define LENPMJECBLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E938520)
#define LENPMJECBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E937E10)
#define LENPMJECBLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E9383D0)
#define LENPMJECBLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E938430)

inline static constexpr unsigned int LENPMJECBLF_TypeDefinitionIndex = 33866;

	class LENPMJECBLF : public ::System::Object
	{
	public:
		::ODHJEDHKHOD* NIJMIMJNJIM; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "LENPMJECBLF")->GetStaticField(0x39B40);
		}

		// static const ::System::Object IDDKMIKPDPC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::LENPMJECBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENPMJECBLF*))((::PBYTE)hIl2Cpp + LENPMJECBLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENPMJECBLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + LENPMJECBLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::LENPMJECBLF* Clone()
		{
			return ((::LENPMJECBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_CLONE_OFFSET))(this);
		}

		::ODHJEDHKHOD* KHPMAGBEICC()
		{
			return ((::ODHJEDHKHOD*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_KHPMAGBEICC_OFFSET))(this);
		}

		::System::Void KFEKNBPADEC(::ODHJEDHKHOD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ODHJEDHKHOD*))((::PBYTE)hIl2Cpp + LENPMJECBLF_KFEKNBPADEC_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LENPMJECBLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::LENPMJECBLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LENPMJECBLF*))((::PBYTE)hIl2Cpp + LENPMJECBLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + LENPMJECBLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::LENPMJECBLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LENPMJECBLF*))((::PBYTE)hIl2Cpp + LENPMJECBLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + LENPMJECBLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
