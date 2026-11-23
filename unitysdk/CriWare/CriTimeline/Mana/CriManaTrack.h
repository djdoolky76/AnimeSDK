#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Guid.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"
#include "unitysdk/FA1EDF0909FD0302/AE42330449B9EF25.h"
#include "unitysdk/FA1EDF0909FD0302/ED10F6CA1871D5DB.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }

#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_AB36E0EE549986E5_OFFSET UNITYSDK_OFFSET(0x2AB0010)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_EF0160F5FC63B26D_OFFSET UNITYSDK_OFFSET(0x2AAF8E0)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_F4550AFE0DB1B743_OFFSET UNITYSDK_OFFSET(0x2AB0060)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x2AB0440)
#define CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB04C0)

namespace CriWare::CriTimeline::Mana
{
	inline static constexpr unsigned int CriManaTrack_TypeDefinitionIndex = 19117;

	class CriManaTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>** StaticGet_ABA19EE4DCDD2B8C()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Guid>**)Il2CppClass::FromTypeDefinitionIndex(CriManaTrack_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		::System::Boolean frameSync; // 0xA0
		::System::Boolean checkPosWithinClip; // 0xA1
		::System::Byte _padding0[0x2];
		::System::Guid guid; // 0xA4

		::System::Void AB36E0EE549986E5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_AB36E0EE549986E5_OFFSET))(this);
		}

		static ::System::Void F4550AFE0DB1B743(::CriWare::CriTimeline::Mana::CriManaTrack* BCF40076C09423AF)
		{
			return ((::System::Void(*)(::CriWare::CriTimeline::Mana::CriManaTrack*))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_F4550AFE0DB1B743_OFFSET))(BCF40076C09423AF);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK__CTOR_OFFSET))(this);
		}

		::FA1EDF0909FD0302::AE42330449B9EF25 EF0160F5FC63B26D(::FA1EDF0909FD0302::ED10F6CA1871D5DB FF3BC15A84BE456D, ::UnityEngine::GameObject* AD1247287D2D9217, ::System::Int32 E0526D776D4634F5)
		{
			return ((::FA1EDF0909FD0302::AE42330449B9EF25(*)(::PVOID, ::FA1EDF0909FD0302::ED10F6CA1871D5DB, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CRIWARE_CRITIMELINE_MANA_CRIMANATRACK_EF0160F5FC63B26D_OFFSET))(this, FF3BC15A84BE456D, AD1247287D2D9217, E0526D776D4634F5);
		}
	};
}
