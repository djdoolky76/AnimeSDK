#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ExpeditionBattleFlowStateType.h"
#include "unitysdk/System/Object.h"
class CAFGGCCJPNI;
class CBFJBNFLHJE;
namespace System { class Object; }

#define FPBAFGOJCNK___C__DISPLAYCLASS5_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1590CA90)
#define FPBAFGOJCNK___C__DISPLAYCLASS5_1__PLAN_B__0_OFFSET UNITYSDK_OFFSET(0x1590CDB0)

inline static constexpr unsigned int FPBAFGOJCNK___c__DisplayClass5_1_TypeDefinitionIndex = 63908;

	template <typename T>
	class FPBAFGOJCNK___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::CAFGGCCJPNI* routeCtx; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPBAFGOJCNK___C__DISPLAYCLASS5_1_CTOR_OFFSET))(this);
		}

		::CBFJBNFLHJE* _Plan_b__0(::RPG::GameCore::ExpeditionBattleFlowStateType a1)
		{
			return ((::CBFJBNFLHJE*(*)(::PVOID, ::RPG::GameCore::ExpeditionBattleFlowStateType))((::PBYTE)hIl2Cpp + FPBAFGOJCNK___C__DISPLAYCLASS5_1__PLAN_B__0_OFFSET))(this, a1);
		}

	};
