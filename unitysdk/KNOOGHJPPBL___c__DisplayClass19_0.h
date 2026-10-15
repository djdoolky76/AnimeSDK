#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/System/Object.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace System { template <typename T> class Predicate_1; }

#define KNOOGHJPPBL___C__DISPLAYCLASS19_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB58B530)
#define KNOOGHJPPBL___C__DISPLAYCLASS19_0__FILLSPECIFICPATHAVATARSBYROLETO_B__0_OFFSET UNITYSDK_OFFSET(0xB58B650)

	class KNOOGHJPPBL___c__DisplayClass19_0 : public ::System::Object
	{
	public:
		::System::Predicate_1<::RPG::AvatarSystem::IAvatar*>* __9__0; // 0x10
		::DNFDBKCPBNM roleIdentifier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KNOOGHJPPBL___C__DISPLAYCLASS19_0_CTOR_OFFSET))(this);
		}

		::System::Boolean _FillSpecificPathAvatarsByRoleTo_b__0(::RPG::AvatarSystem::IAvatar* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + KNOOGHJPPBL___C__DISPLAYCLASS19_0__FILLSPECIFICPATHAVATARSBYROLETO_B__0_OFFSET))(this, a1);
		}

	};
