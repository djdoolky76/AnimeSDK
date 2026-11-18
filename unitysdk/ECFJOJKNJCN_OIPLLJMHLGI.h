#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ECFJOJKNJCN;
namespace System { class Action; }

#define ECFJOJKNJCN_OIPLLJMHLGI_FBNBBPGPFHK_OFFSET UNITYSDK_OFFSET(0x187A3560)
#define ECFJOJKNJCN_OIPLLJMHLGI__CTOR_OFFSET UNITYSDK_OFFSET(0x187A3550)

inline static constexpr unsigned int ECFJOJKNJCN_OIPLLJMHLGI_TypeDefinitionIndex = 14952;

class ECFJOJKNJCN_OIPLLJMHLGI : public ::System::Object
{
public:
	::ECFJOJKNJCN* KLHPEBKNIFB; // 0x10
	::System::Action* EJGDHCIBCJH; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_OIPLLJMHLGI__CTOR_OFFSET))(this);
	}

	::System::Void FBNBBPGPFHK(::Il2CppArray<::System::Byte>* LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + ECFJOJKNJCN_OIPLLJMHLGI_FBNBBPGPFHK_OFFSET))(this, LJBPECKCCEA);
	}
};
