#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FIBKHDABPHD;
namespace System { class Action; }

#define KPEKOKMONMJ_ADD_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56CE00)
#define KPEKOKMONMJ_BLBKFNGEHKC_OFFSET UNITYSDK_OFFSET(0x1C56D200)
#define KPEKOKMONMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1C56CEC0)
#define KPEKOKMONMJ_ECPHACDDFIH_OFFSET UNITYSDK_OFFSET(0x1C56CD50)
#define KPEKOKMONMJ_GET_MAXPERCENT_OFFSET UNITYSDK_OFFSET(0x1C56CD40)
#define KPEKOKMONMJ_JEBHJGDKEHO_OFFSET UNITYSDK_OFFSET(0x1C56CD90)
#define KPEKOKMONMJ_REMOVE_ONCHANGED_OFFSET UNITYSDK_OFFSET(0x1C56CE60)
#define KPEKOKMONMJ___CTOR_B__12_0_OFFSET UNITYSDK_OFFSET(0x1C56D2C0)

inline static constexpr unsigned int KPEKOKMONMJ_TypeDefinitionIndex = 41776;

	class KPEKOKMONMJ : public ::System::Object
	{
	public:
		::System::Action* OnChanged; // 0x10
		::System::Int32 EGDFHCJJJJK; // 0x18
		::System::Int32 _MaxPercent_k__BackingField; // 0x1C
		::System::Int32 OCAFOPCCEKF; // 0x20
		::System::Int32 ACOBAMHHFMI; // 0x24
		::System::Void _ctor(::FIBKHDABPHD* a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::FIBKHDABPHD*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_MaxPercent()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_GET_MAXPERCENT_OFFSET))(this);
		}

		::System::Int32 ECPHACDDFIH()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_ECPHACDDFIH_OFFSET))(this);
		}

		::System::Void JEBHJGDKEHO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_JEBHJGDKEHO_OFFSET))(this, a1);
		}

		::System::Void add_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_ADD_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_OnChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_REMOVE_ONCHANGED_OFFSET))(this, a1);
		}

		::System::Int32 BLBKFNGEHKC(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPEKOKMONMJ_BLBKFNGEHKC_OFFSET))(this, a1);
		}

		::System::Void __ctor_b__12_0(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KPEKOKMONMJ___CTOR_B__12_0_OFFSET))(this, a1);
		}

	};
