#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABKDGPJEFI;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Action; }
namespace System { class IDisposable; }

#define IABKDGPJEFI_OJHEGFFJKGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFCA50)
#define IABKDGPJEFI_OJHEGFFJKGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15DFDD70)
#define IABKDGPJEFI_OJHEGFFJKGJ_FNJJAALEDCJ_OFFSET UNITYSDK_OFFSET(0x15DFDF80)
#define IABKDGPJEFI_OJHEGFFJKGJ_GAPIPCKONEP_OFFSET UNITYSDK_OFFSET(0x15DFE000)
#define IABKDGPJEFI_OJHEGFFJKGJ_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15DFDA50)
#define IABKDGPJEFI_OJHEGFFJKGJ_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15DFDA00)

	class IABKDGPJEFI_OJHEGFFJKGJ : public ::System::Object
	{
	public:
		::System::IDisposable* BOCCOCLAMAK; // 0x10
		::RPG::GameCore::CharacterModelComponent* KELCJDKACJF; // 0x18
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x20
		::System::Action* GIOPCBHBLJD; // 0x28
		::IABKDGPJEFI* ADJNOFMEIKM; // 0x30
		::System::Action* ANPIJLKMNMB; // 0x38
		::System::Void _ctor(::IABKDGPJEFI* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::CharacterModelComponent* a3, ::System::Action* a4, ::System::Action* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IABKDGPJEFI*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterModelComponent*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_DISPOSE_OFFSET))(this);
		}

		::System::Void FNJJAALEDCJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_FNJJAALEDCJ_OFFSET))(this, a1);
		}

		::System::Void GAPIPCKONEP(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_GAPIPCKONEP_OFFSET))(this, a1, a2);
		}

	};
