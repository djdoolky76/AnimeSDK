#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerable; }

#define LDDHGHMJBBE_BBNPJCDGKOO_OFFSET UNITYSDK_OFFSET(0x1580E220)
#define LDDHGHMJBBE_BMMPIMCBNCP_OFFSET UNITYSDK_OFFSET(0x1580E6A0)
#define LDDHGHMJBBE_CBIBIFBAIFA_OFFSET UNITYSDK_OFFSET(0x1580E6B0)
#define LDDHGHMJBBE_CNHBDOMKKDE_OFFSET UNITYSDK_OFFSET(0x1580E550)
#define LDDHGHMJBBE_DCECKFMMOOK_OFFSET UNITYSDK_OFFSET(0x1580E6D0)
#define LDDHGHMJBBE_FOGMCMEDPCH_OFFSET UNITYSDK_OFFSET(0x1580E210)
#define LDDHGHMJBBE_HHFAAOOIDJL_OFFSET UNITYSDK_OFFSET(0x1580E620)
#define LDDHGHMJBBE_HMMCEMJPJKA_OFFSET UNITYSDK_OFFSET(0x1580E030)
#define LDDHGHMJBBE_HNLLHINOEAL_OFFSET UNITYSDK_OFFSET(0x1580E5F0)
#define LDDHGHMJBBE_ILFOMJNAFKI_OFFSET UNITYSDK_OFFSET(0x1580E610)
#define LDDHGHMJBBE_KNIEAJFGOMK_OFFSET UNITYSDK_OFFSET(0x1580E6C0)
#define LDDHGHMJBBE_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1580E630)
#define LDDHGHMJBBE_MNPKJFEKOOK_OFFSET UNITYSDK_OFFSET(0x1580E6E0)
#define LDDHGHMJBBE_OHHBAPCMJAE_OFFSET UNITYSDK_OFFSET(0x1580E600)
#define LDDHGHMJBBE_ONCLICK_OFFSET UNITYSDK_OFFSET(0x1580E0F0)
#define LDDHGHMJBBE_PHDBCKJGHBE_OFFSET UNITYSDK_OFFSET(0x1580E1C0)
#define LDDHGHMJBBE__CTOR_OFFSET UNITYSDK_OFFSET(0x1580DED0)

inline static constexpr unsigned int LDDHGHMJBBE_TypeDefinitionIndex = 46705;

class LDDHGHMJBBE : public ::System::Object
{
public:
	::MonoUITableScrollV2* _LFAJCKFBGFP_k__BackingField; // 0x10
	::MoleMole::MonoGamepadNavigatableList* _CEGGPNEMGFB_k__BackingField; // 0x18
	::System::Action_1<::System::Int32>* _ICJFMNOEAPJ_k__BackingField; // 0x20
	::System::Int32 _MJMKDJIAMJD_k__BackingField; // 0x28
	::System::Int32 _MALHOPOCOOA_k__BackingField; // 0x2C

	::System::Void _ctor(::MonoUITableScrollV2* FAMGIABLFPH, ::System::Action* FCCFGMANMKM, ::MoleMole::MonoGamepadNavigatableList* DJHFLKFLLAP)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*, ::System::Action*, ::MoleMole::MonoGamepadNavigatableList*))((::PBYTE)hIl2Cpp + LDDHGHMJBBE__CTOR_OFFSET))(this, FAMGIABLFPH, FCCFGMANMKM, DJHFLKFLLAP);
	}

	::System::Void OnClick(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_ONCLICK_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Action_1<::System::Int32>* FOGMCMEDPCH()
	{
		return ((::System::Action_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_FOGMCMEDPCH_OFFSET))(this);
	}

	::System::Void BBNPJCDGKOO(::System::Int32 ABHBKFJKINO, ::System::Boolean HAOFIENHEIO, ::System::Boolean JABIKEIIKOF, ::System::Boolean IAGIBLAMFKB, ::System::Boolean MPLAGHMLIOO, ::System::Boolean GLGPGGCFJHE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_BBNPJCDGKOO_OFFSET))(this, ABHBKFJKINO, HAOFIENHEIO, JABIKEIIKOF, IAGIBLAMFKB, MPLAGHMLIOO, GLGPGGCFJHE);
	}

	::System::Void CNHBDOMKKDE(::System::Collections::IEnumerable* OOBOMJFEMEA, ::System::Int32 ABPPJNEPGIL)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::IEnumerable*, ::System::Int32))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_CNHBDOMKKDE_OFFSET))(this, OOBOMJFEMEA, ABPPJNEPGIL);
	}

	::MoleMole::MonoGamepadNavigatableList* HNLLHINOEAL()
	{
		return ((::MoleMole::MonoGamepadNavigatableList*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_HNLLHINOEAL_OFFSET))(this);
	}

	::System::Void OHHBAPCMJAE(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_OHHBAPCMJAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ILFOMJNAFKI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_ILFOMJNAFKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HHFAAOOIDJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_HHFAAOOIDJL_OFFSET))(this);
	}

	::System::Void HMMCEMJPJKA(::System::Action_1<::System::Int32>* BFOMBFMONJG, ::System::Boolean HLNNGEEGLKO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_HMMCEMJPJKA_OFFSET))(this, BFOMBFMONJG, HLNNGEEGLKO);
	}

	::System::Void LJMIPGJJELP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_LJMIPGJJELP_OFFSET))(this);
	}

	::System::Void BMMPIMCBNCP(::MoleMole::MonoGamepadNavigatableList* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadNavigatableList*))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_BMMPIMCBNCP_OFFSET))(this, EGEGIMGMJHN);
	}

	::MonoUITableScrollV2* CBIBIFBAIFA()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_CBIBIFBAIFA_OFFSET))(this);
	}

	::System::Void PHDBCKJGHBE(::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_PHDBCKJGHBE_OFFSET))(this, ABHBKFJKINO);
	}

	::System::Void KNIEAJFGOMK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_KNIEAJFGOMK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DCECKFMMOOK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_DCECKFMMOOK_OFFSET))(this);
	}

	::System::Void MNPKJFEKOOK(::System::Action_1<::System::Int32>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + LDDHGHMJBBE_MNPKJFEKOOK_OFFSET))(this, EGEGIMGMJHN);
	}
};
