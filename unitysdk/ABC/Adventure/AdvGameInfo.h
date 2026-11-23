#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

class AB642D1382756991;
namespace A970A434E9CC38AD { class BCC3D2F1A49F246E; }
namespace TMPro { class TextMeshProUGUI; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class RectTransform; }

#define ABC_ADVENTURE_ADVGAMEINFO_A04A05754E85B3BE_OFFSET UNITYSDK_OFFSET(0x172B4E0)
#define ABC_ADVENTURE_ADVGAMEINFO_B8F33C44FE18EA91_OFFSET UNITYSDK_OFFSET(0x172B580)
#define ABC_ADVENTURE_ADVGAMEINFO_E02954280801633F_OFFSET UNITYSDK_OFFSET(0x172B9A0)
#define ABC_ADVENTURE_ADVGAMEINFO_F8C91B05DCD3C80F_OFFSET UNITYSDK_OFFSET(0x172A7A0)
#define ABC_ADVENTURE_ADVGAMEINFO_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x172A700)
#define ABC_ADVENTURE_ADVGAMEINFO__CTOR_OFFSET UNITYSDK_OFFSET(0x172BA50)

namespace ABC::Adventure
{
	inline static constexpr unsigned int AdvGameInfo_TypeDefinitionIndex = 736;

	class AdvGameInfo
	{
	public:
		::UnityEngine::Canvas* Canvas; // 0x20
		::UnityEngine::RectTransform* CenterInfoRoot; // 0x28
		::TMPro::TextMeshProUGUI* CenterText1; // 0x30
		::TMPro::TextMeshProUGUI* CenterText2; // 0x38
		::AB642D1382756991* AD42A0DB1C2D04F0; // 0x40
		::A970A434E9CC38AD::BCC3D2F1A49F246E* F30725DC244BAEC1; // 0x48
		::UnityEngine::Vector3 BF67CCA93D423F54; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO__CTOR_OFFSET))(this);
		}

		::System::Void F8C91B05DCD3C80F(::AB642D1382756991* E940BFE34B1F4BEF)
		{
			return ((::System::Void(*)(::PVOID, ::AB642D1382756991*))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO_F8C91B05DCD3C80F_OFFSET))(this, E940BFE34B1F4BEF);
		}

		::System::Void E02954280801633F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO_E02954280801633F_OFFSET))(this);
		}

		::System::Void B8F33C44FE18EA91()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO_B8F33C44FE18EA91_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void A04A05754E85B3BE(::System::Boolean FFA00246E8ABA57B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABC_ADVENTURE_ADVGAMEINFO_A04A05754E85B3BE_OFFSET))(this, FFA00246E8ABA57B);
		}
	};
}
