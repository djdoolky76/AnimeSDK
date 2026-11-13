#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitGetLevelReward; }
namespace System { class Object; }

#define EMPLDFPJCMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x18805640)
#define EMPLDFPJCMJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18805720)
#define EMPLDFPJCMJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18805670)
#define EMPLDFPJCMJ_PJAHIPJDDBC_OFFSET UNITYSDK_OFFSET(0x188057E0)

inline static constexpr unsigned int EMPLDFPJCMJ_TypeDefinitionIndex = 60170;

	class EMPLDFPJCMJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitGetLevelReward* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitGetLevelReward*))((::PBYTE)hIl2Cpp + EMPLDFPJCMJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPLDFPJCMJ_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMPLDFPJCMJ_DISPOSE_OFFSET))(this);
		}

		::System::Void PJAHIPJDDBC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMPLDFPJCMJ_PJAHIPJDDBC_OFFSET))(this, a1);
		}

	};
