#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class DHAFGMHPMHG_NNIFNAGDEHL;

#define JIAFOPELMJJ___C__DISPLAYCLASS12_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB1C9C40)
#define JIAFOPELMJJ___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xB1DECC0)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass12_0_TypeDefinitionIndex = 59502;

	class JIAFOPELMJJ___c__DisplayClass12_0 : public ::System::Object
	{
	public:
		::CEOABLKMPKE* audioPatch; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS12_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnAudioHPatchFinish_b__0(::DHAFGMHPMHG_NNIFNAGDEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHAFGMHPMHG_NNIFNAGDEHL*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS12_0__ONAUDIOHPATCHFINISH_B__0_OFFSET))(this, a1);
		}

	};
