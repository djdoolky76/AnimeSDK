#pragma once
#include "unitysdk/unitysdk.h"
class EKFMIDBJDIA;
namespace RPG::GameCore { class ByWaitCustomString; }
namespace RPG::GameCore { class TaskContext; }

#define GDNEOLMAJBN_CTOR_OFFSET UNITYSDK_OFFSET(0x159ACC10)
#define GDNEOLMAJBN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159ACF40)
#define GDNEOLMAJBN_EOEBENIJLKO_OFFSET UNITYSDK_OFFSET(0x159AD230)
#define GDNEOLMAJBN_EVALUATE_OFFSET UNITYSDK_OFFSET(0x159ACDC0)
#define GDNEOLMAJBN_FMINKHFIFAC_OFFSET UNITYSDK_OFFSET(0x159AD110)
#define GDNEOLMAJBN_GGHIDBNAJFA_OFFSET UNITYSDK_OFFSET(0x159ACEA0)

inline static constexpr unsigned int GDNEOLMAJBN_TypeDefinitionIndex = 54731;

	class GDNEOLMAJBN
	{
	public:
		::System::Boolean CCIIKMPBJDM; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ByWaitCustomString* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ByWaitCustomString*))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Evaluate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_EVALUATE_OFFSET))(this);
		}

		::System::Void GGHIDBNAJFA(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_GGHIDBNAJFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_DISPOSE_OFFSET))(this);
		}

		::System::Void FMINKHFIFAC(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_FMINKHFIFAC_OFFSET))(this, a1);
		}

		::System::Void EOEBENIJLKO(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + GDNEOLMAJBN_EOEBENIJLKO_OFFSET))(this, a1);
		}

	};
