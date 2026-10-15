#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FBKKFMONGAA.h"
#include "unitysdk/RPG/Client/MechCraft/MechCraftDirectionType.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/PLHLAIJKMOD.h"
class CHGHIALKMFM;
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define KDNNNPMJINB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C555E60)
#define KDNNNPMJINB_LICOGDLBFGE_OFFSET UNITYSDK_OFFSET(0x1C56B5C0)
#define KDNNNPMJINB_MAPIDKMGMIE_OFFSET UNITYSDK_OFFSET(0x1C56B570)

	class KDNNNPMJINB : public ::FBKKFMONGAA
	{
	public:
		::RPG::Client::MechCraft::MechCraftDirectionType BGNACBGBMHG; // 0x18
		::System::Single OHEALPINCGL; // 0x1C
		::UnityEngine::Vector2Int JGLJCHGAIHP; // 0x20
		::System::Void _ctor(::System::Single a1, ::RPG::Client::MechCraft::MechCraftDirectionType a2, ::UnityEngine::Vector2Int a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::RPG::Client::MechCraft::MechCraftDirectionType, ::UnityEngine::Vector2Int))((::PBYTE)hIl2Cpp + KDNNNPMJINB_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Single MAPIDKMGMIE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KDNNNPMJINB_MAPIDKMGMIE_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>* LICOGDLBFGE(::CHGHIALKMFM* a1, ::PLHLAIJKMOD a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::CHGHIALKMFM*, ::PLHLAIJKMOD))((::PBYTE)hIl2Cpp + KDNNNPMJINB_LICOGDLBFGE_OFFSET))(this, a1, a2);
		}

	};
