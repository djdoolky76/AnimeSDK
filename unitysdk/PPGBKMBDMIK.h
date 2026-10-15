#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NPEHFAHLDNM;
class PPGBKMBDMIK;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class MessageParser; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define PPGBKMBDMIK_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x1DFD88A0)
#define PPGBKMBDMIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFD8C30)
#define PPGBKMBDMIK_CLONE_OFFSET UNITYSDK_OFFSET(0x1DFD8260)
#define PPGBKMBDMIK_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DFD8200)
#define PPGBKMBDMIK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFD81F0)
#define PPGBKMBDMIK_DDBNPAPKCMA_OFFSET UNITYSDK_OFFSET(0x1DFD82D0)
#define PPGBKMBDMIK_EMBDACAJHCG_OFFSET UNITYSDK_OFFSET(0x1DFD82E0)
#define PPGBKMBDMIK_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1DFD84C0)
#define PPGBKMBDMIK_EQUALS_OFFSET UNITYSDK_OFFSET(0x1DFD8330)
#define PPGBKMBDMIK_FAEKBILGPCO_OFFSET UNITYSDK_OFFSET(0x1DFD8320)
#define PPGBKMBDMIK_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1DFD8650)
#define PPGBKMBDMIK_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x1DFD81B0)
#define PPGBKMBDMIK_JNOOKNCMIHN_OFFSET UNITYSDK_OFFSET(0x1DFD82F0)
#define PPGBKMBDMIK_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x1DFD8A80)
#define PPGBKMBDMIK_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x1DFD8A00)
#define PPGBKMBDMIK_NFDLPNFMBIJ_OFFSET UNITYSDK_OFFSET(0x1DFD8300)
#define PPGBKMBDMIK_OAPIGKOIMJL_OFFSET UNITYSDK_OFFSET(0x1DFD8310)
#define PPGBKMBDMIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x1DFD81E0)
#define PPGBKMBDMIK_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1DFD8700)
#define PPGBKMBDMIK_WRITETO_OFFSET UNITYSDK_OFFSET(0x1DFD8760)

inline static constexpr unsigned int PPGBKMBDMIK_TypeDefinitionIndex = 30531;

	class PPGBKMBDMIK : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::NPEHFAHLDNM* DIOPPNPPOLH; // 0x18
		::System::UInt32 MEGGDDIDHFM; // 0x20
		::System::UInt32 NAEACGPKNNH; // 0x24
		static ::Google::Protobuf::MessageParser** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser**)UnitySDK::FromName("", "PPGBKMBDMIK")->GetStaticField(0x43720);
		}

		// static const ::System::Object OAMMBKNIIJL; // 0x0
		// static const ::System::Object CHBJAHEPJEA; // 0x0
		// static const ::System::Object PLDKENJLKME; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::PPGBKMBDMIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGBKMBDMIK*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PPGBKMBDMIK_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser*(*)())((::PBYTE)hIl2Cpp + PPGBKMBDMIK_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::PPGBKMBDMIK* Clone()
		{
			return ((::PPGBKMBDMIK*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_CLONE_OFFSET))(this);
		}

		::NPEHFAHLDNM* DDBNPAPKCMA()
		{
			return ((::NPEHFAHLDNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_DDBNPAPKCMA_OFFSET))(this);
		}

		::System::Void EMBDACAJHCG(::NPEHFAHLDNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NPEHFAHLDNM*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_EMBDACAJHCG_OFFSET))(this, a1);
		}

		::System::UInt32 JNOOKNCMIHN()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_JNOOKNCMIHN_OFFSET))(this);
		}

		::System::Void NFDLPNFMBIJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_NFDLPNFMBIJ_OFFSET))(this, a1);
		}

		::System::UInt32 OAPIGKOIMJL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_OAPIGKOIMJL_OFFSET))(this);
		}

		::System::Void FAEKBILGPCO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_FAEKBILGPCO_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::PPGBKMBDMIK* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PPGBKMBDMIK*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::PPGBKMBDMIK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PPGBKMBDMIK*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + PPGBKMBDMIK_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
