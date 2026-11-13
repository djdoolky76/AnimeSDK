#pragma once
#include "unitysdk/unitysdk.h"
class LDKNJHJGAFN;
namespace RPG::GameCore { class TaskContext; }

#define JKNJKLHPAJB_CLJBACJDDGB_OFFSET UNITYSDK_OFFSET(0x17B2FC80)
#define JKNJKLHPAJB_CTOR_OFFSET UNITYSDK_OFFSET(0x17B2FA80)
#define JKNJKLHPAJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17B2FAB0)

inline static constexpr unsigned int JKNJKLHPAJB_TypeDefinitionIndex = 54180;

	class JKNJKLHPAJB
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::LDKNJHJGAFN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::LDKNJHJGAFN*))((::PBYTE)hIl2Cpp + JKNJKLHPAJB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNJKLHPAJB_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void CLJBACJDDGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKNJKLHPAJB_CLJBACJDDGB_OFFSET))(this);
		}

	};
