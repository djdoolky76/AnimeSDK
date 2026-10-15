#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ModifierEventFilterMask.h"
class LPNPMKNMMOK;
namespace RPG::GameCore { class GameEntity; }
namespace System { template <typename T> class Predicate_1; }

#define KPHINJGCEAO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB5BDD40)

	struct alignas(8) KPHINJGCEAO
	{
		::LPNPMKNMMOK* MHJKGHNHPCP; // 0x10
		::RPG::GameCore::GameEntity* CFDHPDOFCJA; // 0x18
		::RPG::GameCore::GameEntity* LIIFPHHNPPP; // 0x20
		::RPG::GameCore::ModifierEventFilterMask ICCHKJGAIPA; // 0x28
		::System::Byte _padding0[0x4];
		::System::Predicate_1<::RPG::GameCore::GameEntity*>* LINOGBHPPAF; // 0x30
		::RPG::GameCore::GameEntity* OEMEJEBGKBP; // 0x38
		::System::Boolean KJGFPHHNLEI; // 0x40
		::System::Boolean GFAKIBCPNPL; // 0x41
		::System::Boolean OKAFNOJAPBJ; // 0x42
		/*
		static ::KPHINJGCEAO BPLPBPMEODA(::LPNPMKNMMOK* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::RPG::GameCore::ModifierEventFilterMask a4, ::System::Boolean a5, ::System::Predicate_1<::RPG::GameCore::GameEntity*>* a6)
		{
			return ((::KPHINJGCEAO(*)(::LPNPMKNMMOK*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::ModifierEventFilterMask, ::System::Boolean, ::System::Predicate_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + KPHINJGCEAO_BPLPBPMEODA_OFFSET))(a1, a2, a3, a4, a5, a6);
		}
		*/

	};
