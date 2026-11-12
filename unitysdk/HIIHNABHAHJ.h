#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

#define HIIHNABHAHJ_CTOR_OFFSET UNITYSDK_OFFSET(0x16C38C40)
#define HIIHNABHAHJ_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0x16C38C50)

inline static constexpr unsigned int HIIHNABHAHJ_TypeDefinitionIndex = 63946;

	class HIIHNABHAHJ : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint AIKAPJELHNK; // 0x10
		::System::Void _ctor(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HIIHNABHAHJ_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PKADDEPKJFN(::RPG::GameCore::FixPoint a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HIIHNABHAHJ_PKADDEPKJFN_OFFSET))(this, a1);
		}

	};
