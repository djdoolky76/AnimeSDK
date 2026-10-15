#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define DBENHLHHAJK_CTOR_OFFSET UNITYSDK_OFFSET(0xF17E0)

inline static constexpr unsigned int DBENHLHHAJK_TypeDefinitionIndex = 56964;

	struct alignas(8) DBENHLHHAJK
	{
		::RPG::GameCore::GameEntity* FCKCHPNEEKB; // 0x10
		::System::String* LLDLNGNKGKL; // 0x18
		::System::Boolean LJMFLOELCGF; // 0x20
		::System::Boolean OANOKPFOGIP; // 0x21
		::System::Byte _padding0[0x6];
		::System::Collections::Generic::Dictionary_2<::System::Single, ::System::Single>* NOOBGJEKLEG; // 0x28
		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + DBENHLHHAJK_CTOR_OFFSET))(this, a1);
		}

	};
