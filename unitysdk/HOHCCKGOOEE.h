#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HOHCCKGOOEE;
class MDGIOENHBEJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HOHCCKGOOEE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5E92E0)
#define HOHCCKGOOEE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5E9580)
#define HOHCCKGOOEE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5E8CE0)
#define HOHCCKGOOEE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E5E8C90)
#define HOHCCKGOOEE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5E8C80)
#define HOHCCKGOOEE_EOPJLKAGEPK_OFFSET UNITYSDK_OFFSET(0x1E5E8D40)
#define HOHCCKGOOEE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E5E8ED0)
#define HOHCCKGOOEE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5E8D60)
#define HOHCCKGOOEE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E5E91A0)
#define HOHCCKGOOEE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E5E8C40)
#define HOHCCKGOOEE_JKHJIOHOBGG_OFFSET UNITYSDK_OFFSET(0x1E5E8D50)
#define HOHCCKGOOEE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E5E93D0)
#define HOHCCKGOOEE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E5E9340)
#define HOHCCKGOOEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E5E8C70)
#define HOHCCKGOOEE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E5E91F0)
#define HOHCCKGOOEE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5E9250)

inline static constexpr unsigned int HOHCCKGOOEE_TypeDefinitionIndex = 26196;

	class HOHCCKGOOEE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::MDGIOENHBEJ* OKIHBKPHLDB; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HOHCCKGOOEE")->GetStaticField(0x4D9F0);
		}

		// static const ::System::Object DDJOOBFKJGL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HOHCCKGOOEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOHCCKGOOEE*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HOHCCKGOOEE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HOHCCKGOOEE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HOHCCKGOOEE* Clone()
		{
			return ((::HOHCCKGOOEE*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_CLONE_OFFSET))(this);
		}

		::MDGIOENHBEJ* EOPJLKAGEPK()
		{
			return ((::MDGIOENHBEJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_EOPJLKAGEPK_OFFSET))(this);
		}

		::System::Void JKHJIOHOBGG(::MDGIOENHBEJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MDGIOENHBEJ*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_JKHJIOHOBGG_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HOHCCKGOOEE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOHCCKGOOEE*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HOHCCKGOOEE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HOHCCKGOOEE*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HOHCCKGOOEE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
