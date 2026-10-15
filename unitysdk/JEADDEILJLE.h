#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEADDEILJLE;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JEADDEILJLE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E712930)
#define JEADDEILJLE_CBBLJIHCHDN_OFFSET UNITYSDK_OFFSET(0x1E7125C0)
#define JEADDEILJLE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E712C30)
#define JEADDEILJLE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E712500)
#define JEADDEILJLE_COGNLAIFAHA_OFFSET UNITYSDK_OFFSET(0x1E712570)
#define JEADDEILJLE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7124D0)
#define JEADDEILJLE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7124C0)
#define JEADDEILJLE_DNEPNLDKDJP_OFFSET UNITYSDK_OFFSET(0x1E7125B0)
#define JEADDEILJLE_EBAOCGGBDFK_OFFSET UNITYSDK_OFFSET(0x1E7125A0)
#define JEADDEILJLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E712620)
#define JEADDEILJLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E7125D0)
#define JEADDEILJLE_FOFMIHADABG_OFFSET UNITYSDK_OFFSET(0x1E712590)
#define JEADDEILJLE_FOGHJDFCBBG_OFFSET UNITYSDK_OFFSET(0x1E712560)
#define JEADDEILJLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E712700)
#define JEADDEILJLE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E712480)
#define JEADDEILJLE_LKIBNGNDOFF_OFFSET UNITYSDK_OFFSET(0x1E712580)
#define JEADDEILJLE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E712B90)
#define JEADDEILJLE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E712B40)
#define JEADDEILJLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7124B0)
#define JEADDEILJLE_PPEAHIJAJJN_OFFSET UNITYSDK_OFFSET(0x1E712550)
#define JEADDEILJLE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E712740)
#define JEADDEILJLE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E7127A0)

inline static constexpr unsigned int JEADDEILJLE_TypeDefinitionIndex = 29089;

	class JEADDEILJLE : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 CPEDGIMANNC; // 0x18
		::System::UInt32 BGHAMFEEKBI; // 0x1C
		::System::UInt32 BEIPFCCPIJB; // 0x20
		::System::UInt32 CJCEEMALFAL; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JEADDEILJLE")->GetStaticField(0x5E360);
		}

		// static const ::System::Object MIDBBNAHMBN; // 0x0
		// static const ::System::Object DCMCFDFHLLD; // 0x0
		// static const ::System::Object DFLDAOLENMB; // 0x0
		// static const ::System::Object HNPDCDCCAPH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JEADDEILJLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEADDEILJLE*))((::PBYTE)hIl2Cpp + JEADDEILJLE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JEADDEILJLE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JEADDEILJLE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JEADDEILJLE* Clone()
		{
			return ((::JEADDEILJLE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_CLONE_OFFSET))(this);
		}

		::System::UInt32 PPEAHIJAJJN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_PPEAHIJAJJN_OFFSET))(this);
		}

		::System::Void FOGHJDFCBBG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEADDEILJLE_FOGHJDFCBBG_OFFSET))(this, a1);
		}

		::System::UInt32 COGNLAIFAHA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_COGNLAIFAHA_OFFSET))(this);
		}

		::System::Void LKIBNGNDOFF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEADDEILJLE_LKIBNGNDOFF_OFFSET))(this, a1);
		}

		::System::UInt32 FOFMIHADABG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_FOFMIHADABG_OFFSET))(this);
		}

		::System::Void EBAOCGGBDFK(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEADDEILJLE_EBAOCGGBDFK_OFFSET))(this, a1);
		}

		::System::UInt32 DNEPNLDKDJP()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_DNEPNLDKDJP_OFFSET))(this);
		}

		::System::Void CBBLJIHCHDN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + JEADDEILJLE_CBBLJIHCHDN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JEADDEILJLE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JEADDEILJLE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEADDEILJLE*))((::PBYTE)hIl2Cpp + JEADDEILJLE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JEADDEILJLE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JEADDEILJLE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JEADDEILJLE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JEADDEILJLE*))((::PBYTE)hIl2Cpp + JEADDEILJLE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JEADDEILJLE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
