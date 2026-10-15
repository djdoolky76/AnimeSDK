#pragma once
#include "unitysdk/unitysdk.h"
class FMFNKGLNPMI;
namespace RPG::GameCore { class TaskContext; }

#define JHAFDHCIHKC_CTOR_OFFSET UNITYSDK_OFFSET(0xB1A22E0)
#define JHAFDHCIHKC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB1A2310)

inline static constexpr unsigned int JHAFDHCIHKC_TypeDefinitionIndex = 55039;

	class JHAFDHCIHKC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::FMFNKGLNPMI* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::FMFNKGLNPMI*))((::PBYTE)hIl2Cpp + JHAFDHCIHKC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHAFDHCIHKC_ONTASKBEGIN_OFFSET))(this);
		}

	};
