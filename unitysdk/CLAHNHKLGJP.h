#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class Action; }

#define CLAHNHKLGJP_BJLLDPLEIBG_OFFSET UNITYSDK_OFFSET(0x1A1B9CD0)
#define CLAHNHKLGJP_EDEFLFIKNFK_OFFSET UNITYSDK_OFFSET(0x1A1B9D20)
#define CLAHNHKLGJP_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x1A1B9C50)
#define CLAHNHKLGJP__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1B9C30)

inline static constexpr unsigned int CLAHNHKLGJP_TypeDefinitionIndex = 73333;

class CLAHNHKLGJP : public ::System::Object
{
public:
	::System::Action* CBDBDDFEPEK; // 0x10
	::UnityEngine::Vector3 ILOJFPNKJII; // 0x18
	::System::Int32 ADPHEEPLLBP; // 0x24

	::System::Void _ctor(::UnityEngine::Vector3 OHOGDOMNHNK, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + CLAHNHKLGJP__CTOR_OFFSET))(this, OHOGDOMNHNK, EJGDHCIBCJH);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAHNHKLGJP_PGHAJOMNDDJ_OFFSET))(this);
	}

	::System::Void BJLLDPLEIBG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAHNHKLGJP_BJLLDPLEIBG_OFFSET))(this);
	}

	::System::Void EDEFLFIKNFK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLAHNHKLGJP_EDEFLFIKNFK_OFFSET))(this);
	}
};
