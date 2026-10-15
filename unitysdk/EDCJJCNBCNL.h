#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Timeline { class GroupTrack; }
namespace UnityEngine::Timeline { class TrackAsset; }

#define EDCJJCNBCNL_CTOR_OFFSET UNITYSDK_OFFSET(0x1330ABC0)

inline static constexpr unsigned int EDCJJCNBCNL_TypeDefinitionIndex = 48519;

	class EDCJJCNBCNL : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* EOHCPMLDIFE; // 0x10
		::UnityEngine::Timeline::GroupTrack* HBBDNGBNCBM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EDCJJCNBCNL_CTOR_OFFSET))(this);
		}

	};
