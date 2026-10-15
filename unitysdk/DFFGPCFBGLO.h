#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GIDHOABFFFP;
class LOJIKMHLCBL;
class NNOALJAEMCG;
class OINNEGOFKAA;
namespace RPG::AvatarSystem { class IAvatar; }

#define DFFGPCFBGLO_CTOR_OFFSET UNITYSDK_OFFSET(0xE81C2C0)
#define DFFGPCFBGLO_LOHGNGKHMII_OFFSET UNITYSDK_OFFSET(0xE81C340)

inline static constexpr unsigned int DFFGPCFBGLO_TypeDefinitionIndex = 62543;

	class DFFGPCFBGLO : public ::System::Object
	{
	public:
		::GIDHOABFFFP* FAGBIGDLJGA; // 0x10
		::System::Void _ctor(::GIDHOABFFFP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GIDHOABFFFP*))((::PBYTE)hIl2Cpp + DFFGPCFBGLO_CTOR_OFFSET))(this, a1);
		}

		::NNOALJAEMCG* LOHGNGKHMII(::RPG::AvatarSystem::IAvatar* a1, ::OINNEGOFKAA* a2, ::LOJIKMHLCBL* a3)
		{
			return ((::NNOALJAEMCG*(*)(::PVOID, ::RPG::AvatarSystem::IAvatar*, ::OINNEGOFKAA*, ::LOJIKMHLCBL*))((::PBYTE)hIl2Cpp + DFFGPCFBGLO_LOHGNGKHMII_OFFSET))(this, a1, a2, a3);
		}

	};
