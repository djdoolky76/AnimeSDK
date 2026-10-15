#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/MVector3.h"
class PGACAEOGDHK;
namespace RPG::GameCore { class EntityMoveTrack; }
namespace RPG::GameCore { class EntityPosAdaptionConfig; }

#define CNDLPHKEIOI_CTOR_OFFSET UNITYSDK_OFFSET(0xDA432E0)
#define CNDLPHKEIOI_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA42DC0)
#define CNDLPHKEIOI_FKDGDFEHCHM_OFFSET UNITYSDK_OFFSET(0xDA42F40)
#define CNDLPHKEIOI_NGLLFBIBNKM_OFFSET UNITYSDK_OFFSET(0xDA42E00)
#define CNDLPHKEIOI_TICK_OFFSET UNITYSDK_OFFSET(0xDA43070)

inline static constexpr unsigned int CNDLPHKEIOI_TypeDefinitionIndex = 57442;

	class CNDLPHKEIOI : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::PGACAEOGDHK* NMDGJILDMLO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDLPHKEIOI_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNDLPHKEIOI_DISPOSE_OFFSET))(this);
		}

		::System::Void NGLLFBIBNKM(::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>* a1, ::System::Single a2, ::RPG::MVector3 a3, ::RPG::MVector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::RPG::GameCore::EntityMoveTrack*>*, ::System::Single, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + CNDLPHKEIOI_NGLLFBIBNKM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void FKDGDFEHCHM(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::GameCore::EntityPosAdaptionConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::EntityPosAdaptionConfig*))((::PBYTE)hIl2Cpp + CNDLPHKEIOI_FKDGDFEHCHM_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNDLPHKEIOI_TICK_OFFSET))(this, a1);
		}

	};
