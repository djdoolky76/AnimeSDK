#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHEFENOJHLH;
class AJHEFPNNKKC;
class HHGEPOFOLMB;
class JAANHJGOINJ;
class LDPNIKPGDOO;
namespace RPG::AvatarSystem { class Avatar; }

#define KMFHBNCPDOE_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBD9E690)
#define KMFHBNCPDOE_CTOR_OFFSET UNITYSDK_OFFSET(0xBD9E570)
#define KMFHBNCPDOE_DHEOAMBKNMM_OFFSET UNITYSDK_OFFSET(0xBD9E910)

inline static constexpr unsigned int KMFHBNCPDOE_TypeDefinitionIndex = 64124;

	class KMFHBNCPDOE : public ::System::Object
	{
	public:
		::AJHEFPNNKKC* MOHKEEEHFOB; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::LDPNIKPGDOO* a1, ::AJHEFPNNKKC* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LDPNIKPGDOO*, ::AJHEFPNNKKC*))((::PBYTE)hIl2Cpp + KMFHBNCPDOE_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Avatar* BPLPBPMEODA(::HHGEPOFOLMB* a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::HHGEPOFOLMB*))((::PBYTE)hIl2Cpp + KMFHBNCPDOE_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::AHHNGJGLOKA DHEOAMBKNMM(::System::UInt32 a1)
		{
			return ((::AHHNGJGLOKA(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KMFHBNCPDOE_DHEOAMBKNMM_OFFSET))(this, a1);
		}

	};
