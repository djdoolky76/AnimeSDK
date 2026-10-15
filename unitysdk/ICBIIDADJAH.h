#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDHKOGMNINN;
class FOOIINCDBFA;
class NNDFHGMECMG;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }

#define ICBIIDADJAH_ANHMDDAGLAF_OFFSET UNITYSDK_OFFSET(0x15E3E3A0)
#define ICBIIDADJAH_BCCNBDOCADB_OFFSET UNITYSDK_OFFSET(0x15E3DFC0)
#define ICBIIDADJAH_CHEFCNLOGDI_OFFSET UNITYSDK_OFFSET(0x15E3E0E0)
#define ICBIIDADJAH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E3D4F0)
#define ICBIIDADJAH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15E3D800)
#define ICBIIDADJAH_IAAHNNPLPIJ_OFFSET UNITYSDK_OFFSET(0x15E3E640)
#define ICBIIDADJAH_JGHMOHCDNJH_OFFSET UNITYSDK_OFFSET(0x15E3DA40)
#define ICBIIDADJAH_MDLEHIINCAH_OFFSET UNITYSDK_OFFSET(0x15E3D8A0)
#define ICBIIDADJAH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15E3D520)
#define ICBIIDADJAH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15E3D850)
#define ICBIIDADJAH_TICK_OFFSET UNITYSDK_OFFSET(0x15E3D680)

inline static constexpr unsigned int ICBIIDADJAH_TypeDefinitionIndex = 52230;

	class ICBIIDADJAH
	{
	public:
		::FOOIINCDBFA* AGJDABDMMEH; // 0x28
		::System::Single OMICMGNDHCF; // 0x30
		::System::Boolean KAHMFAAOIGH; // 0x34
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::EDHKOGMNINN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::EDHKOGMNINN*))((::PBYTE)hIl2Cpp + ICBIIDADJAH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBIIDADJAH_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBIIDADJAH_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBIIDADJAH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICBIIDADJAH_TICK_OFFSET))(this, a1);
		}

		::System::Void MDLEHIINCAH(::NNDFHGMECMG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NNDFHGMECMG*))((::PBYTE)hIl2Cpp + ICBIIDADJAH_MDLEHIINCAH_OFFSET))(this, a1);
		}

		::System::Void JGHMOHCDNJH(::RPG::GameCore::GameEntity* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + ICBIIDADJAH_JGHMOHCDNJH_OFFSET))(this, a1, a2);
		}

		::System::Void BCCNBDOCADB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + ICBIIDADJAH_BCCNBDOCADB_OFFSET))(this, a1);
		}

		::System::Boolean CHEFCNLOGDI(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::GameEntity* a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single))((::PBYTE)hIl2Cpp + ICBIIDADJAH_CHEFCNLOGDI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAAHNNPLPIJ(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ICBIIDADJAH_IAAHNNPLPIJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean ANHMDDAGLAF(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + ICBIIDADJAH_ANHMDDAGLAF_OFFSET))(this, a1, a2);
		}

	};
