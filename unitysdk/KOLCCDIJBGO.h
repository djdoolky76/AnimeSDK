#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KOLCCDIJBGO;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define KOLCCDIJBGO_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E886420)
#define KOLCCDIJBGO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E8866F0)
#define KOLCCDIJBGO_CLONE_OFFSET UNITYSDK_OFFSET(0x1E886020)
#define KOLCCDIJBGO_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E885FF0)
#define KOLCCDIJBGO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E885FE0)
#define KOLCCDIJBGO_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E8861E0)
#define KOLCCDIJBGO_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E8860D0)
#define KOLCCDIJBGO_FOPLDCBOMFM_OFFSET UNITYSDK_OFFSET(0x1E8860A0)
#define KOLCCDIJBGO_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E8862B0)
#define KOLCCDIJBGO_GHJMLABOMJI_OFFSET UNITYSDK_OFFSET(0x1E8860B0)
#define KOLCCDIJBGO_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E885F70)
#define KOLCCDIJBGO_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E886570)
#define KOLCCDIJBGO_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E886530)
#define KOLCCDIJBGO_NNBHOEMFHIF_OFFSET UNITYSDK_OFFSET(0x1E886090)
#define KOLCCDIJBGO_OLCBDMMJPON_OFFSET UNITYSDK_OFFSET(0x1E8860C0)
#define KOLCCDIJBGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E885FD0)
#define KOLCCDIJBGO_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E8862E0)
#define KOLCCDIJBGO_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E886340)

inline static constexpr unsigned int KOLCCDIJBGO_TypeDefinitionIndex = 28273;

	class KOLCCDIJBGO : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 GFMHFBDKDOE; // 0x18
		::System::UInt32 IHHANCNMDMA; // 0x1C
		static ::Google::Protobuf::MessageParser_1<::KOLCCDIJBGO*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::KOLCCDIJBGO*>**)UnitySDK::FromName("", "KOLCCDIJBGO")->GetStaticField(0x21860);
		}

		// static const ::System::Object CPDECFMCKEM; // 0x0
		// static const ::System::Object FCLKOFBAFMC; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KOLCCDIJBGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOLCCDIJBGO*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KOLCCDIJBGO_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::KOLCCDIJBGO*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::KOLCCDIJBGO*>*(*)())((::PBYTE)hIl2Cpp + KOLCCDIJBGO_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::KOLCCDIJBGO* Clone()
		{
			return ((::KOLCCDIJBGO*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_CLONE_OFFSET))(this);
		}

		::System::UInt32 NNBHOEMFHIF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_NNBHOEMFHIF_OFFSET))(this);
		}

		::System::Void FOPLDCBOMFM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_FOPLDCBOMFM_OFFSET))(this, a1);
		}

		::System::UInt32 GHJMLABOMJI()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_GHJMLABOMJI_OFFSET))(this);
		}

		::System::Void OLCBDMMJPON(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_OLCBDMMJPON_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::KOLCCDIJBGO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KOLCCDIJBGO*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::KOLCCDIJBGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KOLCCDIJBGO*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + KOLCCDIJBGO_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
