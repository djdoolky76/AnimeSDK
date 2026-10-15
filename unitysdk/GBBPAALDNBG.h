#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GADFFIFFNHM;
class GBBPAALDNBG;

#define GBBPAALDNBG_BGNKBNLMNBO_OFFSET UNITYSDK_OFFSET(0x1593FDA0)
#define GBBPAALDNBG_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1593FCC0)
#define GBBPAALDNBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1593FCB0)
#define GBBPAALDNBG_FHNCAFJMBCI_1_OFFSET UNITYSDK_OFFSET(0x1593FD30)
#define GBBPAALDNBG_FHNCAFJMBCI_OFFSET UNITYSDK_OFFSET(0x1593FCD0)
#define GBBPAALDNBG_GET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1593FE30)
#define GBBPAALDNBG_GET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1593FE10)
#define GBBPAALDNBG_GET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1593FE50)
#define GBBPAALDNBG_SET_CURRENTATK_OFFSET UNITYSDK_OFFSET(0x1593FE40)
#define GBBPAALDNBG_SET_CURRENTHP_OFFSET UNITYSDK_OFFSET(0x1593FE20)
#define GBBPAALDNBG_SET_ISDEAD_OFFSET UNITYSDK_OFFSET(0x1593FE60)

inline static constexpr unsigned int GBBPAALDNBG_TypeDefinitionIndex = 63419;

	class GBBPAALDNBG : public ::System::Object
	{
	public:
		::System::Int32 _CurrentAtk_k__BackingField; // 0x10
		::System::Boolean _IsDead_k__BackingField; // 0x14
		::System::Byte _padding0[0x3];
		::System::Int32 _CurrentHP_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPAALDNBG_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBBPAALDNBG_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHNCAFJMBCI(::System::Int32 a1, ::System::Int32 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + GBBPAALDNBG_FHNCAFJMBCI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FHNCAFJMBCI_1(::GBBPAALDNBG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GBBPAALDNBG*))((::PBYTE)hIl2Cpp + GBBPAALDNBG_FHNCAFJMBCI_1_OFFSET))(this, a1);
		}

		::System::Void BGNKBNLMNBO(::GADFFIFFNHM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GADFFIFFNHM*))((::PBYTE)hIl2Cpp + GBBPAALDNBG_BGNKBNLMNBO_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentHP()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPAALDNBG_GET_CURRENTHP_OFFSET))(this);
		}

		::System::Void set_CurrentHP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBBPAALDNBG_SET_CURRENTHP_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentAtk()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPAALDNBG_GET_CURRENTATK_OFFSET))(this);
		}

		::System::Void set_CurrentAtk(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GBBPAALDNBG_SET_CURRENTATK_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDead()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GBBPAALDNBG_GET_ISDEAD_OFFSET))(this);
		}

		::System::Void set_IsDead(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GBBPAALDNBG_SET_ISDEAD_OFFSET))(this, a1);
		}

	};
