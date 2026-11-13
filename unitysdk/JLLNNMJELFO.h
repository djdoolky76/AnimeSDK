#pragma once
#include "unitysdk/unitysdk.h"
class NONAIBLAJKA;
namespace RPG::GameCore { class TaskContext; }

#define JLLNNMJELFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1A097DE0)
#define JLLNNMJELFO_DPAICEGBONI_OFFSET UNITYSDK_OFFSET(0x1A097F10)
#define JLLNNMJELFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1A097E40)

inline static constexpr unsigned int JLLNNMJELFO_TypeDefinitionIndex = 54616;

	class JLLNNMJELFO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NONAIBLAJKA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NONAIBLAJKA*))((::PBYTE)hIl2Cpp + JLLNNMJELFO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLLNNMJELFO_ONTASKBEGIN_OFFSET))(this);
		}

		static ::System::Void DPAICEGBONI(::RPG::GameCore::TaskContext* a1, ::NONAIBLAJKA* a2)
		{
			return ((::System::Void(*)(::RPG::GameCore::TaskContext*, ::NONAIBLAJKA*))((::PBYTE)hIl2Cpp + JLLNNMJELFO_DPAICEGBONI_OFFSET))(a1, a2);
		}

	};
