#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChimeraBattleActionType.h"
#include "unitysdk/System/Object.h"
class KDKHADGLIPJ;

#define NGMKEPADNEL_CTOR_OFFSET UNITYSDK_OFFSET(0xBBAF640)
#define NGMKEPADNEL_JIHPBLELIMG_OFFSET UNITYSDK_OFFSET(0xBBAF5E0)

inline static constexpr unsigned int NGMKEPADNEL_TypeDefinitionIndex = 75761;

	class NGMKEPADNEL : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGMKEPADNEL_CTOR_OFFSET))(this);
		}

		::System::Void JIHPBLELIMG(::RPG::GameCore::ChimeraBattleActionType a1, ::KDKHADGLIPJ* a2, ::KDKHADGLIPJ* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChimeraBattleActionType, ::KDKHADGLIPJ*, ::KDKHADGLIPJ*))((::PBYTE)hIl2Cpp + NGMKEPADNEL_JIHPBLELIMG_OFFSET))(this, a1, a2, a3);
		}

	};
