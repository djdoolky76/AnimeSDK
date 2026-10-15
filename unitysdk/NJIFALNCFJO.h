#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEKOLPNJKHF;
class LOJIKMHLCBL;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }

#define NJIFALNCFJO_CTOR_OFFSET UNITYSDK_OFFSET(0xBC104B0)
#define NJIFALNCFJO_OFCKIACAHCD_OFFSET UNITYSDK_OFFSET(0xBC10530)

	class NJIFALNCFJO : public ::System::Object
	{
	public:
		::HEKOLPNJKHF* PLCHDIFCFJJ; // 0x10
		::System::Void _ctor(::HEKOLPNJKHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HEKOLPNJKHF*))((::PBYTE)hIl2Cpp + NJIFALNCFJO_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::IAvatar* OFCKIACAHCD(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::RPG::AvatarSystem::IAvatar*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + NJIFALNCFJO_OFCKIACAHCD_OFFSET))(this, a1, a2, a3);
		}

	};
