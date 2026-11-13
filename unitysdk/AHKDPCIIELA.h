#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHKDPCIIELA;
namespace Google::Protobuf { class CodedInputStream; }
namespace Google::Protobuf { class CodedOutputStream; }
namespace Google::Protobuf { class UnknownFieldSet; }
namespace Google::Protobuf { template <typename T> class MessageParser_1; }
namespace Google::Protobuf::Reflection { class MessageDescriptor; }
namespace System { class Object; }
namespace System { class String; }

#define AHKDPCIIELA_CALCULATESIZE_OFFSET UNITYSDK_OFFSET(0x204FF1D0)
#define AHKDPCIIELA_CCTOR_OFFSET UNITYSDK_OFFSET(0x204FF570)
#define AHKDPCIIELA_CLONE_OFFSET UNITYSDK_OFFSET(0x204FED40)
#define AHKDPCIIELA_CTOR_1_OFFSET UNITYSDK_OFFSET(0x204FED00)
#define AHKDPCIIELA_CTOR_OFFSET UNITYSDK_OFFSET(0x204FECF0)
#define AHKDPCIIELA_ECLJEIOLMND_OFFSET UNITYSDK_OFFSET(0x204FEE20)
#define AHKDPCIIELA_EDANDAPHFJM_OFFSET UNITYSDK_OFFSET(0x204FEDF0)
#define AHKDPCIIELA_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x204FEEF0)
#define AHKDPCIIELA_EQUALS_OFFSET UNITYSDK_OFFSET(0x204FEE60)
#define AHKDPCIIELA_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x204FEF40)
#define AHKDPCIIELA_GMGMKFIMODK_OFFSET UNITYSDK_OFFSET(0x204FEE40)
#define AHKDPCIIELA_IANLAJHINMC_OFFSET UNITYSDK_OFFSET(0x204FEDD0)
#define AHKDPCIIELA_JJGHOBBFNJD_OFFSET UNITYSDK_OFFSET(0x204FEC80)
#define AHKDPCIIELA_KPEGDKKDLDE_OFFSET UNITYSDK_OFFSET(0x204FEE50)
#define AHKDPCIIELA_KPLCAEKDDEE_OFFSET UNITYSDK_OFFSET(0x204FEE00)
#define AHKDPCIIELA_LDACJLIPJOF_OFFSET UNITYSDK_OFFSET(0x204FEDE0)
#define AHKDPCIIELA_MERGEFROM_1_OFFSET UNITYSDK_OFFSET(0x204FF4C0)
#define AHKDPCIIELA_MERGEFROM_OFFSET UNITYSDK_OFFSET(0x204FF460)
#define AHKDPCIIELA_OPDJCLIDOCA_OFFSET UNITYSDK_OFFSET(0x204FEDC0)
#define AHKDPCIIELA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET UNITYSDK_OFFSET(0x204FECE0)
#define AHKDPCIIELA_PDJIOGFEPLI_OFFSET UNITYSDK_OFFSET(0x204FEE30)
#define AHKDPCIIELA_PJCKIIEAAGJ_OFFSET UNITYSDK_OFFSET(0x204FEE10)
#define AHKDPCIIELA_TOSTRING_OFFSET UNITYSDK_OFFSET(0x204FEF80)
#define AHKDPCIIELA_WRITETO_OFFSET UNITYSDK_OFFSET(0x204FEFE0)

inline static constexpr unsigned int AHKDPCIIELA_TypeDefinitionIndex = 29855;

	class AHKDPCIIELA : public ::System::Object
	{
	public:
		::Google::Protobuf::UnknownFieldSet* DHHIJOGAOFI; // 0x10
		::System::UInt32 POGFEKLICCP; // 0x18
		::System::UInt32 NNLJKKAEICI; // 0x1C
		::System::UInt32 OFEOJEOIBAB; // 0x20
		::System::UInt32 OEPOBIODAJH; // 0x24
		::System::UInt32 IDAHGDANMKG; // 0x28
		static ::Google::Protobuf::MessageParser_1<::AHKDPCIIELA*>** StaticGet_CHLCMCKIGKG()
		{
			return (::Google::Protobuf::MessageParser_1<::AHKDPCIIELA*>**)UnitySDK::FromName("", "AHKDPCIIELA")->GetStaticField(0x11740);
		}

		// static const ::System::Object BPLJLIMECGH; // 0x0
		// static const ::System::Object MJDGKEJDELM; // 0x0
		// static const ::System::Object HMOKNPIBAAF; // 0x0
		// static const ::System::Object BFMLFALLFGN; // 0x0
		// static const ::System::Object EOEGKEJDNBG; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::AHKDPCIIELA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKDPCIIELA*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_CTOR_1_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHKDPCIIELA_CCTOR_OFFSET))();
		}

		static ::Google::Protobuf::MessageParser_1<::AHKDPCIIELA*>* JJGHOBBFNJD()
		{
			return ((::Google::Protobuf::MessageParser_1<::AHKDPCIIELA*>*(*)())((::PBYTE)hIl2Cpp + AHKDPCIIELA_JJGHOBBFNJD_OFFSET))();
		}

		::Google::Protobuf::Reflection::MessageDescriptor* pb__Google_Protobuf_IMessage_get_Descriptor()
		{
			return ((::Google::Protobuf::Reflection::MessageDescriptor*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_PB__GOOGLE_PROTOBUF_IMESSAGE_GET_DESCRIPTOR_OFFSET))(this);
		}

		::AHKDPCIIELA* Clone()
		{
			return ((::AHKDPCIIELA*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_CLONE_OFFSET))(this);
		}

		::System::UInt32 OPDJCLIDOCA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_OPDJCLIDOCA_OFFSET))(this);
		}

		::System::Void IANLAJHINMC(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKDPCIIELA_IANLAJHINMC_OFFSET))(this, a1);
		}

		::System::UInt32 LDACJLIPJOF()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_LDACJLIPJOF_OFFSET))(this);
		}

		::System::Void EDANDAPHFJM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKDPCIIELA_EDANDAPHFJM_OFFSET))(this, a1);
		}

		::System::UInt32 KPLCAEKDDEE()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_KPLCAEKDDEE_OFFSET))(this);
		}

		::System::Void PJCKIIEAAGJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKDPCIIELA_PJCKIIEAAGJ_OFFSET))(this, a1);
		}

		::System::UInt32 ECLJEIOLMND()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_ECLJEIOLMND_OFFSET))(this);
		}

		::System::Void PDJIOGFEPLI(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKDPCIIELA_PDJIOGFEPLI_OFFSET))(this, a1);
		}

		::System::UInt32 GMGMKFIMODK()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_GMGMKFIMODK_OFFSET))(this);
		}

		::System::Void KPEGDKKDLDE(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AHKDPCIIELA_KPEGDKKDLDE_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::AHKDPCIIELA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::AHKDPCIIELA*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_TOSTRING_OFFSET))(this);
		}

		::System::Void WriteTo(::Google::Protobuf::CodedOutputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedOutputStream*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_WRITETO_OFFSET))(this, a1);
		}

		::System::Int32 CalculateSize()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AHKDPCIIELA_CALCULATESIZE_OFFSET))(this);
		}

		::System::Void MergeFrom(::AHKDPCIIELA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHKDPCIIELA*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_MERGEFROM_OFFSET))(this, a1);
		}

		::System::Void MergeFrom_1(::Google::Protobuf::CodedInputStream* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::CodedInputStream*))((::PBYTE)hIl2Cpp + AHKDPCIIELA_MERGEFROM_1_OFFSET))(this, a1);
		}

	};
