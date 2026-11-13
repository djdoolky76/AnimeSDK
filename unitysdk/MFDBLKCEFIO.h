#pragma once
#include "unitysdk/unitysdk.h"
class KLKIDJCFOLM;
namespace RPG::GameCore { class TaskContext; }

#define MFDBLKCEFIO_CTOR_OFFSET UNITYSDK_OFFSET(0x17C786D0)
#define MFDBLKCEFIO_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C78700)

inline static constexpr unsigned int MFDBLKCEFIO_TypeDefinitionIndex = 59386;

	class MFDBLKCEFIO
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::KLKIDJCFOLM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::KLKIDJCFOLM*))((::PBYTE)hIl2Cpp + MFDBLKCEFIO_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFDBLKCEFIO_ONTASKBEGIN_OFFSET))(this);
		}

	};
