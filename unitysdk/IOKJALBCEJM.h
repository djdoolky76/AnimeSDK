#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class AdvTrackNpcPlayerHide; }
namespace RPG::GameCore { class TaskContext; }

#define IOKJALBCEJM_CTOR_OFFSET UNITYSDK_OFFSET(0x16507E30)
#define IOKJALBCEJM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16507E60)

inline static constexpr unsigned int IOKJALBCEJM_TypeDefinitionIndex = 52513;

	class IOKJALBCEJM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::AdvTrackNpcPlayerHide* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::AdvTrackNpcPlayerHide*))((::PBYTE)hIl2Cpp + IOKJALBCEJM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOKJALBCEJM_ONTASKBEGIN_OFFSET))(this);
		}

	};
