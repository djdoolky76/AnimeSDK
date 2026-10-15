#pragma once
#include "unitysdk/unitysdk.h"
class CAHCLMHKGKG;
namespace RPG::GameCore { class TaskContext; }

#define MBEHOKIMGPD_CTOR_OFFSET UNITYSDK_OFFSET(0xB859510)
#define MBEHOKIMGPD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB859540)

inline static constexpr unsigned int MBEHOKIMGPD_TypeDefinitionIndex = 52860;

	class MBEHOKIMGPD
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::CAHCLMHKGKG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::CAHCLMHKGKG*))((::PBYTE)hIl2Cpp + MBEHOKIMGPD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MBEHOKIMGPD_ONTASKBEGIN_OFFSET))(this);
		}

	};
