#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E3850DE56028A1AB.h"
#include "unitysdk/E68AA4EB51923C98/A61075C6590762E5.h"

namespace ABC::Common::Timeline::Unity { class MonoUnityTimelineTrackActiveByPlayer; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define E93D78D5EA808A12_E14705E9AD50B0FF_OFFSET UNITYSDK_OFFSET(0x22A6290)
#define E93D78D5EA808A12_E85D0271078D83F5_OFFSET UNITYSDK_OFFSET(0x22A6380)
#define E93D78D5EA808A12_EFD675D14705279F_OFFSET UNITYSDK_OFFSET(0x22A6620)
#define E93D78D5EA808A12_F9BCDDB5FEA006BC_OFFSET UNITYSDK_OFFSET(0x22A61F0)
#define E93D78D5EA808A12_FD47D67BD410D2EE_OFFSET UNITYSDK_OFFSET(0x22A6510)
#define E93D78D5EA808A12__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int E93D78D5EA808A12_TypeDefinitionIndex = 7077;

class E93D78D5EA808A12 : public ::E3850DE56028A1AB
{
public:
	::UnityEngine::Playables::PlayableDirector* E04C1ADABB06A358; // 0x18

	::System::Void E85D0271078D83F5()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E93D78D5EA808A12_E85D0271078D83F5_OFFSET))(this);
	}

	::ABC::Common::Timeline::Unity::MonoUnityTimelineTrackActiveByPlayer* EFD675D14705279F()
	{
		return ((::ABC::Common::Timeline::Unity::MonoUnityTimelineTrackActiveByPlayer*(*)(::PVOID))((::PBYTE)hIl2Cpp + E93D78D5EA808A12_EFD675D14705279F_OFFSET))(this);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E93D78D5EA808A12__CTOR_OFFSET))(this);
	}

	::System::Void F9BCDDB5FEA006BC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E93D78D5EA808A12_F9BCDDB5FEA006BC_OFFSET))(this);
	}

	::System::Boolean FD47D67BD410D2EE(::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>* E342C6021260A1EB, ::System::Boolean E18BE0BAB1EAE4AB)
	{
		return ((::System::Boolean(*)(::PVOID, ::Il2CppArray<::UnityEngine::Timeline::TrackAsset*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + E93D78D5EA808A12_FD47D67BD410D2EE_OFFSET))(this, E342C6021260A1EB, E18BE0BAB1EAE4AB);
	}

	::System::Boolean E14705E9AD50B0FF(::E68AA4EB51923C98::A61075C6590762E5 AEE5FA65FEBEAC5A)
	{
		return ((::System::Boolean(*)(::PVOID, ::E68AA4EB51923C98::A61075C6590762E5))((::PBYTE)hIl2Cpp + E93D78D5EA808A12_E14705E9AD50B0FF_OFFSET))(this, AEE5FA65FEBEAC5A);
	}
};
