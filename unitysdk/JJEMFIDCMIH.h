#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetAdvEffectBGCurve; }
namespace RPG::GameCore { class TaskContext; }

#define JJEMFIDCMIH_CTOR_OFFSET UNITYSDK_OFFSET(0x1742C6A0)
#define JJEMFIDCMIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1742C6D0)

inline static constexpr unsigned int JJEMFIDCMIH_TypeDefinitionIndex = 56524;

	class JJEMFIDCMIH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAdvEffectBGCurve* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAdvEffectBGCurve*))((::PBYTE)hIl2Cpp + JJEMFIDCMIH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJEMFIDCMIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
