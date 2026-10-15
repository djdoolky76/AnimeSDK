#pragma once
#include "unitysdk/unitysdk.h"
class IPPBBDNNICM;
namespace RPG::GameCore { class TaskContext; }

#define GNMNGDJMAFN_CTOR_OFFSET UNITYSDK_OFFSET(0x15B1B380)
#define GNMNGDJMAFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x15B1B3B0)

inline static constexpr unsigned int GNMNGDJMAFN_TypeDefinitionIndex = 53021;

	class GNMNGDJMAFN
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::IPPBBDNNICM* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::IPPBBDNNICM*))((::PBYTE)hIl2Cpp + GNMNGDJMAFN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GNMNGDJMAFN_ONTASKBEGIN_OFFSET))(this);
		}

	};
