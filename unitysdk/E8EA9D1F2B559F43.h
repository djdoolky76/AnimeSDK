#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E1E5934C90E1E618_FCCEA3826B98FE7D.h"
#include "unitysdk/System/Object.h"

class B008DECE68704AB9;
class F8F0F2FB31C1A785;
namespace System { class String; }

#define E8EA9D1F2B559F43__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E8EA9D1F2B559F43_TypeDefinitionIndex = 2509;

class E8EA9D1F2B559F43 : public ::System::Object
{
public:
	::System::String* EF3AF7BA43986650; // 0x10
	::System::String* B53CB1F46E7959E9; // 0x18
	::E1E5934C90E1E618_FCCEA3826B98FE7D EF108835F65E0539; // 0x20
	::System::Byte _padding0[0x4];
	::B008DECE68704AB9* B4982D3EC22A8517; // 0x28
	::F8F0F2FB31C1A785* A92CECD5085DD164; // 0x30
	::System::String* B920BBEF4177BE86; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E8EA9D1F2B559F43__CTOR_OFFSET))(this);
	}
};
