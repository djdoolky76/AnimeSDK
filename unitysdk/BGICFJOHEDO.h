#pragma once
#include "unitysdk/unitysdk.h"
class IIFNOMLIFPK;
namespace RPG::GameCore { class TaskContext; }

#define BGICFJOHEDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBB110A0)
#define BGICFJOHEDO_DBNPECHKMOJ_OFFSET UNITYSDK_OFFSET(0xBB11120)
#define BGICFJOHEDO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBB112F0)
#define BGICFJOHEDO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xBB110D0)

inline static constexpr unsigned int BGICFJOHEDO_TypeDefinitionIndex = 53792;

	class BGICFJOHEDO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IIFNOMLIFPK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IIFNOMLIFPK*))((::PBYTE)hIl2Cpp + BGICFJOHEDO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGICFJOHEDO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGICFJOHEDO_DISPOSE_OFFSET))(this);
		}

		::System::Void DBNPECHKMOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGICFJOHEDO_DBNPECHKMOJ_OFFSET))(this);
		}

	};
