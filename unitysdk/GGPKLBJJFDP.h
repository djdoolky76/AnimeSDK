#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ENGKPGFGGLM;
namespace MoleMole { class UIWindowController; }
namespace MoleMole::Battle { class Entity; }
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define GGPKLBJJFDP_AIDBPDBDDIN_OFFSET UNITYSDK_OFFSET(0x16CC3840)
#define GGPKLBJJFDP_BBCLMNAOHFJ_OFFSET UNITYSDK_OFFSET(0x16CC2FE0)
#define GGPKLBJJFDP_FHFPEFMLLFH_OFFSET UNITYSDK_OFFSET(0x16CC3B20)
#define GGPKLBJJFDP_JHMDJMNGMPM_OFFSET UNITYSDK_OFFSET(0x16CC3640)
#define GGPKLBJJFDP_MMEIFBOBDOP_OFFSET UNITYSDK_OFFSET(0x16CC3470)
#define GGPKLBJJFDP__CTOR_OFFSET UNITYSDK_OFFSET(0x16CC2FD0)

inline static constexpr unsigned int GGPKLBJJFDP_TypeDefinitionIndex = 55707;

class GGPKLBJJFDP : public ::System::Object
{
public:
	::Nap::NapECS::EcsFilter* JDDGPFHBFJL; // 0x10
	::MoleMole::UIWindowController* FEFFFPGCIIO; // 0x18
	::System::Action_2<::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*>* PLGLKDMLBLE; // 0x20
	::Nap::NapECS::EcsWorld* NAEFJGAOJCB; // 0x28
	::System::Boolean CIFLENFEEGN; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPKLBJJFDP__CTOR_OFFSET))(this);
	}

	::System::Void BBCLMNAOHFJ(::MoleMole::UIWindowController* AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*))((::PBYTE)hIl2Cpp + GGPKLBJJFDP_BBCLMNAOHFJ_OFFSET))(this, AMNIHACKELI);
	}

	::System::Void JHMDJMNGMPM(::ENGKPGFGGLM* FFNKDGGHBPP, ::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::ENGKPGFGGLM*, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + GGPKLBJJFDP_JHMDJMNGMPM_OFFSET))(this, FFNKDGGHBPP, KECKGDFIALJ);
	}

	static ::System::Boolean AIDBPDBDDIN(::System::UInt32 HBFCDLLPFGK)
	{
		return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + GGPKLBJJFDP_AIDBPDBDDIN_OFFSET))(HBFCDLLPFGK);
	}

	static ::System::Boolean MMEIFBOBDOP()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + GGPKLBJJFDP_MMEIFBOBDOP_OFFSET))();
	}

	::System::Void FHFPEFMLLFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGPKLBJJFDP_FHFPEFMLLFH_OFFSET))(this);
	}
};
