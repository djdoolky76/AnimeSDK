#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IABKDGPJEFI;
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define IABKDGPJEFI_OJHEGFFJKGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16DA72E0)
#define IABKDGPJEFI_OJHEGFFJKGJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16DA85F0)
#define IABKDGPJEFI_OJHEGFFJKGJ_FNJJAALEDCJ_OFFSET UNITYSDK_OFFSET(0x16DA87F0)
#define IABKDGPJEFI_OJHEGFFJKGJ_GAPIPCKONEP_OFFSET UNITYSDK_OFFSET(0x16DA8870)
#define IABKDGPJEFI_OJHEGFFJKGJ_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x16DA82D0)
#define IABKDGPJEFI_OJHEGFFJKGJ_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x16DA8280)

inline static constexpr unsigned int IABKDGPJEFI_OJHEGFFJKGJ_TypeDefinitionIndex = 82942;

	class IABKDGPJEFI_OJHEGFFJKGJ : public ::System::Object
	{
	public:
		::System::IDisposable* BOCCOCLAMAK; // 0x10
		::System::Action_1<::RPG::GameCore::GameEntity*>* GIOPCBHBLJD; // 0x18
		::RPG::GameCore::CharacterModelComponent* KELCJDKACJF; // 0x20
		::IABKDGPJEFI* ADJNOFMEIKM; // 0x28
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x30
		::System::Action_1<::RPG::GameCore::GameEntity*>* ANPIJLKMNMB; // 0x38
		::System::Void _ctor(::IABKDGPJEFI* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::CharacterModelComponent* a3, ::System::Action_1<::RPG::GameCore::GameEntity*>* a4, ::System::Action_1<::RPG::GameCore::GameEntity*>* a5)
		{
			return ((::System::Void(*)(::PVOID, ::IABKDGPJEFI*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::CharacterModelComponent*, ::System::Action_1<::RPG::GameCore::GameEntity*>*, ::System::Action_1<::RPG::GameCore::GameEntity*>*))((::PBYTE)hIl2Cpp + IABKDGPJEFI_OJHEGFFJKGJ_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
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
