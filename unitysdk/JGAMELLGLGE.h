#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGAMELLGLGE;
class JOLAHHGIFHA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JGAMELLGLGE_BKADKMKGADI_OFFSET UNITYSDK_OFFSET(0x1E706620)
#define JGAMELLGLGE_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E706BB0)
#define JGAMELLGLGE_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E706E00)
#define JGAMELLGLGE_CLONE_OFFSET UNITYSDK_OFFSET(0x1E706590)
#define JGAMELLGLGE_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E706520)
#define JGAMELLGLGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E706510)
#define JGAMELLGLGE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E7067A0)
#define JGAMELLGLGE_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E706630)
#define JGAMELLGLGE_FBKALCJFKEE_OFFSET UNITYSDK_OFFSET(0x1E706610)
#define JGAMELLGLGE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E706A70)
#define JGAMELLGLGE_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E7064D0)
#define JGAMELLGLGE_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E706C80)
#define JGAMELLGLGE_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E706C10)
#define JGAMELLGLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E706500)
#define JGAMELLGLGE_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E706AC0)
#define JGAMELLGLGE_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E706B20)

inline static constexpr unsigned int JGAMELLGLGE_TypeDefinitionIndex = 34190;

	class JGAMELLGLGE : public ::System::Object
	{
	public:
		::JOLAHHGIFHA* JPDMBNKJOHP; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>**)UnitySDK::FromName("", "JGAMELLGLGE")->GetStaticField(0x5DE50);
		}

		// static const ::System::Object ELADMBPBJKL; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JGAMELLGLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JGAMELLGLGE_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::JGAMELLGLGE*>*(*)())((::PBYTE)hIl2Cpp + JGAMELLGLGE_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JGAMELLGLGE* Clone()
		{
			return ((::JGAMELLGLGE*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CLONE_OFFSET))(this);
		}

		::JOLAHHGIFHA* FBKALCJFKEE()
		{
			return ((::JOLAHHGIFHA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_FBKALCJFKEE_OFFSET))(this);
		}

		::System::Void BKADKMKGADI(::JOLAHHGIFHA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JOLAHHGIFHA*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_BKADKMKGADI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JGAMELLGLGE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JGAMELLGLGE_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JGAMELLGLGE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMELLGLGE*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JGAMELLGLGE_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
