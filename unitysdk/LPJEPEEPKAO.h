#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGCFHJFJGBI;
class KOFMGCNIMIN;
namespace RPG::Client { class IRogueMiracleInGame; }

#define LPJEPEEPKAO_CTOR_OFFSET UNITYSDK_OFFSET(0xB81BD60)
#define LPJEPEEPKAO_NOOOLDAKHIM_1_OFFSET UNITYSDK_OFFSET(0xB81BAD0)
#define LPJEPEEPKAO_NOOOLDAKHIM_OFFSET UNITYSDK_OFFSET(0xB81B940)

inline static constexpr unsigned int LPJEPEEPKAO_TypeDefinitionIndex = 67279;

	class LPJEPEEPKAO : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPJEPEEPKAO_CTOR_OFFSET))(this);
		}

		static ::RPG::Client::IRogueMiracleInGame* NOOOLDAKHIM(::KOFMGCNIMIN* a1)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::KOFMGCNIMIN*))((::PBYTE)hIl2Cpp + LPJEPEEPKAO_NOOOLDAKHIM_OFFSET))(a1);
		}

		static ::RPG::Client::IRogueMiracleInGame* NOOOLDAKHIM_1(::KOFMGCNIMIN* a1, ::BGCFHJFJGBI* a2)
		{
			return ((::RPG::Client::IRogueMiracleInGame*(*)(::KOFMGCNIMIN*, ::BGCFHJFJGBI*))((::PBYTE)hIl2Cpp + LPJEPEEPKAO_NOOOLDAKHIM_1_OFFSET))(a1, a2);
		}

	};
