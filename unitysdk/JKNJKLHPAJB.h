#pragma once
#include "unitysdk/unitysdk.h"
class LDKNJHJGAFN;
namespace RPG::GameCore { class TaskContext; }

#define JKNJKLHPAJB_CLJBACJDDGB_OFFSET UNITYSDK_OFFSET(0xBA51B00)
#define JKNJKLHPAJB_CTOR_OFFSET UNITYSDK_OFFSET(0xBA51900)
#define JKNJKLHPAJB_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBA51930)

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
