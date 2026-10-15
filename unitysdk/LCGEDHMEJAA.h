#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IFBFJDCECML;
class LCGEDHMEJAA;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRacePropertyModifier; }

#define LCGEDHMEJAA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x1C720DD0)
#define LCGEDHMEJAA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C720E40)
#define LCGEDHMEJAA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C720E50)
#define LCGEDHMEJAA_HKDBPLHGHBA_OFFSET UNITYSDK_OFFSET(0x1C720E90)
#define LCGEDHMEJAA_JKPBOGAEKKM_OFFSET UNITYSDK_OFFSET(0x1C721130)
#define LCGEDHMEJAA_JONOFIGIPPH_OFFSET UNITYSDK_OFFSET(0x1C721090)
#define LCGEDHMEJAA_LFGNLMGHHLI_OFFSET UNITYSDK_OFFSET(0x1C720F30)

	class LCGEDHMEJAA : public ::System::Object
	{
	public:
		::PBGNKMMDBGD* PDENFEFCAGN; // 0x10
		::System::Void _ctor(::PBGNKMMDBGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_CTOR_OFFSET))(this, a1);
		}

		static ::LCGEDHMEJAA* BPLPBPMEODA(::PBGNKMMDBGD* a1)
		{
			return ((::LCGEDHMEJAA*(*)(::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_DISPOSE_OFFSET))(this);
		}

		::System::Void HKDBPLHGHBA(::IFBFJDCECML* a1, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_HKDBPLHGHBA_OFFSET))(this, a1, a2);
		}

		::System::Void LFGNLMGHHLI(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRacePropertyModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRacePropertyModifier*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_LFGNLMGHHLI_OFFSET))(this, a1, a2);
		}

		::System::Void JONOFIGIPPH(::IFBFJDCECML* a1, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::Il2CppArray<::RPG::GameCore::CakeRacePropertyModifier*>*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_JONOFIGIPPH_OFFSET))(this, a1, a2);
		}

		::System::Void JKPBOGAEKKM(::IFBFJDCECML* a1, ::RPG::GameCore::CakeRacePropertyModifier* a2)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::RPG::GameCore::CakeRacePropertyModifier*))((::PBYTE)hIl2Cpp + LCGEDHMEJAA_JKPBOGAEKKM_OFFSET))(this, a1, a2);
		}

	};
