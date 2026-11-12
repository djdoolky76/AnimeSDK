#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PLHFGMCNOAJ;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PLHFGMCNOAJ_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F251E10)
#define PLHFGMCNOAJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F252050)
#define PLHFGMCNOAJ_CLONE_OFFSET UNITYSDK_OFFSET(0x1F251910)
#define PLHFGMCNOAJ_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F2518D0)
#define PLHFGMCNOAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2518C0)
#define PLHFGMCNOAJ_EOLFILACFJH_OFFSET UNITYSDK_OFFSET(0x1F251960)
#define PLHFGMCNOAJ_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F251AC0)
#define PLHFGMCNOAJ_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F2519C0)
#define PLHFGMCNOAJ_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F251C60)
#define PLHFGMCNOAJ_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F251880)
#define PLHFGMCNOAJ_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F251EC0)
#define PLHFGMCNOAJ_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F251E80)
#define PLHFGMCNOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F2518B0)
#define PLHFGMCNOAJ_PCGNMNJMPDF_OFFSET UNITYSDK_OFFSET(0x1F251970)
#define PLHFGMCNOAJ_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F251D20)
#define PLHFGMCNOAJ_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F251D80)

inline static constexpr unsigned int PLHFGMCNOAJ_TypeDefinitionIndex = 32987;

	class PLHFGMCNOAJ : public ::System::Object
	{
	public:
		::System::String* ECDAEDOJBMK; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		static ::Google::Protobuf::MessageParser_1<::PLHFGMCNOAJ*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::PLHFGMCNOAJ*>**)UnitySDK::FromName("", "PLHFGMCNOAJ")->GetStaticField(0x3D100);
		}

		// static const ::System::Object MFMCKAICBOP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PLHFGMCNOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHFGMCNOAJ*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::PLHFGMCNOAJ*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::PLHFGMCNOAJ*>*(*)())((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PLHFGMCNOAJ* Clone()
		{
			return ((::PLHFGMCNOAJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_CLONE_OFFSET))(this);
		}

		::System::String* EOLFILACFJH()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_EOLFILACFJH_OFFSET))(this);
		}

		::System::Void PCGNMNJMPDF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_PCGNMNJMPDF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PLHFGMCNOAJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PLHFGMCNOAJ*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PLHFGMCNOAJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PLHFGMCNOAJ*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PLHFGMCNOAJ_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
