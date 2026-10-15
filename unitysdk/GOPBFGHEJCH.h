#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class RtGridTransmitToPos; }
namespace RPG::GameCore { class TaskContext; }

#define GOPBFGHEJCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15B3C1A0)
#define GOPBFGHEJCH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B3C1D0)

inline static constexpr unsigned int GOPBFGHEJCH_TypeDefinitionIndex = 54177;

	class GOPBFGHEJCH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::RtGridTransmitToPos* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::RtGridTransmitToPos*))((::PBYTE)hIl2Cpp + GOPBFGHEJCH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPBFGHEJCH_ONTASKBEGIN_OFFSET))(this);
		}

	};
