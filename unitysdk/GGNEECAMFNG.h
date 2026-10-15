#pragma once
#include "unitysdk/unitysdk.h"
class MPIPCMOAOGM;
namespace RPG::GameCore { class TaskContext; }

#define GGNEECAMFNG_CTOR_OFFSET UNITYSDK_OFFSET(0x15A10EB0)
#define GGNEECAMFNG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15A10EE0)

	class GGNEECAMFNG
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::MPIPCMOAOGM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::MPIPCMOAOGM*))((::PBYTE)hIl2Cpp + GGNEECAMFNG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGNEECAMFNG_ONTASKBEGIN_OFFSET))(this);
		}

	};
