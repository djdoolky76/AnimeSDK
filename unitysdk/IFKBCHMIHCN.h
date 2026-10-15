#pragma once
#include "unitysdk/unitysdk.h"
class JGHKOBIIEFC;
namespace RPG::GameCore { class TaskContext; }
namespace System { class Object; }

#define IFKBCHMIHCN_CTOR_OFFSET UNITYSDK_OFFSET(0x15F12CD0)
#define IFKBCHMIHCN_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0x15F12FF0)
#define IFKBCHMIHCN__REGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F12E70)
#define IFKBCHMIHCN__UNREGISTEREVENTCALLBACK_OFFSET UNITYSDK_OFFSET(0x15F12F30)

inline static constexpr unsigned int IFKBCHMIHCN_TypeDefinitionIndex = 53465;

	class IFKBCHMIHCN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JGHKOBIIEFC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JGHKOBIIEFC*))((::PBYTE)hIl2Cpp + IFKBCHMIHCN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _RegisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKBCHMIHCN__REGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void _UnregisterEventCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFKBCHMIHCN__UNREGISTEREVENTCALLBACK_OFFSET))(this);
		}

		::System::Void ILEMLGEGLCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IFKBCHMIHCN_ILEMLGEGLCC_OFFSET))(this, a1);
		}

	};
