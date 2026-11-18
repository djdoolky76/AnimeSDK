#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class EDINNMNPKOD;
class LKPFJJGLLIN;
class MEIHNKANLLB;
class PGCCNFPCKOH;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JJPDGONFBFB_AFCCACCMNCP_OFFSET UNITYSDK_OFFSET(0x15297980)
#define JJPDGONFBFB_APPCLMIANHI_OFFSET UNITYSDK_OFFSET(0x15296F70)
#define JJPDGONFBFB_BHPCAFJDLDI_OFFSET UNITYSDK_OFFSET(0x15296D90)
#define JJPDGONFBFB_EKGMLODAACE_OFFSET UNITYSDK_OFFSET(0x15296F30)
#define JJPDGONFBFB_FIJLIHKOBPC_OFFSET UNITYSDK_OFFSET(0x15297B70)
#define JJPDGONFBFB_HEAHMOGEMHB_OFFSET UNITYSDK_OFFSET(0x15296DD0)
#define JJPDGONFBFB_HKHOHFIODDP_OFFSET UNITYSDK_OFFSET(0x15297A60)
#define JJPDGONFBFB_LACICBNOHMH_OFFSET UNITYSDK_OFFSET(0x15297710)
#define JJPDGONFBFB_LKNPGBEBJGG_OFFSET UNITYSDK_OFFSET(0x152972F0)
#define JJPDGONFBFB_LLALNAKKCIO_OFFSET UNITYSDK_OFFSET(0x152970C0)
#define JJPDGONFBFB_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x152978A0)
#define JJPDGONFBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x15296CB0)

inline static constexpr unsigned int JJPDGONFBFB_TypeDefinitionIndex = 66145;

class JJPDGONFBFB : public ::System::Object
{
public:
	::System::String* MGEDBKBHJPM; // 0x10
	::System::Collections::Generic::List_1<::EDINNMNPKOD*>* BOJDEOAEGOM; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::EDINNMNPKOD*>* DEPAKMMDKFG; // 0x20
	::System::Int32 KAEOADJDIEC; // 0x28
	::System::Int32 BELNJJKMMJP; // 0x2C
	::System::Boolean FPDPMPKHENF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB__CTOR_OFFSET))(this);
	}

	::System::Int32 BHPCAFJDLDI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_BHPCAFJDLDI_OFFSET))(this);
	}

	::System::String* HEAHMOGEMHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_HEAHMOGEMHB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::EDINNMNPKOD*>* EKGMLODAACE()
	{
		return ((::System::Collections::Generic::List_1<::EDINNMNPKOD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_EKGMLODAACE_OFFSET))(this);
	}

	::System::Void APPCLMIANHI(::EDINNMNPKOD* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::EDINNMNPKOD*))((::PBYTE)hIl2Cpp + JJPDGONFBFB_APPCLMIANHI_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Void LLALNAKKCIO(::EDINNMNPKOD* LJBPECKCCEA, ::MEIHNKANLLB* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::EDINNMNPKOD*, ::MEIHNKANLLB*))((::PBYTE)hIl2Cpp + JJPDGONFBFB_LLALNAKKCIO_OFFSET))(this, LJBPECKCCEA, KNHIFHIKHIO);
	}

	::PGCCNFPCKOH* LKNPGBEBJGG()
	{
		return ((::PGCCNFPCKOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_LKNPGBEBJGG_OFFSET))(this);
	}

	::System::Void LACICBNOHMH(::System::Int32 ACHBBPJIBIE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JJPDGONFBFB_LACICBNOHMH_OFFSET))(this, ACHBBPJIBIE);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void AFCCACCMNCP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJPDGONFBFB_AFCCACCMNCP_OFFSET))(this);
	}

	::System::Boolean HKHOHFIODDP(::System::Int32 ACHBBPJIBIE, ::EDINNMNPKOD*& LJBPECKCCEA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::EDINNMNPKOD*&))((::PBYTE)hIl2Cpp + JJPDGONFBFB_HKHOHFIODDP_OFFSET))(this, ACHBBPJIBIE, LJBPECKCCEA);
	}

	::System::Void FIJLIHKOBPC(::System::Int32 AIEPLHLDDDK, ::LKPFJJGLLIN* KNHIFHIKHIO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::LKPFJJGLLIN*))((::PBYTE)hIl2Cpp + JJPDGONFBFB_FIJLIHKOBPC_OFFSET))(this, AIEPLHLDDDK, KNHIFHIKHIO);
	}
};
