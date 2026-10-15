#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LGCDLLEHBLG;
class LOJIKMHLCBL;
class MFKPILFCGMB;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class ChallengeSnapshotAvatarProxy; }

#define MPFGFAPFGID_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA3D500)
#define MPFGFAPFGID_CTOR_OFFSET UNITYSDK_OFFSET(0xBA3D450)

	class MPFGFAPFGID : public ::System::Object
	{
	public:
		::MFKPILFCGMB* HAMOPOPMANJ; // 0x10
		::LGCDLLEHBLG* ACCBKLPMHDH; // 0x18
		::System::Void _ctor(::LGCDLLEHBLG* a1, ::MFKPILFCGMB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::LGCDLLEHBLG*, ::MFKPILFCGMB*))((::PBYTE)hIl2Cpp + MPFGFAPFGID_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::ChallengeSnapshotAvatarProxy* BPLPBPMEODA(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::RPG::Client::ChallengeSnapshotAvatarProxy*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + MPFGFAPFGID_BPLPBPMEODA_OFFSET))(this, a1, a2, a3);
		}

	};
