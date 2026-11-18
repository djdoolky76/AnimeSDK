#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEJBPGJPJN.h"
#include "unitysdk/MNAGAGOHIGH.h"

namespace MoleMole { class ZipLineSubSystem; }
namespace MoleMole { class ZipLineSubSystem_EnterPointModel; }
namespace MoleMole { class ZipLineSubSystem_MainState; }
template <typename T> class JIOLFCAGOFH_1;
template <typename T> class LJHFMILANJA_1;

#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYAVATAR_OFFSET UNITYSDK_OFFSET(0x120C1B30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYCURRENTAVATAR_OFFSET UNITYSDK_OFFSET(0x120C1B50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYEFFECTIVEUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1BF0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCELOCK_OFFSET UNITYSDK_OFFSET(0x120C1BD0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1BB0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x120C1B70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x120C1C10)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x120C1C30)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1B90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x120C1C50)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ISINZENKOV_OFFSET UNITYSDK_OFFSET(0x120C1C70)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0x120C1C90)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYAVATAR_OFFSET UNITYSDK_OFFSET(0x120C1B40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYCURRENTAVATAR_OFFSET UNITYSDK_OFFSET(0x120C1B60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYEFFECTIVEUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1C00)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCELOCK_OFFSET UNITYSDK_OFFSET(0x120C1BE0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCEUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1BC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET UNITYSDK_OFFSET(0x120C1B80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET UNITYSDK_OFFSET(0x120C1C20)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET UNITYSDK_OFFSET(0x120C1C40)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET UNITYSDK_OFFSET(0x120C1BA0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET UNITYSDK_OFFSET(0x120C1C60)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ISINZENKOV_OFFSET UNITYSDK_OFFSET(0x120C1C80)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET UNITYSDK_OFFSET(0x120C1960)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_0_OFFSET UNITYSDK_OFFSET(0x120C2020)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_2_OFFSET UNITYSDK_OFFSET(0x120C2340)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_3_OFFSET UNITYSDK_OFFSET(0x120C2570)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_4_OFFSET UNITYSDK_OFFSET(0x120C2810)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_5_OFFSET UNITYSDK_OFFSET(0x120C2BC0)
#define MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_6_OFFSET UNITYSDK_OFFSET(0x120C2D10)

namespace MoleMole
{
	inline static constexpr unsigned int ZipLineSubSystem_CommonSkill_TypeDefinitionIndex = 92014;

	class ZipLineSubSystem_CommonSkill : public ::JJEJBPGJPJN
	{
	public:
		::LJHFMILANJA_1<::System::Boolean>* _EnableFinal_k__BackingField; // 0x88
		::JIOLFCAGOFH_1<::System::Boolean>* _EnableByEffectiveUnlock_k__BackingField; // 0x90
		::LJHFMILANJA_1<::System::Boolean>* _EnableByAvatar_k__BackingField; // 0x98
		::JIOLFCAGOFH_1<::System::Boolean>* _EnableByUnlock_k__BackingField; // 0xA0
		::LJHFMILANJA_1<::System::Boolean>* _EnableByForceUnlock_k__BackingField; // 0xA8
		::MoleMole::ZipLineSubSystem* _ownerSubSystem; // 0xB0
		::LJHFMILANJA_1<::System::Boolean>* _EnableByCurrentAvatar_k__BackingField; // 0xB8
		::LJHFMILANJA_1<::System::Boolean>* _EnableByForceLock_k__BackingField; // 0xC0
		::JIOLFCAGOFH_1<::System::Boolean>* _EnableByNoBattle_k__BackingField; // 0xC8
		::JIOLFCAGOFH_1<::System::Boolean>* _EnableBySelf_k__BackingField; // 0xD0
		::JIOLFCAGOFH_1<::System::Boolean>* _EnableByGamePlay_k__BackingField; // 0xD8
		::MoleMole::ZipLineSubSystem_MainState* _mainState; // 0xE0
		::MoleMole::ZipLineSubSystem_EnterPointModel* _enterPoint; // 0xE8
		::LJHFMILANJA_1<::System::Boolean>* _IsInZenKov_k__BackingField; // 0xF0

		::System::Void _ctor(::MoleMole::ZipLineSubSystem* ownerSubSystem, ::MoleMole::ZipLineSubSystem_MainState* mainState, ::MoleMole::ZipLineSubSystem_EnterPointModel* enterPoint)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::ZipLineSubSystem*, ::MoleMole::ZipLineSubSystem_MainState*, ::MoleMole::ZipLineSubSystem_EnterPointModel*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__CTOR_OFFSET))(this, ownerSubSystem, mainState, enterPoint);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_EnableByAvatar()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYAVATAR_OFFSET))(this);
		}

		::System::Void set_EnableByAvatar(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYAVATAR_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_EnableByCurrentAvatar()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYCURRENTAVATAR_OFFSET))(this);
		}

		::System::Void set_EnableByCurrentAvatar(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYCURRENTAVATAR_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_EnableByGamePlay()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYGAMEPLAY_OFFSET))(this);
		}

		::System::Void set_EnableByGamePlay(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYGAMEPLAY_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_EnableByUnlock()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByUnlock(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYUNLOCK_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_EnableByForceUnlock()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCEUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByForceUnlock(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCEUNLOCK_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_EnableByForceLock()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYFORCELOCK_OFFSET))(this);
		}

		::System::Void set_EnableByForceLock(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYFORCELOCK_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_EnableByEffectiveUnlock()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYEFFECTIVEUNLOCK_OFFSET))(this);
		}

		::System::Void set_EnableByEffectiveUnlock(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYEFFECTIVEUNLOCK_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_EnableByNoBattle()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYNOBATTLE_OFFSET))(this);
		}

		::System::Void set_EnableByNoBattle(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYNOBATTLE_OFFSET))(this, value);
		}

		::JIOLFCAGOFH_1<::System::Boolean>* get_EnableBySelf()
		{
			return ((::JIOLFCAGOFH_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEBYSELF_OFFSET))(this);
		}

		::System::Void set_EnableBySelf(::JIOLFCAGOFH_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::JIOLFCAGOFH_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEBYSELF_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_EnableFinal()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ENABLEFINAL_OFFSET))(this);
		}

		::System::Void set_EnableFinal(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ENABLEFINAL_OFFSET))(this, value);
		}

		::LJHFMILANJA_1<::System::Boolean>* get_IsInZenKov()
		{
			return ((::LJHFMILANJA_1<::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_GET_ISINZENKOV_OFFSET))(this);
		}

		::System::Void set_IsInZenKov(::LJHFMILANJA_1<::System::Boolean>* value)
		{
			return ((::System::Void(*)(::PVOID, ::LJHFMILANJA_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_SET_ISINZENKOV_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__48_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_0_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__48_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_2_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__48_3()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_3_OFFSET))(this);
		}

		::System::Boolean _OnCreateProperty_b__48_4()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_4_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__48_5(::MNAGAGOHIGH& _)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_5_OFFSET))(this, _);
		}

		::System::Void _OnCreateProperty_b__48_6(::MNAGAGOHIGH& _)
		{
			return ((::System::Void(*)(::PVOID, ::MNAGAGOHIGH&))((::PBYTE)hIl2Cpp + MOLEMOLE_ZIPLINESUBSYSTEM_COMMONSKILL__ONCREATEPROPERTY_B__48_6_OFFSET))(this, _);
		}
	};
}
