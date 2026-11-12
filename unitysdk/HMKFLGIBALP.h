#pragma once
#include "unitysdk/unitysdk.h"
class GECICOILNGO;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define HMKFLGIBALP_CTOR_OFFSET UNITYSDK_OFFSET(0x16D23750)
#define HMKFLGIBALP_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x16D23A70)
#define HMKFLGIBALP__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D238F0)
#define HMKFLGIBALP__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x16D239B0)

inline static constexpr unsigned int HMKFLGIBALP_TypeDefinitionIndex = 54626;

	class HMKFLGIBALP
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GECICOILNGO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GECICOILNGO*))((::PBYTE)hIl2Cpp + HMKFLGIBALP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKFLGIBALP__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMKFLGIBALP__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HMKFLGIBALP_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
