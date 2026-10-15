#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHEOJNCGFH;
class KAAJEKKIDIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAAJEKKIDIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E7DC860)
#define KAAJEKKIDIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7DCB00)
#define KAAJEKKIDIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E7DC1A0)
#define KAAJEKKIDIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7DC110)
#define KAAJEKKIDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC100)
#define KAAJEKKIDIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7DC440)
#define KAAJEKKIDIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7DC2A0)
#define KAAJEKKIDIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E7DC710)
#define KAAJEKKIDIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7DC090)
#define KAAJEKKIDIE_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1E7DC290)
#define KAAJEKKIDIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E7DC970)
#define KAAJEKKIDIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E7DC8C0)
#define KAAJEKKIDIE_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1E7DC280)
#define KAAJEKKIDIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7DC0F0)
#define KAAJEKKIDIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E7DC770)
#define KAAJEKKIDIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7DC7D0)

inline static constexpr unsigned int KAAJEKKIDIE_TypeDefinitionIndex = 31694;

	class KAAJEKKIDIE : public ::System::Object
	{
	public:
		::EMHEOJNCGFH* FOFDNMNEBOI; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "KAAJEKKIDIE")->GetStaticField(0xCEE0);
		}

		// static const ::System::Object PEFBHJBLDLJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAAJEKKIDIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAAJEKKIDIE*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KAAJEKKIDIE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + KAAJEKKIDIE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KAAJEKKIDIE* Clone()
		{
			return ((::KAAJEKKIDIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_CLONE_OFFSET))(this);
		}

		::EMHEOJNCGFH* ODEGHBCBLEG()
		{
			return ((::EMHEOJNCGFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_ODEGHBCBLEG_OFFSET))(this);
		}

		::System::Void KMKINFNDDJE(::EMHEOJNCGFH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMHEOJNCGFH*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_KMKINFNDDJE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KAAJEKKIDIE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAAJEKKIDIE*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KAAJEKKIDIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAAJEKKIDIE*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KAAJEKKIDIE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
