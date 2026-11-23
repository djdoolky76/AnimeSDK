#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDAD7F45EA9CF9E9/EE285593635B9C51.h"
#include "unitysdk/System/Runtime/InteropServices/FBADA98F49F82B7B.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace CriWare::CriMana { class MovieInfo; }
namespace CriWare::CriTimeline::Mana { class CriManaBehaviour; }
namespace System { class Object; }
namespace UnityEngine { class FAED0374422E783A; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_E5155A9E3C7876BF_OFFSET UNITYSDK_OFFSET(0x2AC1880)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_EC1FD85EE70643EC_OFFSET UNITYSDK_OFFSET(0x2AC1C30)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ECD27FBAB829F4D2_OFFSET UNITYSDK_OFFSET(0x2AC1A00)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_F99BD1D1A89F5412_OFFSET UNITYSDK_OFFSET(0x165D460)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FA652F21910DD8DC_OFFSET UNITYSDK_OFFSET(0x2AC1E50)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FCCCD8E0FCCC6059_OFFSET UNITYSDK_OFFSET(0x2AC16C0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FDB05D5B9A83132E_OFFSET UNITYSDK_OFFSET(0x2AC1E10)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FF476106875D7EEB_OFFSET UNITYSDK_OFFSET(0x2AC1790)
#define CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x2AC1D30)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaClipBase_TypeDefinitionIndex = 19191;

	class CriManaClipBase : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Guid guid; // 0x18
		::System::Boolean m_loopWithinClip; // 0x28
		::System::Boolean m_useOnMemoryPlayback; // 0x29
		::System::Byte _padding0[0x6];
		::System::Runtime::InteropServices::FBADA98F49F82B7B gcHandle; // 0x30
		::System::Double m_movieFrameRate; // 0x38
		::System::Double m_clipDuration; // 0x40
		::System::Single m_fadeinDuration; // 0x48
		::System::Byte _padding1[0x4];
		::UnityEngine::FAED0374422E783A* m_fadeinCurve; // 0x50
		::System::Single m_fadeoutDuration; // 0x58
		::System::Byte _padding2[0x4];
		::UnityEngine::FAED0374422E783A* m_fadeoutCurve; // 0x60
		::System::Boolean m_fadeAudio; // 0x68
		::System::Byte _padding3[0x7];
		::UnityEngine::Timeline::TimelineClip* m_clip; // 0x70
		::CriWare::CriTimeline::Mana::CriManaBehaviour* m_manaBehaviour; // 0x78
		::System::Nullable_1<::System::Object*> B92F334C6B51EDAB; // 0x80

		::System::Nullable_1<::System::Object*> EC1FD85EE70643EC(::CriWare::CriMana::MovieInfo* AB244CB2ACBFAAC7)
		{
			return ((::System::Nullable_1<::System::Object*>(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_EC1FD85EE70643EC_OFFSET))(this, AB244CB2ACBFAAC7);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE__CTOR_OFFSET))(this);
		}

		::System::Void ECD27FBAB829F4D2(::CriWare::CriMana::MovieInfo* AB244CB2ACBFAAC7)
		{
			return ((::System::Void(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_ECD27FBAB829F4D2_OFFSET))(this, AB244CB2ACBFAAC7);
		}

		::System::Double FA652F21910DD8DC()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FA652F21910DD8DC_OFFSET))(this);
		}

		::System::Int32 FF476106875D7EEB(::System::Double F56E41B57CCB7E20, ::System::Boolean AC9FD766496FDA83)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Boolean))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FF476106875D7EEB_OFFSET))(this, F56E41B57CCB7E20, AC9FD766496FDA83);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 FCCCD8E0FCCC6059(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* B31D2A0991A78809)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FCCCD8E0FCCC6059_OFFSET))(this, FF3BC15A84BE456D, B31D2A0991A78809);
		}

		::System::Boolean E5155A9E3C7876BF(::CriWare::CriMana::MovieInfo* AB244CB2ACBFAAC7)
		{
			return ((::System::Boolean(*)(::PVOID, ::CriWare::CriMana::MovieInfo*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_E5155A9E3C7876BF_OFFSET))(this, AB244CB2ACBFAAC7);
		}

		::System::Boolean FDB05D5B9A83132E()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_FDB05D5B9A83132E_OFFSET))(this);
		}

		::BDAD7F45EA9CF9E9::EE285593635B9C51 F99BD1D1A89F5412()
		{
			return ((::BDAD7F45EA9CF9E9::EE285593635B9C51(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANACLIPBASE_F99BD1D1A89F5412_OFFSET))(this);
		}
	};
}
