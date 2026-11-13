#pragma once
#include "unitysdk/unitysdk.h"
class JFEFADICJCM;
namespace RPG::GameCore { class TaskContext; }

#define NNMCONJPDDK_CTOR_OFFSET UNITYSDK_OFFSET(0x17A0A290)
#define NNMCONJPDDK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17A0A2C0)

inline static constexpr unsigned int NNMCONJPDDK_TypeDefinitionIndex = 53986;

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
