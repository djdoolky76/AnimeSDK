#pragma once
#include "unitysdk/unitysdk.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class ForceAutoBattle; }
namespace RPG::GameCore { class TaskContext; }

#define GLLCNIAMAHL_CTOR_OFFSET UNITYSDK_OFFSET(0x15AB01D0)
#define GLLCNIAMAHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15AB0530)
#define GLLCNIAMAHL_DNCFBGANPCD_OFFSET UNITYSDK_OFFSET(0x15AB04C0)
#define GLLCNIAMAHL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AB0270)

inline static constexpr unsigned int GLLCNIAMAHL_TypeDefinitionIndex = 55072;

	class GLLCNIAMAHL
	{
	public:
		::KFELGAIGHAP* CHOOMNGLJHI; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ForceAutoBattle* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ForceAutoBattle*))((::PBYTE)hIl2Cpp + GLLCNIAMAHL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLCNIAMAHL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void DNCFBGANPCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLCNIAMAHL_DNCFBGANPCD_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLLCNIAMAHL_DISPOSE_OFFSET))(this);
		}

	};
