#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GluttonyProgressLeaderType.h"

#define AJEEKBMHJIP_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC4880)
#define AJEEKBMHJIP_GET_CRAZYPOINT_OFFSET UNITYSDK_OFFSET(0x1DC48B0)
#define AJEEKBMHJIP_GET_ELATIONPOINT_OFFSET UNITYSDK_OFFSET(0x1DC48A0)
#define AJEEKBMHJIP_GET_ISSHOW_OFFSET UNITYSDK_OFFSET(0xC200)
#define AJEEKBMHJIP_GET_LEADER_OFFSET UNITYSDK_OFFSET(0x2C330)
#define AJEEKBMHJIP_GET_PROGRESS_OFFSET UNITYSDK_OFFSET(0x25E00)

inline static constexpr unsigned int AJEEKBMHJIP_TypeDefinitionIndex = 73750;

	struct alignas(4) AJEEKBMHJIP
	{
		::System::Boolean _IsShow_k__BackingField; // 0x10
		::System::Byte _padding0[0x7];
		::System::Double _ElationPoint_k__BackingField; // 0x18
		::System::Double _CrazyPoint_k__BackingField; // 0x20
		::System::Single _Progress_k__BackingField; // 0x28
		::RPG::GameCore::GluttonyProgressLeaderType _Leader_k__BackingField; // 0x2C
		::System::Void _ctor(::System::Boolean a1, ::System::Double a2, ::System::Double a3, ::System::Single a4, ::RPG::GameCore::GluttonyProgressLeaderType a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Double, ::System::Double, ::System::Single, ::RPG::GameCore::GluttonyProgressLeaderType))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean get_IsShow()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_GET_ISSHOW_OFFSET))(this);
		}

		::System::Double get_ElationPoint()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_GET_ELATIONPOINT_OFFSET))(this);
		}

		::System::Double get_CrazyPoint()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_GET_CRAZYPOINT_OFFSET))(this);
		}

		::System::Single get_Progress()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_GET_PROGRESS_OFFSET))(this);
		}

		::RPG::GameCore::GluttonyProgressLeaderType get_Leader()
		{
			return ((::RPG::GameCore::GluttonyProgressLeaderType(*)(::PVOID))((::PBYTE)hIl2Cpp + AJEEKBMHJIP_GET_LEADER_OFFSET))(this);
		}

	};
