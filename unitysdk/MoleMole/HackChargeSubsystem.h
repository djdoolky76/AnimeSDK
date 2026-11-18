#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BMCBFPPHGIF.h"
#include "unitysdk/LDLKJEBLIHH.h"
#include "unitysdk/MoleMole/EntityHandle.h"

class IMKLCBAMEOK;
class PGHGKNPCOFL;
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_HACKCHARGESUBSYSTEM_ENTERRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1A8F9350)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_EXITRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1A8F93B0)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_GETCHARGELINE_OFFSET UNITYSDK_OFFSET(0x1A8F8E10)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_GET_ISRANGECHARGEMODE_OFFSET UNITYSDK_OFFSET(0x1A8F9330)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8F8F90)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERCHARGELINE_OFFSET UNITYSDK_OFFSET(0x1A8F8B10)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERRANGECHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8F9170)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERCHARGELINE_OFFSET UNITYSDK_OFFSET(0x1A8F8C00)
#define MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERRANGECHARGEEFFECT_OFFSET UNITYSDK_OFFSET(0x1A8F9260)
#define MOLEMOLE_HACKCHARGESUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A8F9410)
#define MOLEMOLE_HACKCHARGESUBSYSTEM___BASE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1A8F9510)

namespace MoleMole
{
	inline static constexpr unsigned int HackChargeSubsystem_TypeDefinitionIndex = 92642;

	class HackChargeSubsystem
	{
	public:
		::System::Collections::Generic::List_1<::PGHGKNPCOFL*>* RangeChargeEffects; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* _rangeChargeSources; // 0x18
		::System::Collections::Generic::List_1<::IMKLCBAMEOK*>* Effects; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM__CTOR_OFFSET))(this);
		}

		::BMCBFPPHGIF RegisterChargeLine(::MoleMole::EntityHandle source, ::MoleMole::EntityHandle target)
		{
			return ((::BMCBFPPHGIF(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERCHARGELINE_OFFSET))(this, source, target);
		}

		::System::Void UnregisterChargeLine(::BMCBFPPHGIF handle)
		{
			return ((::System::Void(*)(::PVOID, ::BMCBFPPHGIF))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERCHARGELINE_OFFSET))(this, handle);
		}

		::IMKLCBAMEOK* GetChargeLine(::BMCBFPPHGIF handle)
		{
			return ((::IMKLCBAMEOK*(*)(::PVOID, ::BMCBFPPHGIF))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_GETCHARGELINE_OFFSET))(this, handle);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_ONUPDATE_OFFSET))(this);
		}

		::LDLKJEBLIHH RegisterRangeChargeEffect(::MoleMole::EntityHandle source, ::MoleMole::EntityHandle target)
		{
			return ((::LDLKJEBLIHH(*)(::PVOID, ::MoleMole::EntityHandle, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_REGISTERRANGECHARGEEFFECT_OFFSET))(this, source, target);
		}

		::System::Void UnregisterRangeChargeEffect(::LDLKJEBLIHH handle)
		{
			return ((::System::Void(*)(::PVOID, ::LDLKJEBLIHH))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_UNREGISTERRANGECHARGEEFFECT_OFFSET))(this, handle);
		}

		::System::Boolean get_IsRangeChargeMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_GET_ISRANGECHARGEMODE_OFFSET))(this);
		}

		::System::Void EnterRangeChargeMode(::System::UInt32 sourceEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_ENTERRANGECHARGEMODE_OFFSET))(this, sourceEntityId);
		}

		::System::Void ExitRangeChargeMode(::System::UInt32 sourceEntityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM_EXITRANGECHARGEMODE_OFFSET))(this, sourceEntityId);
		}

		::System::Void __base_OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HACKCHARGESUBSYSTEM___BASE_ONUPDATE_OFFSET))(this);
		}
	};
}
