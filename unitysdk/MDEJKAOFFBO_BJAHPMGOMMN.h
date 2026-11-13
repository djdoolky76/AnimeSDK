#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDEJKAOFFBO_AssemblySourceKind.h"
#include "unitysdk/RPG/GameCore/IngredientKind.h"
#include "unitysdk/System/Object.h"
class EAGPPDDBBIM;
class EKAFEAJMCPD;
class HLJNBBHKKMI;
namespace UnityEngine { class GameObject; }

#define MDEJKAOFFBO_BJAHPMGOMMN_CTOR_OFFSET UNITYSDK_OFFSET(0x183DB370)
#define MDEJKAOFFBO_BJAHPMGOMMN_DKBOCOFMMGN_OFFSET UNITYSDK_OFFSET(0x183DBA60)
#define MDEJKAOFFBO_BJAHPMGOMMN_ELCIEFMELFL_OFFSET UNITYSDK_OFFSET(0x183DBEC0)
#define MDEJKAOFFBO_BJAHPMGOMMN_FLCGNOOAMJG_OFFSET UNITYSDK_OFFSET(0x183DBFF0)
#define MDEJKAOFFBO_BJAHPMGOMMN_ODINOMPCBCC_OFFSET UNITYSDK_OFFSET(0x183DBB10)

inline static constexpr unsigned int MDEJKAOFFBO_BJAHPMGOMMN_TypeDefinitionIndex = 79879;

	class MDEJKAOFFBO_BJAHPMGOMMN : public ::System::Object
	{
	public:
		::HLJNBBHKKMI* PDENFEFCAGN; // 0x10
		::EAGPPDDBBIM* EFCOEOGMHPO; // 0x18
		::EKAFEAJMCPD* OJBNGHPNMPP; // 0x20
		::MDEJKAOFFBO_AssemblySourceKind HNPIFHAJIGI; // 0x28
		::RPG::GameCore::IngredientKind CMAOAKMIMLA; // 0x2C
		::System::Void _ctor(::HLJNBBHKKMI* a1, ::EAGPPDDBBIM* a2, ::RPG::GameCore::IngredientKind a3, ::MDEJKAOFFBO_AssemblySourceKind a4)
		{
			return ((::System::Void(*)(::PVOID, ::HLJNBBHKKMI*, ::EAGPPDDBBIM*, ::RPG::GameCore::IngredientKind, ::MDEJKAOFFBO_AssemblySourceKind))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_BJAHPMGOMMN_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean DKBOCOFMMGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_BJAHPMGOMMN_DKBOCOFMMGN_OFFSET))(this);
		}

		::System::Void ODINOMPCBCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_BJAHPMGOMMN_ODINOMPCBCC_OFFSET))(this);
		}

		::System::Void ELCIEFMELFL(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_BJAHPMGOMMN_ELCIEFMELFL_OFFSET))(this, a1);
		}

		::System::Void FLCGNOOAMJG(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MDEJKAOFFBO_BJAHPMGOMMN_FLCGNOOAMJG_OFFSET))(this, a1);
		}

	};
