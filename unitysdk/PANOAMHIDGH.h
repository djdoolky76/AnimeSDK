#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHEFENOJHLH;
class JAANHJGOINJ;
class KFDKOGMNCEL;
namespace RPG::AvatarSystem { class Avatar; }

#define PANOAMHIDGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFD8C00)
#define PANOAMHIDGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD8B20)
#define PANOAMHIDGH_LOHKOHFINJI_OFFSET UNITYSDK_OFFSET(0xBFD8D20)

	class PANOAMHIDGH : public ::System::Object
	{
	public:
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::System::Void _ctor(::KFDKOGMNCEL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFDKOGMNCEL*))((::PBYTE)hIl2Cpp + PANOAMHIDGH_CTOR_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + PANOAMHIDGH_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::RPG::AvatarSystem::Avatar* LOHKOHFINJI(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + PANOAMHIDGH_LOHKOHFINJI_OFFSET))(this, a1);
		}

	};
