#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMPHOFHNBLH_FCINGOLPLJJ.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/EAvatarCameraShotType.h"
#include "unitysdk/JMPHOFHNBLH_IDCOJBODFGG.h"

class MHLKHHALPNI;
namespace MoleMole { class LevelSectionGroupData; }
namespace MoleMole::Battle { class Entity; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JMPHOFHNBLH_JNOGHGLKHGM_HBJFMFNDHDP_OFFSET UNITYSDK_OFFSET(0x13866A70)
#define JMPHOFHNBLH_JNOGHGLKHGM_MGPLFJFCOGD_OFFSET UNITYSDK_OFFSET(0x13866F90)
#define JMPHOFHNBLH_JNOGHGLKHGM__CTOR_OFFSET UNITYSDK_OFFSET(0x13866F20)

inline static constexpr unsigned int JMPHOFHNBLH_JNOGHGLKHGM_TypeDefinitionIndex = 73720;

class JMPHOFHNBLH_JNOGHGLKHGM : public ::JMPHOFHNBLH_FCINGOLPLJJ
{
public:
	::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType INPLCAIIEIK; // 0x78

	::System::Void _ctor(::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType INPLCAIIEIK, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* HPMOAJJCKJP, ::JMPHOFHNBLH_IDCOJBODFGG AKBKOANLPHF, ::System::Boolean BPIDIHCFIPC, ::System::Boolean IOOJHMNCDGK, ::System::Boolean MEBCMLBBKKA, ::MoleMole::LevelSectionGroupData* JAKLOPKADNM, ::MHLKHHALPNI* HINEJHJDICB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::FlowCanvas::Nodes::EAvatarCameraShotType, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*, ::JMPHOFHNBLH_IDCOJBODFGG, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::MoleMole::LevelSectionGroupData*, ::MHLKHHALPNI*))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_JNOGHGLKHGM__CTOR_OFFSET))(this, INPLCAIIEIK, HPMOAJJCKJP, AKBKOANLPHF, BPIDIHCFIPC, IOOJHMNCDGK, MEBCMLBBKKA, JAKLOPKADNM, HINEJHJDICB);
	}

	::System::Void HBJFMFNDHDP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_JNOGHGLKHGM_HBJFMFNDHDP_OFFSET))(this);
	}

	::System::Void MGPLFJFCOGD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMPHOFHNBLH_JNOGHGLKHGM_MGPLFJFCOGD_OFFSET))(this);
	}
};
