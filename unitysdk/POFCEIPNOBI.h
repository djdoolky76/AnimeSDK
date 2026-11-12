#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIIIBFIMIIE;
class NPEHFAHLDNM;
class POFCEIPNOBI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define POFCEIPNOBI_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1F27A5F0)
#define POFCEIPNOBI_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F27A8C0)
#define POFCEIPNOBI_CLONE_OFFSET UNITYSDK_OFFSET(0x1F279E70)
#define POFCEIPNOBI_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F279E00)
#define POFCEIPNOBI_CTOR_OFFSET UNITYSDK_OFFSET(0x1F279DF0)
#define POFCEIPNOBI_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1F279EF0)
#define POFCEIPNOBI_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1F279F00)
#define POFCEIPNOBI_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1F27A160)
#define POFCEIPNOBI_EQUALS_OFFSET UNITYSDK_OFFSET(0x1F279F30)
#define POFCEIPNOBI_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1F27A390)
#define POFCEIPNOBI_IDJMCBCFMLH_OFFSET UNITYSDK_OFFSET(0x1F279F10)
#define POFCEIPNOBI_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1F279DB0)
#define POFCEIPNOBI_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1F27A720)
#define POFCEIPNOBI_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1F27A680)
#define POFCEIPNOBI_NFKPBJEPJPI_OFFSET UNITYSDK_OFFSET(0x1F279F20)
#define POFCEIPNOBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1F279DE0)
#define POFCEIPNOBI_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1F27A4B0)
#define POFCEIPNOBI_WRITETO_OFFSET UNITYSDK_OFFSET(0x1F27A510)

inline static constexpr unsigned int POFCEIPNOBI_TypeDefinitionIndex = 31435;

	class POFCEIPNOBI : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::HIIIBFIMIIE* CDAMOJGCPGO; // 0x20
		static ::Google::Protobuf::MessageParser_1<::POFCEIPNOBI*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::POFCEIPNOBI*>**)UnitySDK::FromName("", "POFCEIPNOBI")->GetStaticField(0x461B0);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object DCBGHOGCLMO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::POFCEIPNOBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFCEIPNOBI*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFCEIPNOBI_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::POFCEIPNOBI*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::POFCEIPNOBI*>*(*)())((::PBYTE)hIl2Cpp + POFCEIPNOBI_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::POFCEIPNOBI* Clone()
		{
			return ((::POFCEIPNOBI*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::HIIIBFIMIIE* IDJMCBCFMLH()
		{
			return ((::HIIIBFIMIIE*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_IDJMCBCFMLH_OFFSET))(this);
		}

		::System::Void NFKPBJEPJPI(::HIIIBFIMIIE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIIIBFIMIIE*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_NFKPBJEPJPI_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::POFCEIPNOBI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::POFCEIPNOBI*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCEIPNOBI_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::POFCEIPNOBI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POFCEIPNOBI*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + POFCEIPNOBI_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
