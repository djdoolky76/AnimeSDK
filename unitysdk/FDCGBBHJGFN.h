#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class RogueDLC1Dot3PictureFrame; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class Texture; }

#define FDCGBBHJGFN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C02C8B0)
#define FDCGBBHJGFN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C02C8C0)
#define FDCGBBHJGFN_FLNGEHJDFKG_OFFSET UNITYSDK_OFFSET(0x1C02CAB0)
#define FDCGBBHJGFN_NIBNAMCJKFI_OFFSET UNITYSDK_OFFSET(0x1C02CE50)
#define FDCGBBHJGFN_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x1C02D0F0)
#define FDCGBBHJGFN_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x1C02D0A0)
#define FDCGBBHJGFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C02CA30)
#define FDCGBBHJGFN_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1C02D050)
#define FDCGBBHJGFN_TICK_OFFSET UNITYSDK_OFFSET(0x1C02C9D0)

inline static constexpr unsigned int FDCGBBHJGFN_TypeDefinitionIndex = 59715;

	class FDCGBBHJGFN : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::RogueDLC1Dot3PictureFrame* OFKGLJOAMLD; // 0x18
		::UnityEngine::Texture* HMIDCAFGPAI; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::System::String* IFNEOIIGFBL; // 0x30
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RogueDLC1Dot3PictureFrame* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RogueDLC1Dot3PictureFrame*))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_ONTASKRESET_OFFSET))(this);
		}

		::System::String* FLNGEHJDFKG()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_FLNGEHJDFKG_OFFSET))(this);
		}

		::System::Void NIBNAMCJKFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_NIBNAMCJKFI_OFFSET))(this);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FDCGBBHJGFN_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

	};
