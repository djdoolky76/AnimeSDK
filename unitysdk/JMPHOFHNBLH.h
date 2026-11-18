#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class ScenePeformAnimatorParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMPHOFHNBLH_DIEDELKIFEM_OFFSET UNITYSDK_OFFSET(0x152B0220)
#define JMPHOFHNBLH_HCBABLHKLJM_OFFSET UNITYSDK_OFFSET(0x152B00A0)
#define JMPHOFHNBLH_HOEJGOCJEBL_OFFSET UNITYSDK_OFFSET(0x152B0460)
#define JMPHOFHNBLH_OLPMKMOHGIO_OFFSET UNITYSDK_OFFSET(0x152B0620)
#define JMPHOFHNBLH_OMGCGPADPLA_OFFSET UNITYSDK_OFFSET(0x152AFED0)
#define JMPHOFHNBLH_PEOAJBINLEO_OFFSET UNITYSDK_OFFSET(0x152AFBF0)

inline static constexpr unsigned int JMPHOFHNBLH_TypeDefinitionIndex = 73719;

class JMPHOFHNBLH : public ::System::Object
{
public:
	static ::System::Void PEOAJBINLEO(::MoleMole::Battle::Entity* HOLFNDIMGJJ, ::MoleMole::Config::ScenePeformAnimatorParam* JPOEPHCOPHE)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::MoleMole::Config::ScenePeformAnimatorParam*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_PEOAJBINLEO_OFFSET))(HOLFNDIMGJJ, JPOEPHCOPHE);
	}

	static ::System::Boolean OMGCGPADPLA()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_OMGCGPADPLA_OFFSET))();
	}

	static ::System::Void HCBABLHKLJM(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>* ADNIKHNBLMF)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::Il2CppArray<::MoleMole::Config::ScenePeformAnimatorParam*>*>*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_HCBABLHKLJM_OFFSET))(ADNIKHNBLMF);
	}

	static ::System::Boolean HOEJGOCJEBL()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_HOEJGOCJEBL_OFFSET))();
	}

	static ::System::Void DIEDELKIFEM(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_DIEDELKIFEM_OFFSET))(KECKGDFIALJ);
	}

	static ::System::Void OLPMKMOHGIO()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JMPHOFHNBLH_OLPMKMOHGIO_OFFSET))();
	}
};
