#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MCLHKGHFKLE.h"
#include "unitysdk/UnityEngine/Timeline/GroupTrack.h"
#include "unitysdk/UnityEngine/Color.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x162FC100)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET UNITYSDK_OFFSET(0x162FC0C0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_KJEIKFDIOEJ_OFFSET UNITYSDK_OFFSET(0x162FC490)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_NNFPJJCIFOM_OFFSET UNITYSDK_OFFSET(0x162FC480)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x162FC2E0)
#define MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x162FC280)

namespace MoleMole::Timeline::ZNet
{
	inline static constexpr unsigned int ZNetGroupTrack_TypeDefinitionIndex = 90770;

	class ZNetGroupTrack : public ::UnityEngine::Timeline::GroupTrack
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::MCLHKGHFKLE, ::UnityEngine::Color>** StaticGet_s_GroupTypeToTrackColor()
		{
			return (::System::Collections::Generic::Dictionary_2<::MCLHKGHFKLE, ::UnityEngine::Color>**)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x46D20);
		}
		static ::UnityEngine::Color* StaticGet_s_DefaultColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x105F0);
		}
		static ::UnityEngine::Color* StaticGet_s_DynamicAttachColor()
		{
			return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ZNetGroupTrack_TypeDefinitionIndex)->GetStaticField(0x10600);
		}
		::MCLHKGHFKLE groupTrackType; // 0xB0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK__CCTOR_OFFSET))();
		}

		::System::Boolean HasCustomColor()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_HASCUSTOMCOLOR_OFFSET))(this);
		}

		::UnityEngine::Color GetCustomColor()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_GETCUSTOMCOLOR_OFFSET))(this);
		}

		::System::Boolean NNFPJJCIFOM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_NNFPJJCIFOM_OFFSET))(this);
		}

		::UnityEngine::Color KJEIKFDIOEJ()
		{
			return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_ZNET_ZNETGROUPTRACK_KJEIKFDIOEJ_OFFSET))(this);
		}
	};
}
