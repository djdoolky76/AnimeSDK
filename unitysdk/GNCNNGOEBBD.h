#pragma once
#include "unitysdk/unitysdk.h"
class NMDBHCPCNHK;
namespace RPG::GameCore { class TaskContext; }

#define GNCNNGOEBBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15AF2B50)
#define GNCNNGOEBBD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15AF2B80)
#define GNCNNGOEBBD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x15AF2C10)

inline static constexpr unsigned int GNCNNGOEBBD_TypeDefinitionIndex = 53646;

	class GNCNNGOEBBD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::NMDBHCPCNHK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::NMDBHCPCNHK*))((::PBYTE)hIl2Cpp + GNCNNGOEBBD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCNNGOEBBD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNCNNGOEBBD_ONTASKRESET_OFFSET))(this);
		}

	};
