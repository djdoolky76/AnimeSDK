#pragma once
#include "unitysdk/unitysdk.h"
class GJEKHAKEEPJ;
namespace RPG::GameCore { class CreateFMChannelSource; }
namespace RPG::GameCore { class TaskContext; }

#define FBPNAEDBIKO_CTOR_OFFSET UNITYSDK_OFFSET(0x156ADBA0)
#define FBPNAEDBIKO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x156ADF00)
#define FBPNAEDBIKO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x156ADBD0)
#define FBPNAEDBIKO_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x156ADE00)

inline static constexpr unsigned int FBPNAEDBIKO_TypeDefinitionIndex = 52720;

	class FBPNAEDBIKO
	{
	public:
		::GJEKHAKEEPJ* BBANMOONFHP; // 0x28
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::CreateFMChannelSource* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::CreateFMChannelSource*))((::PBYTE)hIl2Cpp + FBPNAEDBIKO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNAEDBIKO_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNAEDBIKO_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPNAEDBIKO_DISPOSE_OFFSET))(this);
		}

	};
