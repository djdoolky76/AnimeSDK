#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransferMahJongLayoutEffect; }

#define DMOBAEFEAEO_CTOR_OFFSET UNITYSDK_OFFSET(0xFEC1CD0)
#define DMOBAEFEAEO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xFEC1D00)

inline static constexpr unsigned int DMOBAEFEAEO_TypeDefinitionIndex = 55709;

	class DMOBAEFEAEO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TransferMahJongLayoutEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TransferMahJongLayoutEffect*))((::PBYTE)hIl2Cpp + DMOBAEFEAEO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMOBAEFEAEO_ONTASKBEGIN_OFFSET))(this);
		}

	};
