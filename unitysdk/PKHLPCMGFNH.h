#pragma once
#include "unitysdk/unitysdk.h"
class CKPAKDEDMDA;
namespace RPG::GameCore { class TaskContext; }

#define PKHLPCMGFNH_CTOR_OFFSET UNITYSDK_OFFSET(0xC2BB0D0)
#define PKHLPCMGFNH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xC2BB100)

inline static constexpr unsigned int PKHLPCMGFNH_TypeDefinitionIndex = 52943;

	class PKHLPCMGFNH
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CKPAKDEDMDA* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CKPAKDEDMDA*))((::PBYTE)hIl2Cpp + PKHLPCMGFNH_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PKHLPCMGFNH_ONTASKBEGIN_OFFSET))(this);
		}

	};
