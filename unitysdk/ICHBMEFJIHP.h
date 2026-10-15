#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class SpecialAvatarRow; }

#define ICHBMEFJIHP_CTOR_OFFSET UNITYSDK_OFFSET(0x15E4E2A0)
#define ICHBMEFJIHP_JPCDOHJACOI_OFFSET UNITYSDK_OFFSET(0x15E4E200)

inline static constexpr unsigned int ICHBMEFJIHP_TypeDefinitionIndex = 62656;

	class ICHBMEFJIHP : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICHBMEFJIHP_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::SpecialAvatarRow* JPCDOHJACOI(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::RPG::GameCore::SpecialAvatarRow*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ICHBMEFJIHP_JPCDOHJACOI_OFFSET))(this, a1, a2);
		}

	};
