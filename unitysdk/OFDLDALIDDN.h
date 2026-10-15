#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFNMCDGFGIH;
namespace RPG::GameCore { class MarbleRandomBuffRow; }

#define OFDLDALIDDN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C98CA70)
#define OFDLDALIDDN_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C98CCE0)
#define OFDLDALIDDN_GET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1C98CCC0)
#define OFDLDALIDDN_GET_TECHID_OFFSET UNITYSDK_OFFSET(0x1C98CCA0)
#define OFDLDALIDDN_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x1C98CBF0)
#define OFDLDALIDDN_ONSELECT_OFFSET UNITYSDK_OFFSET(0x1C98CAA0)
#define OFDLDALIDDN_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C98CCF0)
#define OFDLDALIDDN_SET_ISSELECTED_OFFSET UNITYSDK_OFFSET(0x1C98CCD0)
#define OFDLDALIDDN_SET_TECHID_OFFSET UNITYSDK_OFFSET(0x1C98CCB0)

	class OFDLDALIDDN : public ::System::Object
	{
	public:
		::RPG::GameCore::MarbleRandomBuffRow* EABKOHGCHFP; // 0x10
		::JFNMCDGFGIH* KGCNPIEDOCA; // 0x18
		::System::Boolean _IsActive_k__BackingField; // 0x20
		::System::Boolean _IsSelected_k__BackingField; // 0x21
		::System::Byte _padding0[0x2];
		::System::UInt32 _TechId_k__BackingField; // 0x24
		::System::Void _ctor(::JFNMCDGFGIH* a1, ::RPG::GameCore::MarbleRandomBuffRow* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JFNMCDGFGIH*, ::RPG::GameCore::MarbleRandomBuffRow*))((::PBYTE)hIl2Cpp + OFDLDALIDDN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLDALIDDN_ONSELECT_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Single a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + OFDLDALIDDN_NJOBMENFBFJ_OFFSET))(this, a1, a2);
		}

		::System::UInt32 get_TechId()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLDALIDDN_GET_TECHID_OFFSET))(this);
		}

		::System::Void set_TechId(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OFDLDALIDDN_SET_TECHID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsSelected()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLDALIDDN_GET_ISSELECTED_OFFSET))(this);
		}

		::System::Void set_IsSelected(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFDLDALIDDN_SET_ISSELECTED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OFDLDALIDDN_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OFDLDALIDDN_SET_ISACTIVE_OFFSET))(this, a1);
		}

	};
