#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KHEEFIDGFPC.h"
#include "unitysdk/RPG/GameCore/MarbleTargetType.h"
namespace RPG::GameCore { class ActiveMarbleVirtualCamera; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define MCLJEJNOICM_BOLJDDJDNII_OFFSET UNITYSDK_OFFSET(0x183BD730)
#define MCLJEJNOICM_CTOR_OFFSET UNITYSDK_OFFSET(0x1B84D9B0)
#define MCLJEJNOICM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1B84E800)
#define MCLJEJNOICM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1B84D9D0)
#define MCLJEJNOICM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1B84E7B0)
#define MCLJEJNOICM_TICK_OFFSET UNITYSDK_OFFSET(0x1B84E840)

inline static constexpr unsigned int MCLJEJNOICM_TypeDefinitionIndex = 53373;

	class MCLJEJNOICM : public ::KHEEFIDGFPC
	{
	public:
		::RPG::GameCore::ActiveMarbleVirtualCamera* IGHAHBNLIJA; // 0x78
		::RPG::GameCore::TaskContext* EEFMDEHLLFI; // 0x80
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ActiveMarbleVirtualCamera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ActiveMarbleVirtualCamera*))((::PBYTE)hIl2Cpp + MCLJEJNOICM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLJEJNOICM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLJEJNOICM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCLJEJNOICM_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MCLJEJNOICM_TICK_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* BOLJDDJDNII(::RPG::GameCore::MarbleTargetType a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::RPG::GameCore::MarbleTargetType, ::System::String*))((::PBYTE)hIl2Cpp + MCLJEJNOICM_BOLJDDJDNII_OFFSET))(this, a1, a2);
		}

	};
