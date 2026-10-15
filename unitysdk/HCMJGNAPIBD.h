#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateLevelParamType.h"
#include "unitysdk/System/Object.h"
class IKCOHFPIHIA;

#define HCMJGNAPIBD_AOLKJHKOOMG_OFFSET UNITYSDK_OFFSET(0x15C283E0)
#define HCMJGNAPIBD_CTOR_OFFSET UNITYSDK_OFFSET(0x15C283D0)

inline static constexpr unsigned int HCMJGNAPIBD_TypeDefinitionIndex = 64033;

	class HCMJGNAPIBD : public ::System::Object
	{
	public:
		::IKCOHFPIHIA* JOIPPIKNILC; // 0x10
		::System::Void _ctor(::IKCOHFPIHIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IKCOHFPIHIA*))((::PBYTE)hIl2Cpp + HCMJGNAPIBD_CTOR_OFFSET))(this, a1);
		}

		::System::Double AOLKJHKOOMG(::RPG::GameCore::FateLevelParamType a1)
		{
			return ((::System::Double(*)(::PVOID, ::RPG::GameCore::FateLevelParamType))((::PBYTE)hIl2Cpp + HCMJGNAPIBD_AOLKJHKOOMG_OFFSET))(this, a1);
		}

	};
