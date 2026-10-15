#pragma once
#include "unitysdk/unitysdk.h"
class JFEFADICJCM;
namespace RPG::GameCore { class TaskContext; }

#define NNMCONJPDDK_CTOR_OFFSET UNITYSDK_OFFSET(0xBCCC030)
#define NNMCONJPDDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBCCC060)

inline static constexpr unsigned int NNMCONJPDDK_TypeDefinitionIndex = 52833;

	class NNMCONJPDDK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::JFEFADICJCM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::JFEFADICJCM*))((::PBYTE)hIl2Cpp + NNMCONJPDDK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNMCONJPDDK_ONTASKBEGIN_OFFSET))(this);
		}

	};
