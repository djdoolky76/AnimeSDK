#pragma once
#include "unitysdk/unitysdk.h"
class NONAIBLAJKA;
namespace RPG::GameCore { class TaskContext; }

#define JLLNNMJELFO_CTOR_OFFSET UNITYSDK_OFFSET(0xB24FB10)
#define JLLNNMJELFO_DPAICEGBONI_OFFSET UNITYSDK_OFFSET(0xB24FC70)
#define JLLNNMJELFO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB24FB70)

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
