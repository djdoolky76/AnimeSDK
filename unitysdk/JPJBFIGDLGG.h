#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MockAnimator.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

#define JPJBFIGDLGG_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C4980)
#define JPJBFIGDLGG_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB2C4930)

inline static constexpr unsigned int JPJBFIGDLGG_TypeDefinitionIndex = 76507;

	class JPJBFIGDLGG : public ::RPG::Client::MockAnimator
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPJBFIGDLGG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint KFGJEKJHIMB(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JPJBFIGDLGG_KFGJEKJHIMB_OFFSET))(this, a1);
		}

	};
