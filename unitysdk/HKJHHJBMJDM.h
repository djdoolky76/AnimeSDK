#pragma once
#include "unitysdk/unitysdk.h"
class FHOJCBIBJKE;
namespace RPG::GameCore { class TaskContext; }

#define HKJHHJBMJDM_CTOR_OFFSET UNITYSDK_OFFSET(0x15D3CF20)
#define HKJHHJBMJDM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15D3CF50)
#define HKJHHJBMJDM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15D3D050)

inline static constexpr unsigned int HKJHHJBMJDM_TypeDefinitionIndex = 53349;

	class HKJHHJBMJDM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FHOJCBIBJKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FHOJCBIBJKE*))((::PBYTE)hIl2Cpp + HKJHHJBMJDM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJHHJBMJDM_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJHHJBMJDM_ONTASKBEGIN_OFFSET))(this);
		}

	};
