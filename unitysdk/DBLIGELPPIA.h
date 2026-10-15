#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AHAODIJBKGG;
class AHEFENOJHLH;
class ICHBMEFJIHP;
class JAANHJGOINJ;
namespace RPG::AvatarSystem { class Avatar; }

#define DBLIGELPPIA_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xE228620)
#define DBLIGELPPIA_CTOR_OFFSET UNITYSDK_OFFSET(0xE228500)
#define DBLIGELPPIA_LGAHHFJDAJD_OFFSET UNITYSDK_OFFSET(0xE228720)

inline static constexpr unsigned int DBLIGELPPIA_TypeDefinitionIndex = 62822;

	class DBLIGELPPIA : public ::System::Object
	{
	public:
		::ICHBMEFJIHP* IIGOMJPLLBD; // 0x10
		::JAANHJGOINJ* LIOJKFIGGIJ; // 0x18
		::AHEFENOJHLH* EEFMDEHLLFI; // 0x20
		::System::Void _ctor(::ICHBMEFJIHP* a1, ::AHAODIJBKGG* a2)
		{
			return ((::System::Void(*)(::PVOID, ::ICHBMEFJIHP*, ::AHAODIJBKGG*))((::PBYTE)hIl2Cpp + DBLIGELPPIA_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::AvatarSystem::Avatar* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::RPG::AvatarSystem::Avatar*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + DBLIGELPPIA_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Void LGAHHFJDAJD(::AHHNGJGLOKA a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + DBLIGELPPIA_LGAHHFJDAJD_OFFSET))(this, a1);
		}

	};
