#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GKHEMPJCONG.h"
#include "unitysdk/HNIHOHFIEKD.h"
#include "unitysdk/System/ValueType.h"

class ENGKPGFGGLM;
namespace MoleMole::Battle { class Entity; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Reflection { class MethodInfo; }

#define GEEFEEEFNOM_CBHFJHICPLC_1_OFFSET UNITYSDK_OFFSET(0x7C6100)
#define GEEFEEEFNOM_CBHFJHICPLC_OFFSET UNITYSDK_OFFSET(0x7C60F0)
#define GEEFEEEFNOM_CJGNAKPIHLB_1_OFFSET UNITYSDK_OFFSET(0x7C6000)
#define GEEFEEEFNOM_CJGNAKPIHLB_OFFSET UNITYSDK_OFFSET(0x7C5EC0)
#define GEEFEEEFNOM_DCOPLLBCGBF_OFFSET UNITYSDK_OFFSET(0x7C5FB0)
#define GEEFEEEFNOM_IGJIGJCLNKJ_1_OFFSET UNITYSDK_OFFSET(0x7C6060)
#define GEEFEEEFNOM_IGJIGJCLNKJ_OFFSET UNITYSDK_OFFSET(0x7C5F60)
#define GEEFEEEFNOM_NJOJMPDLFFH_OFFSET UNITYSDK_OFFSET(0x7C5F20)
#define GEEFEEEFNOM_PHCPAKMBBOD_OFFSET UNITYSDK_OFFSET(0x7C5F70)

inline static constexpr unsigned int GEEFEEEFNOM_TypeDefinitionIndex = 44585;

struct alignas(8) GEEFEEEFNOM
{
	::HNIHOHFIEKD ADPHACKJAOE; // 0x10
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* CBDBDDFEPEK; // 0x20
	::System::Action_1<::ENGKPGFGGLM*>* ABOGMBMMHIC; // 0x28
	::GKHEMPJCONG EJBKEFHPEGC; // 0x30

	::System::Void CJGNAKPIHLB(::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_CJGNAKPIHLB_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void NJOJMPDLFFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_NJOJMPDLFFH_OFFSET))(this);
	}

	::System::Void IGJIGJCLNKJ(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_IGJIGJCLNKJ_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	::System::Void PHCPAKMBBOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_PHCPAKMBBOD_OFFSET))(this);
	}

	::System::Void DCOPLLBCGBF(::System::Reflection::MethodInfo* OJFKLIDKCIG)
	{
		return ((::System::Void(*)(::PVOID, ::System::Reflection::MethodInfo*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_DCOPLLBCGBF_OFFSET))(this, OJFKLIDKCIG);
	}

	::System::Void CJGNAKPIHLB_1(::System::Action_1<::ENGKPGFGGLM*>* COBMCIMMNOD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::ENGKPGFGGLM*>*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_CJGNAKPIHLB_1_OFFSET))(this, COBMCIMMNOD);
	}

	::System::Void IGJIGJCLNKJ_1(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_IGJIGJCLNKJ_1_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void CBHFJHICPLC(::ENGKPGFGGLM* FFNKDGGHBPP)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_CBHFJHICPLC_OFFSET))(this, FFNKDGGHBPP);
	}

	::System::Void CBHFJHICPLC_1(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GEEFEEEFNOM_CBHFJHICPLC_1_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}
};
