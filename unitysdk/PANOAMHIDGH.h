#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHEFENOJHLH;
class JAANHJGOINJ;
class KFDKOGMNCEL;
namespace RPG::AvatarSystem { class Avatar; }

#define PANOAMHIDGH_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBFD1720)
#define PANOAMHIDGH_CTOR_OFFSET UNITYSDK_OFFSET(0xBFD1640)
#define PANOAMHIDGH_LOHKOHFINJI_OFFSET UNITYSDK_OFFSET(0xBFD1840)

inline static constexpr unsigned int PANOAMHIDGH_TypeDefinitionIndex = 62604;

	class PANOAMHIDGH : public ::System::Object
	{
	public:
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x10
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x18
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
