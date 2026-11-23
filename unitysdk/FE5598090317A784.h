#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

namespace System { class String; }

#define FE5598090317A784_E83F6F358E73B362_OFFSET UNITYSDK_OFFSET(0x3828910)
#define FE5598090317A784__CTOR_OFFSET UNITYSDK_OFFSET(0x38289F0)

inline static constexpr unsigned int FE5598090317A784_TypeDefinitionIndex = 17937;

class FE5598090317A784 : public ::System::Object
{
public:
	::System::String* E3E94A773C5FEFFE; // 0x10
	::System::String* E40817C5EDF25EB6; // 0x18
	::System::Single A8B0F2073229F5B7; // 0x20
	::UnityEngine::E46B881AA2636190 BB1AE680EA9B771E; // 0x24
	::UnityEngine::E46B881AA2636190 F654C6B0393A1B35; // 0x34
	::System::Single FC85259283AB7093; // 0x44
	::System::Single BA9189804CBDD875; // 0x48
	::System::Single F778C29E720E4AFC; // 0x4C
	::System::Single A6E95688790DA184; // 0x50
	::System::Single B6705E27888737E4; // 0x54
	::System::Int32 B0EB7D773B49E06D; // 0x58

	::System::Boolean E83F6F358E73B362(::FE5598090317A784* BEEE7A5A60941632)
	{
		return ((::System::Boolean(*)(::PVOID, ::FE5598090317A784*))((::PBYTE)hIl2Cpp + FE5598090317A784_E83F6F358E73B362_OFFSET))(this, BEEE7A5A60941632);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE5598090317A784__CTOR_OFFSET))(this);
	}
};
