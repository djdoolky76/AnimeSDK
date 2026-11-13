#pragma once
#include "unitysdk/unitysdk.h"
class JKHKKELCKDJ;
namespace RPG::GameCore { class TaskContext; }

#define GJKNECNGOCD_CTOR_OFFSET UNITYSDK_OFFSET(0x1A8A6D60)
#define GJKNECNGOCD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A8A6D90)

inline static constexpr unsigned int GJKNECNGOCD_TypeDefinitionIndex = 54061;

	class GJKNECNGOCD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JKHKKELCKDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JKHKKELCKDJ*))((::PBYTE)hIl2Cpp + GJKNECNGOCD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJKNECNGOCD_ONTASKBEGIN_OFFSET))(this);
		}

	};
