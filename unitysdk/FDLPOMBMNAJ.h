#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class SetSummonUnitAttach; }
namespace RPG::GameCore { class TaskContext; }

#define FDLPOMBMNAJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C038E40)
#define FDLPOMBMNAJ_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C038E70)
#define FDLPOMBMNAJ_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1C038EB0)

inline static constexpr unsigned int FDLPOMBMNAJ_TypeDefinitionIndex = 59844;

	class FDLPOMBMNAJ
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetSummonUnitAttach* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetSummonUnitAttach*))((::PBYTE)hIl2Cpp + FDLPOMBMNAJ_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLPOMBMNAJ_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDLPOMBMNAJ_ONTASKBEGIN_OFFSET))(this);
		}

	};
