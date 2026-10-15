#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAICNBKIELL;
class JFDAMIHLMLF;
class JGAMMPGMCNI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define JFDAMIHLMLF_ADGLNFILOHI_OFFSET UNITYSDK_OFFSET(0x1E726730)
#define JFDAMIHLMLF_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E726DA0)
#define JFDAMIHLMLF_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E727070)
#define JFDAMIHLMLF_CLONE_OFFSET UNITYSDK_OFFSET(0x1E726660)
#define JFDAMIHLMLF_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E7265C0)
#define JFDAMIHLMLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7265B0)
#define JFDAMIHLMLF_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E726980)
#define JFDAMIHLMLF_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E726750)
#define JFDAMIHLMLF_FGLMHIPICNM_OFFSET UNITYSDK_OFFSET(0x1E726720)
#define JFDAMIHLMLF_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E726BB0)
#define JFDAMIHLMLF_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E726570)
#define JFDAMIHLMLF_KAFMPINCMJJ_OFFSET UNITYSDK_OFFSET(0x1E726710)
#define JFDAMIHLMLF_KLINCLPEAHO_OFFSET UNITYSDK_OFFSET(0x1E726740)
#define JFDAMIHLMLF_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E726ED0)
#define JFDAMIHLMLF_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E726E30)
#define JFDAMIHLMLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E7265A0)
#define JFDAMIHLMLF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E726C60)
#define JFDAMIHLMLF_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E726CC0)

inline static constexpr unsigned int JFDAMIHLMLF_TypeDefinitionIndex = 33844;

	class JFDAMIHLMLF : public ::System::Object
	{
	public:
		::JGAMMPGMCNI* NLIJNNMCAAO; // 0x10
		::FAICNBKIELL* GDLOOLAHGPP; // 0x18
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x20
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "JFDAMIHLMLF")->GetStaticField(0x5F710);
		}

		// static const ::System::Object JDLHDMKEFKL; // 0x0
		// static const ::System::Object DMAFCIBFMPD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::JFDAMIHLMLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFDAMIHLMLF*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFDAMIHLMLF_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + JFDAMIHLMLF_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::JFDAMIHLMLF* Clone()
		{
			return ((::JFDAMIHLMLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_CLONE_OFFSET))(this);
		}

		::FAICNBKIELL* KAFMPINCMJJ()
		{
			return ((::FAICNBKIELL*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_KAFMPINCMJJ_OFFSET))(this);
		}

		::System::Void FGLMHIPICNM(::FAICNBKIELL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAICNBKIELL*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_FGLMHIPICNM_OFFSET))(this, a1);
		}

		::JGAMMPGMCNI* ADGLNFILOHI()
		{
			return ((::JGAMMPGMCNI*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_ADGLNFILOHI_OFFSET))(this);
		}

		::System::Void KLINCLPEAHO(::JGAMMPGMCNI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JGAMMPGMCNI*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_KLINCLPEAHO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::JFDAMIHLMLF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JFDAMIHLMLF*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::JFDAMIHLMLF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFDAMIHLMLF*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + JFDAMIHLMLF_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
