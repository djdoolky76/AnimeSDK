#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLAMMKDGAAC.h"
#include "unitysdk/GKHEMPJCONG.h"
#include "unitysdk/System/ValueType.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define AIFGNKADBKN_CBHFJHICPLC_OFFSET UNITYSDK_OFFSET(0x728030)
#define AIFGNKADBKN_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x728020)
#define AIFGNKADBKN_NJOJMPDLFFH_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define AIFGNKADBKN_PHCPAKMBBOD_OFFSET UNITYSDK_OFFSET(0x2BEAE0)
#define AIFGNKADBKN__CTOR_OFFSET UNITYSDK_OFFSET(0x727FE0)

inline static constexpr unsigned int AIFGNKADBKN_TypeDefinitionIndex = 42752;

struct alignas(8) AIFGNKADBKN
{
	::BLAMMKDGAAC NCHLMNAGNEJ; // 0x10
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* CBDBDDFEPEK; // 0x98
	::GKHEMPJCONG EJBKEFHPEGC; // 0xA0

	::System::Void _ctor(::BLAMMKDGAAC CKFABDAMEJM, ::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH, ::GKHEMPJCONG CFMBGCMCNMM)
	{
		return ((::System::Void(*)(::PVOID, ::BLAMMKDGAAC, ::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*, ::GKHEMPJCONG))((::PBYTE)hIl2Cpp + AIFGNKADBKN__CTOR_OFFSET))(this, CKFABDAMEJM, EJGDHCIBCJH, CFMBGCMCNMM);
	}

	::System::Void PHCPAKMBBOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFGNKADBKN_PHCPAKMBBOD_OFFSET))(this);
	}

	::System::Void NJOJMPDLFFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFGNKADBKN_NJOJMPDLFFH_OFFSET))(this);
	}

	::System::Void IGJIGJCLNKJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AIFGNKADBKN_IGJIGJCLNKJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void CBHFJHICPLC(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + AIFGNKADBKN_CBHFJHICPLC_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}
};
