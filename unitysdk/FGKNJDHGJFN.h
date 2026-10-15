#pragma once
#include "unitysdk/unitysdk.h"
class JNIPOABPBPD;
namespace RPG::GameCore { class TaskContext; }

#define FGKNJDHGJFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15767310)
#define FGKNJDHGJFN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET UNITYSDK_OFFSET(0x157673D0)
#define FGKNJDHGJFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15767340)

inline static constexpr unsigned int FGKNJDHGJFN_TypeDefinitionIndex = 57890;

	class FGKNJDHGJFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JNIPOABPBPD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JNIPOABPBPD*))((::PBYTE)hIl2Cpp + FGKNJDHGJFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGKNJDHGJFN_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnFinishImmediatelyInPerformance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGKNJDHGJFN_ONFINISHIMMEDIATELYINPERFORMANCE_OFFSET))(this, a1);
		}

	};
