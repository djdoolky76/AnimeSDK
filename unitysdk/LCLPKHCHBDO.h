#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class JCMDOLKLKEL;
class PGENPMICILM;
class POKKCEHMFMJ;
namespace RPG::AvatarSystem { class AvatarPath; }

#define LCLPKHCHBDO_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBEAB560)
#define LCLPKHCHBDO_CTOR_OFFSET UNITYSDK_OFFSET(0xBEAB4D0)

inline static constexpr unsigned int LCLPKHCHBDO_TypeDefinitionIndex = 64037;

	class LCLPKHCHBDO : public ::System::Object
	{
	public:
		::JCMDOLKLKEL* ONGDFCGGFDM; // 0x10
		::POKKCEHMFMJ* LBNAGLIGKIO; // 0x18
		::System::Void _ctor(::JCMDOLKLKEL* a1, ::POKKCEHMFMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCMDOLKLKEL*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + LCLPKHCHBDO_CTOR_OFFSET))(this, a1, a2);
		}

		::PGENPMICILM* BPLPBPMEODA(::AHHNGJGLOKA a1, ::RPG::AvatarSystem::AvatarPath* a2)
		{
			return ((::PGENPMICILM*(*)(::PVOID, ::AHHNGJGLOKA, ::RPG::AvatarSystem::AvatarPath*))((::PBYTE)hIl2Cpp + LCLPKHCHBDO_BPLPBPMEODA_OFFSET))(this, a1, a2);
		}

	};
