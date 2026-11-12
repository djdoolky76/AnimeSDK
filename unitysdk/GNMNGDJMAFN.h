#pragma once
#include "unitysdk/unitysdk.h"
class IPPBBDNNICM;
namespace RPG::GameCore { class TaskContext; }

#define GNMNGDJMAFN_CTOR_OFFSET UNITYSDK_OFFSET(0x16AA0AD0)
#define GNMNGDJMAFN_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16AA0B00)

inline static constexpr unsigned int GNMNGDJMAFN_TypeDefinitionIndex = 54181;

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
