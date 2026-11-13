#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DNFDBKCPBNM.h"
#include "unitysdk/OIPMNNAHIFP.h"
namespace RPG::AvatarSystem { class IAvatar; }
namespace RPG::Client { class AvatarProxy; }

#define LHHMHJIFHNE_AJKGDIPPKAM_OFFSET UNITYSDK_OFFSET(0x1BCC4FF0)
#define LHHMHJIFHNE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BCC50A0)
#define LHHMHJIFHNE_DNMAPFLFOMJ_OFFSET UNITYSDK_OFFSET(0x1BCC4E90)
#define LHHMHJIFHNE_MHGNGEKAPBP_OFFSET UNITYSDK_OFFSET(0x1BCC4F40)

inline static constexpr unsigned int LHHMHJIFHNE_TypeDefinitionIndex = 64008;

	class LHHMHJIFHNE : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHHMHJIFHNE_CTOR_OFFSET))(this);
		}

		::RPG::Client::AvatarProxy* DNMAPFLFOMJ(::OIPMNNAHIFP a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::OIPMNNAHIFP, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + LHHMHJIFHNE_DNMAPFLFOMJ_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AvatarProxy* MHGNGEKAPBP(::DNFDBKCPBNM a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::DNFDBKCPBNM, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + LHHMHJIFHNE_MHGNGEKAPBP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::AvatarProxy* AJKGDIPPKAM(::OIPMNNAHIFP a1, ::RPG::AvatarSystem::IAvatar* a2)
		{
			return ((::RPG::Client::AvatarProxy*(*)(::PVOID, ::OIPMNNAHIFP, ::RPG::AvatarSystem::IAvatar*))((::PBYTE)hIl2Cpp + LHHMHJIFHNE_AJKGDIPPKAM_OFFSET))(this, a1, a2);
		}

	};
