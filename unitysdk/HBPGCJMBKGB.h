#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HBPGCJMBKGB;
class NNPGLCGNICI;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define HBPGCJMBKGB_BLBBMAGLFDL_OFFSET UNITYSDK_OFFSET(0x1E531380)
#define HBPGCJMBKGB_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1E5318F0)
#define HBPGCJMBKGB_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E531CA0)
#define HBPGCJMBKGB_CLONE_OFFSET UNITYSDK_OFFSET(0x1E5312F0)
#define HBPGCJMBKGB_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E531270)
#define HBPGCJMBKGB_CTOR_OFFSET UNITYSDK_OFFSET(0x1E531260)
#define HBPGCJMBKGB_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1E531570)
#define HBPGCJMBKGB_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E5313E0)
#define HBPGCJMBKGB_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1E5313B0)
#define HBPGCJMBKGB_FFPAHEBJIKK_OFFSET UNITYSDK_OFFSET(0x1E5313C0)
#define HBPGCJMBKGB_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E531700)
#define HBPGCJMBKGB_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1E531220)
#define HBPGCJMBKGB_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1E531AE0)
#define HBPGCJMBKGB_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1E531A50)
#define HBPGCJMBKGB_MGBKGAPDHLG_OFFSET UNITYSDK_OFFSET(0x1E531390)
#define HBPGCJMBKGB_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1E5313A0)
#define HBPGCJMBKGB_OHEBFCPLMGF_OFFSET UNITYSDK_OFFSET(0x1E5313D0)
#define HBPGCJMBKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1E531250)
#define HBPGCJMBKGB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E531750)
#define HBPGCJMBKGB_WRITETO_OFFSET UNITYSDK_OFFSET(0x1E5317B0)

inline static constexpr unsigned int HBPGCJMBKGB_TypeDefinitionIndex = 27982;

	class HBPGCJMBKGB : public ::System::Object
	{
	public:
		::NNPGLCGNICI* LKDEFKKLEDJ; // 0x10
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x18
		::System::UInt32 OPPNMFMNMGC; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "HBPGCJMBKGB")->GetStaticField(0x2F1D0);
		}

		// static const ::System::Object HNBHJOFPFLM; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		// static const ::System::Object BOIGPPCIPFF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::HBPGCJMBKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPGCJMBKGB*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HBPGCJMBKGB_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + HBPGCJMBKGB_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::HBPGCJMBKGB* Clone()
		{
			return ((::HBPGCJMBKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_CLONE_OFFSET))(this);
		}

		::NNPGLCGNICI* BLBBMAGLFDL()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_BLBBMAGLFDL_OFFSET))(this);
		}

		::System::Void MGBKGAPDHLG(::NNPGLCGNICI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNPGLCGNICI*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_MGBKGAPDHLG_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::UInt32 FFPAHEBJIKK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_FFPAHEBJIKK_OFFSET))(this);
		}

		::System::Void OHEBFCPLMGF(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_OHEBFCPLMGF_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::HBPGCJMBKGB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HBPGCJMBKGB*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::HBPGCJMBKGB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HBPGCJMBKGB*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + HBPGCJMBKGB_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
