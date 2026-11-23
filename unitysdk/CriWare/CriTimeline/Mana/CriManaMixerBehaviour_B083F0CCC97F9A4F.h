#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/B3DCB534F7BDD139.h"
#include "unitysdk/F6A9F6EF3F9E1297.h"
#include "unitysdk/System/ValueType.h"

class EC4DE502D90A864B;
namespace CriWare::CriTimeline::Mana { class CriManaClipBase; }
namespace CriWare::CriTimeline::Mana { class CriManaMixerBehaviour; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_B083F0CCC97F9A4F_A24002EAA8F1539A_OFFSET UNITYSDK_OFFSET(0x2053310)
#define CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_B083F0CCC97F9A4F_E6CAD58306FCDCB5_OFFSET UNITYSDK_OFFSET(0x2AB4780)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaMixerBehaviour_B083F0CCC97F9A4F_TypeDefinitionIndex = 19157;

	struct alignas(8) CriManaMixerBehaviour_B083F0CCC97F9A4F
	{
		::System::Int32 FEB3551B7D8B59C1; // 0x10
		::System::Byte _padding0[0x4];
		::F6A9F6EF3F9E1297 A1CA1C79468DC000; // 0x18
		::CriWare::CriTimeline::Mana::CriManaMixerBehaviour* A544919C800E2923; // 0x38
		::UnityEngine::Timeline::TimelineClip* B4CB5E1D620BC905; // 0x40
		::CriWare::CriTimeline::Mana::CriManaClipBase* AD43DEAB8304398A; // 0x48
		::System::Double A982324101AE60E4; // 0x50
		::System::Boolean BC3868166A18B4B9; // 0x58
		::System::Byte _padding1[0x7];
		::B3DCB534F7BDD139 A109FC4638F13DC1; // 0x60

		::System::Void E6CAD58306FCDCB5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_B083F0CCC97F9A4F_E6CAD58306FCDCB5_OFFSET))(this);
		}

		::System::Void A24002EAA8F1539A(::EC4DE502D90A864B* FF331EB1F030063C)
		{
			return ((::System::Void(*)(::PVOID, ::EC4DE502D90A864B*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANAMIXERBEHAVIOUR_B083F0CCC97F9A4F_A24002EAA8F1539A_OFFSET))(this, FF331EB1F030063C);
		}
	};
}
