#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGADBIMAEBK.h"
#include "unitysdk/JKHCGCJIMHC.h"
#include "unitysdk/UnityEngine/Vector3.h"

class EBBPEGLOENN;

#define MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_1_OFFSET UNITYSDK_OFFSET(0x19CF18A0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_OFFSET UNITYSDK_OFFSET(0x19CF1230)
#define MOLEMOLE_SURFLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET UNITYSDK_OFFSET(0x19CF1400)
#define MOLEMOLE_SURFLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET UNITYSDK_OFFSET(0x19CF0970)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDDRIFT_OFFSET UNITYSDK_OFFSET(0x19CF0ED0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDITEM_OFFSET UNITYSDK_OFFSET(0x19CF0F90)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDLEVEL_OFFSET UNITYSDK_OFFSET(0x19CF11C0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDSKILL_OFFSET UNITYSDK_OFFSET(0x19CF1150)
#define MOLEMOLE_SURFLOGSUBSYSTEM_RECORDTRIGGERTRAP_OFFSET UNITYSDK_OFFSET(0x19CF12F0)
#define MOLEMOLE_SURFLOGSUBSYSTEM_STARTSURF_OFFSET UNITYSDK_OFFSET(0x19CF0B90)
#define MOLEMOLE_SURFLOGSUBSYSTEM__CTOR_OFFSET UNITYSDK_OFFSET(0x19CF1960)

namespace MoleMole
{
	inline static constexpr unsigned int SurfLogSubsystem_TypeDefinitionIndex = 91232;

	class SurfLogSubsystem
	{
	public:
		::EBBPEGLOENN* _data; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetGeneralLevelID()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_GETGENERALLEVELID_OFFSET))();
		}

		::System::Void StartSurf()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_STARTSURF_OFFSET))(this);
		}

		::System::Void RecordDrift(::System::Int32 duration, ::System::Boolean hit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDDRIFT_OFFSET))(this, duration, hit);
		}

		::System::Int32 RecordItem(::System::Int32 itemId)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDITEM_OFFSET))(this, itemId);
		}

		::System::Void RecordSkill(::System::Int32 time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDSKILL_OFFSET))(this, time);
		}

		::System::Void RecordLevel(::JKHCGCJIMHC rank)
		{
			return ((::System::Void(*)(::PVOID, ::JKHCGCJIMHC))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDLEVEL_OFFSET))(this, rank);
		}

		::System::Void RecordTriggerTrap(::System::Int32 id, ::System::Int32 order, ::UnityEngine::Vector3 position)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_RECORDTRIGGERTRAP_OFFSET))(this, id, order, position);
		}

		::System::Void FinishAndSendRequest(::AGADBIMAEBK result)
		{
			return ((::System::Void(*)(::PVOID, ::AGADBIMAEBK))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_FINISHANDSENDREQUEST_OFFSET))(this, result);
		}

		static ::System::UInt32 Encode(::JKHCGCJIMHC rank)
		{
			return ((::System::UInt32(*)(::JKHCGCJIMHC))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_OFFSET))(rank);
		}

		static ::System::UInt32 Encode_1(::AGADBIMAEBK result)
		{
			return ((::System::UInt32(*)(::AGADBIMAEBK))((::PBYTE)hIl2Cpp + MOLEMOLE_SURFLOGSUBSYSTEM_ENCODE_1_OFFSET))(result);
		}
	};
}
