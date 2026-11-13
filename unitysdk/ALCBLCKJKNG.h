#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BCILMJOBEAD.h"
#include "unitysdk/JJDFGMMMCMI.h"
namespace RPG::Client { class GridFightMoonGameSpotLightTraitEffect; }
namespace System::Collections::Generic { template <typename T> class IList_1; }

#define ALCBLCKJKNG_CTOR_OFFSET UNITYSDK_OFFSET(0x197B9A90)
#define ALCBLCKJKNG_ISCONCERNEDWITH_OFFSET UNITYSDK_OFFSET(0x197B9AE0)
#define ALCBLCKJKNG_UPDATEAFTER_OFFSET UNITYSDK_OFFSET(0x197B9DF0)
#define ALCBLCKJKNG_UPDATEBEFORE_OFFSET UNITYSDK_OFFSET(0x197B9D40)

inline static constexpr unsigned int ALCBLCKJKNG_TypeDefinitionIndex = 67213;

	class ALCBLCKJKNG : public ::BCILMJOBEAD
	{
	public:
		::RPG::Client::GridFightMoonGameSpotLightTraitEffect* LBNBPMIFDHI; // 0x18
		::System::Boolean JABNDDJCLCL; // 0x20
		::System::Void _ctor(::RPG::Client::GridFightMoonGameSpotLightTraitEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::GridFightMoonGameSpotLightTraitEffect*))((::PBYTE)hIl2Cpp + ALCBLCKJKNG_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean IsConcernedWith(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ALCBLCKJKNG_ISCONCERNEDWITH_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateBefore(::JJDFGMMMCMI a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + ALCBLCKJKNG_UPDATEBEFORE_OFFSET))(this, a1, a2);
		}

		::System::Void UpdateAfter(::JJDFGMMMCMI a1)
		{
			return ((::System::Void(*)(::PVOID, ::JJDFGMMMCMI))((::PBYTE)hIl2Cpp + ALCBLCKJKNG_UPDATEAFTER_OFFSET))(this, a1);
		}

	};
