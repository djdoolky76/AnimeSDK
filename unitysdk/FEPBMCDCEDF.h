#pragma once
#include "unitysdk/unitysdk.h"
class OLCFDLCNOHH;
namespace RPG::GameCore { class TaskContext; }

#define FEPBMCDCEDF_CTOR_OFFSET UNITYSDK_OFFSET(0x157234A0)
#define FEPBMCDCEDF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x157234D0)

inline static constexpr unsigned int FEPBMCDCEDF_TypeDefinitionIndex = 55694;

	class FEPBMCDCEDF
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::OLCFDLCNOHH* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::OLCFDLCNOHH*))((::PBYTE)hIl2Cpp + FEPBMCDCEDF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEPBMCDCEDF_ONTASKBEGIN_OFFSET))(this);
		}

	};
