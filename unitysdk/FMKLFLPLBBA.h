#pragma once
#include "unitysdk/unitysdk.h"
class AMFOHIEODIH;
namespace RPG::GameCore { class TaskContext; }

#define FMKLFLPLBBA_CTOR_OFFSET UNITYSDK_OFFSET(0x167D1A00)
#define FMKLFLPLBBA_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x167D1A30)

inline static constexpr unsigned int FMKLFLPLBBA_TypeDefinitionIndex = 59799;

	class FMKLFLPLBBA
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::AMFOHIEODIH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::AMFOHIEODIH*))((::PBYTE)hIl2Cpp + FMKLFLPLBBA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMKLFLPLBBA_ONTASKBEGIN_OFFSET))(this);
		}

	};
