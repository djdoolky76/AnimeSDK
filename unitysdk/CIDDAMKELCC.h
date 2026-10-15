#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AITryInsertUltra; }
namespace RPG::GameCore { class TaskContext; }

#define CIDDAMKELCC_CTOR_OFFSET UNITYSDK_OFFSET(0xCF5E370)
#define CIDDAMKELCC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCF5E3A0)

inline static constexpr unsigned int CIDDAMKELCC_TypeDefinitionIndex = 54793;

	class CIDDAMKELCC
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AITryInsertUltra* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AITryInsertUltra*))((::PBYTE)hIl2Cpp + CIDDAMKELCC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIDDAMKELCC_ONTASKBEGIN_OFFSET))(this);
		}

	};
