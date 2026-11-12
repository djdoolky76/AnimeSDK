#pragma once
#include "unitysdk/unitysdk.h"
class AJGBAAOLOBM;
class MNCOPNHONHO;
namespace RPG::GameCore { class TaskContext; }

#define PNHPJMLEOOL_CTOR_OFFSET UNITYSDK_OFFSET(0xCC6C070)
#define PNHPJMLEOOL_IMONOMAKBHM_OFFSET UNITYSDK_OFFSET(0xCC6C190)
#define PNHPJMLEOOL_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC6C0A0)

inline static constexpr unsigned int PNHPJMLEOOL_TypeDefinitionIndex = 53976;

	class PNHPJMLEOOL
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AJGBAAOLOBM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AJGBAAOLOBM*))((::PBYTE)hIl2Cpp + PNHPJMLEOOL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNHPJMLEOOL_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Boolean IMONOMAKBHM(::MNCOPNHONHO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + PNHPJMLEOOL_IMONOMAKBHM_OFFSET))(this, a1);
		}

	};
