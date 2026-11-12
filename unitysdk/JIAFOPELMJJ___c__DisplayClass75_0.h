#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEOABLKMPKE;
class DHAFGMHPMHG_NNIFNAGDEHL;
class KPNOBBFKNHA;
class PNFLEMCDMJD;

#define JIAFOPELMJJ___C__DISPLAYCLASS75_0_CTOR_OFFSET UNITYSDK_OFFSET(0xBA06280)
#define JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__0_OFFSET UNITYSDK_OFFSET(0xBA0B8C0)
#define JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__2_OFFSET UNITYSDK_OFFSET(0xBA0B8E0)
#define JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__4_OFFSET UNITYSDK_OFFSET(0xBA0B900)

inline static constexpr unsigned int JIAFOPELMJJ___c__DisplayClass75_0_TypeDefinitionIndex = 60804;

	class JIAFOPELMJJ___c__DisplayClass75_0 : public ::System::Object
	{
	public:
		::KPNOBBFKNHA* dataDesign; // 0x10
		::PNFLEMCDMJD* dataBlock; // 0x18
		::CEOABLKMPKE* audioPatch; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS75_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _OnHPatchFinish_b__0(::DHAFGMHPMHG_NNIFNAGDEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHAFGMHPMHG_NNIFNAGDEHL*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__0_OFFSET))(this, a1);
		}

		::System::Boolean _OnHPatchFinish_b__2(::DHAFGMHPMHG_NNIFNAGDEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHAFGMHPMHG_NNIFNAGDEHL*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__2_OFFSET))(this, a1);
		}

		::System::Boolean _OnHPatchFinish_b__4(::DHAFGMHPMHG_NNIFNAGDEHL* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::DHAFGMHPMHG_NNIFNAGDEHL*))((::PBYTE)hIl2Cpp + JIAFOPELMJJ___C__DISPLAYCLASS75_0__ONHPATCHFINISH_B__4_OFFSET))(this, a1);
		}

	};
