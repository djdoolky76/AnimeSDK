#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EMHEOJNCGFH;
class KAAJEKKIDIE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KAAJEKKIDIE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1FAF1170)
#define KAAJEKKIDIE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF1410)
#define KAAJEKKIDIE_CLONE_OFFSET UNITYSDK_OFFSET(0x1FAF0AB0)
#define KAAJEKKIDIE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1FAF0A20)
#define KAAJEKKIDIE_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF0A10)
#define KAAJEKKIDIE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1FAF0D50)
#define KAAJEKKIDIE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1FAF0BB0)
#define KAAJEKKIDIE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1FAF1020)
#define KAAJEKKIDIE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1FAF09A0)
#define KAAJEKKIDIE_KMKINFNDDJE_OFFSET UNITYSDK_OFFSET(0x1FAF0BA0)
#define KAAJEKKIDIE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1FAF1280)
#define KAAJEKKIDIE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1FAF11D0)
#define KAAJEKKIDIE_ODEGHBCBLEG_OFFSET UNITYSDK_OFFSET(0x1FAF0B90)
#define KAAJEKKIDIE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1FAF0A00)
#define KAAJEKKIDIE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1FAF1080)
#define KAAJEKKIDIE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1FAF10E0)

inline static constexpr unsigned int KAAJEKKIDIE_TypeDefinitionIndex = 32607;

	class KAAJEKKIDIE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::EMHEOJNCGFH* FOFDNMNEBOI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::KAAJEKKIDIE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KAAJEKKIDIE*>**)UnitySDK::FromName("", "KAAJEKKIDIE")->GetStaticField(0x4A9E0);
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

		static ::Google::Protobuf::MessageParser_1<::KAAJEKKIDIE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KAAJEKKIDIE*>*(*)())((::PBYTE)hIl2Cpp + KAAJEKKIDIE_JJGHOBBFNJD_OFFSET))();
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
