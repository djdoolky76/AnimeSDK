#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PJODNGFAAOK;
namespace System { class String; }

#define PJODNGFAAOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xC29E300)
#define PJODNGFAAOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC29E390)
#define PJODNGFAAOK_GET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC29E3A0)
#define PJODNGFAAOK_GET_REWARDICONPATH_OFFSET UNITYSDK_OFFSET(0xC29E3C0)
#define PJODNGFAAOK_SET_REWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xC29E3B0)
#define PJODNGFAAOK_SET_REWARDICONPATH_OFFSET UNITYSDK_OFFSET(0xC29E3D0)

inline static constexpr unsigned int PJODNGFAAOK_TypeDefinitionIndex = 79262;

	class PJODNGFAAOK : public ::System::Object
	{
	public:
		::System::String* _RewardIconPath_k__BackingField; // 0x10
		::System::UInt32 _RewardCount_k__BackingField; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJODNGFAAOK_CTOR_OFFSET))(this);
		}

		static ::PJODNGFAAOK* BPLPBPMEODA(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::PJODNGFAAOK*(*)(::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + PJODNGFAAOK_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		::System::UInt32 get_RewardCount()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJODNGFAAOK_GET_REWARDCOUNT_OFFSET))(this);
		}

		::System::Void set_RewardCount(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PJODNGFAAOK_SET_REWARDCOUNT_OFFSET))(this, a1);
		}

		::System::String* get_RewardIconPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJODNGFAAOK_GET_REWARDICONPATH_OFFSET))(this);
		}

		::System::Void set_RewardIconPath(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + PJODNGFAAOK_SET_REWARDICONPATH_OFFSET))(this, a1);
		}

	};
