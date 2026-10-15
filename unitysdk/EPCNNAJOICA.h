#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class HJCOLAEIJFM;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ST_Side_DetectAward; }
namespace RPG::GameCore { class TaskContext; }

#define EPCNNAJOICA_ANHMDDAGLAF_OFFSET UNITYSDK_OFFSET(0x155C4CE0)
#define EPCNNAJOICA_CTOR_OFFSET UNITYSDK_OFFSET(0x155C3D90)
#define EPCNNAJOICA_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155C3FA0)
#define EPCNNAJOICA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x155C3DB0)
#define EPCNNAJOICA_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x155C3FF0)
#define EPCNNAJOICA_TICK_OFFSET UNITYSDK_OFFSET(0x155C4040)

inline static constexpr unsigned int EPCNNAJOICA_TypeDefinitionIndex = 52228;

	class EPCNNAJOICA
	{
	public:
		::FOOIINCDBFA* AGJDABDMMEH; // 0x28
		::HJCOLAEIJFM* ACLGKGFMOGM; // 0x30
		::System::Single OMICMGNDHCF; // 0x38
		// static const ::System::Object GCCLLGPDKJM; // 0x0
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_DetectAward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_DetectAward*))((::PBYTE)hIl2Cpp + EPCNNAJOICA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNNAJOICA_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNNAJOICA_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPCNNAJOICA_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EPCNNAJOICA_TICK_OFFSET))(this, a1);
		}

		::System::Boolean ANHMDDAGLAF(::RPG::GameCore::GameEntity* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EPCNNAJOICA_ANHMDDAGLAF_OFFSET))(this, a1, a2);
		}

	};
