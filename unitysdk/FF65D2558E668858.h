#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ABC/Config/WwiseEvent.h"
#include "unitysdk/E379DE61A548837D.h"

class AB642D1382756991;
namespace UnityEngine { class GameObject; }

#define FF65D2558E668858__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int FF65D2558E668858_TypeDefinitionIndex = 8498;

class FF65D2558E668858 : public ::E379DE61A548837D
{
public:
	::ABC::Config::WwiseEvent F642DF094887EE91; // 0x38
	::UnityEngine::GameObject* B919B846D6BC0B1B; // 0x48
	::AB642D1382756991* E38FD399E4DFEF27; // 0x50
	::System::Boolean F22D901540AC0AFC; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FF65D2558E668858__CTOR_OFFSET))(this);
	}
};
