#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBJOCICFNGK.h"
#include "unitysdk/BJNJBJKHDCJ.h"
#include "unitysdk/LIBOIKJGAIH.h"
#include "unitysdk/System/Nullable_1.h"

class IOOIHHOJOPI;
class NHPPEKNNKPF;
class OPJLNONBGDG;
namespace MoleMole { class TurnBattleEntityUnit; }
template <typename T> class BFMLEHMAGAK_1;
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class KLIOMMIOFDC_1;

#define FKLCFELMGEG_AOHAPJEANIK_OFFSET UNITYSDK_OFFSET(0x191FA9D0)
#define FKLCFELMGEG_EHKNNFFAGLC_OFFSET UNITYSDK_OFFSET(0x191F9E30)
#define FKLCFELMGEG_EJLMCHMOFOD_OFFSET UNITYSDK_OFFSET(0x191FA830)
#define FKLCFELMGEG_EJMLADDEHAE_OFFSET UNITYSDK_OFFSET(0x191F9D30)
#define FKLCFELMGEG_EMOLFFCNOPH_OFFSET UNITYSDK_OFFSET(0x191FA690)
#define FKLCFELMGEG_NGJNEPFMEOA_OFFSET UNITYSDK_OFFSET(0x191FA970)
#define FKLCFELMGEG_NINCJONOIAG_OFFSET UNITYSDK_OFFSET(0x191FAA60)
#define FKLCFELMGEG_OICAOFEOPCK_OFFSET UNITYSDK_OFFSET(0x191FA400)
#define FKLCFELMGEG__CTOR_OFFSET UNITYSDK_OFFSET(0x191F9DE0)

inline static constexpr unsigned int FKLCFELMGEG_TypeDefinitionIndex = 40174;

class FKLCFELMGEG : public ::PBJOCICFNGK
{
public:
	::BFMLEHMAGAK_1<::MoleMole::TurnBattleEntityUnit*>* OOGANKBBGKO; // 0x50
	::BFMLEHMAGAK_1<::System::Boolean>* IBGHHLEGMFH; // 0x58
	::BFMLEHMAGAK_1<::OPJLNONBGDG*>* ENDPAHEOOBM; // 0x60
	::NHPPEKNNKPF* DFDEGDPNEGB; // 0x68
	::KLIOMMIOFDC_1<::System::Boolean>* DABFLNPKPPP; // 0x70
	::BFMLEHMAGAK_1<::System::Boolean>* MDHHHPHBLJP; // 0x78
	::KLIOMMIOFDC_1<::System::Int32>* PBHGHKPKPMC; // 0x80
	::BFMLEHMAGAK_1<::MoleMole::TurnBattleEntityUnit*>* IFOKLDMHACL; // 0x88
	::System::Boolean DPEBBNMACJN; // 0x90
	::System::Boolean NPIGHNHKPPM; // 0x91

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG__CTOR_OFFSET))(this);
	}

	::System::Void EJMLADDEHAE(::LIBOIKJGAIH& EIEOJFEPMAB, ::IOOIHHOJOPI* IOKOLJDCKPN)
	{
		return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::IOOIHHOJOPI*))((::PBYTE)hIl2Cpp + FKLCFELMGEG_EJMLADDEHAE_OFFSET))(this, EIEOJFEPMAB, IOKOLJDCKPN);
	}

	::System::Void EHKNNFFAGLC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG_EHKNNFFAGLC_OFFSET))(this);
	}

	::System::Nullable_1<::BJNJBJKHDCJ> EMOLFFCNOPH()
	{
		return ((::System::Nullable_1<::BJNJBJKHDCJ>(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG_EMOLFFCNOPH_OFFSET))(this);
	}

	::JIOLFCAGOFH_1<::System::Boolean>* NGJNEPFMEOA()
	{
		return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG_NGJNEPFMEOA_OFFSET))(this);
	}

	::System::Boolean AOHAPJEANIK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG_AOHAPJEANIK_OFFSET))(this);
	}

	::System::Boolean OICAOFEOPCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLCFELMGEG_OICAOFEOPCK_OFFSET))(this);
	}

	::System::Void NINCJONOIAG(::NHPPEKNNKPF* NLJNFDKPAPH)
	{
		return ((::System::Void(*)(::PVOID, ::NHPPEKNNKPF*))((::PBYTE)hIl2Cpp + FKLCFELMGEG_NINCJONOIAG_OFFSET))(this, NLJNFDKPAPH);
	}

	::System::Void EJLMCHMOFOD(::System::Int32 JLDNMNKIAAE)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FKLCFELMGEG_EJLMCHMOFOD_OFFSET))(this, JLDNMNKIAAE);
	}
};
