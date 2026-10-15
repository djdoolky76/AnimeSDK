#pragma once
#include "unitysdk/unitysdk.h"
class GMBDKAAEDOJ;
namespace RPG::GameCore { class TaskContext; }

#define FPICIPOLPPK_CTOR_OFFSET UNITYSDK_OFFSET(0x1590E900)
#define FPICIPOLPPK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1590E930)
#define FPICIPOLPPK_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x1590E970)
#define FPICIPOLPPK_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x1590EE10)

inline static constexpr unsigned int FPICIPOLPPK_TypeDefinitionIndex = 53448;

	class FPICIPOLPPK
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::GMBDKAAEDOJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::GMBDKAAEDOJ*))((::PBYTE)hIl2Cpp + FPICIPOLPPK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPICIPOLPPK_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPICIPOLPPK_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPICIPOLPPK_ONTASKRESET_OFFSET))(this);
		}

	};
