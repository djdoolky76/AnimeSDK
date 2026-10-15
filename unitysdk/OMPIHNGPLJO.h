#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitMatchThreeBirdLocationChange; }
namespace System { class Object; }

#define OMPIHNGPLJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF497F0)
#define OMPIHNGPLJO_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xBF49B40)
#define OMPIHNGPLJO__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF499C0)
#define OMPIHNGPLJO__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF49A80)

inline static constexpr unsigned int OMPIHNGPLJO_TypeDefinitionIndex = 53013;

	class OMPIHNGPLJO
	{
	public:
		::System::UInt32 NFPAFAKKALP; // 0x68
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitMatchThreeBirdLocationChange* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitMatchThreeBirdLocationChange*))((::PBYTE)hIl2Cpp + OMPIHNGPLJO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIHNGPLJO__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMPIHNGPLJO__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OMPIHNGPLJO_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
