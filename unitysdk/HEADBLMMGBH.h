#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/AIMoveTargetType.h"
#include "unitysdk/MoleMole/AITargetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }

#define HEADBLMMGBH_EGBBELILNLK_OFFSET UNITYSDK_OFFSET(0x19E056F0)
#define HEADBLMMGBH_EMNDAHHHONK_OFFSET UNITYSDK_OFFSET(0x19E05790)
#define HEADBLMMGBH_HPPPAPKACPD_OFFSET UNITYSDK_OFFSET(0x19E06750)
#define HEADBLMMGBH_JKIGIMEPMKM_OFFSET UNITYSDK_OFFSET(0x19E06AA0)
#define HEADBLMMGBH_LCIMHNJNBFJ_OFFSET UNITYSDK_OFFSET(0x19E05360)

inline static constexpr unsigned int HEADBLMMGBH_TypeDefinitionIndex = 54971;

class HEADBLMMGBH : public ::System::Object
{
public:
	static ::System::Boolean LCIMHNJNBFJ(::MoleMole::Battle::Entity* BFDPPMDEOFF, ::System::String* FCJEJELCHIB, ::UnityEngine::Vector3& IACKHFCLPJI, ::UnityEngine::Quaternion& DAFDMLMACJK)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HEADBLMMGBH_LCIMHNJNBFJ_OFFSET))(BFDPPMDEOFF, FCJEJELCHIB, IACKHFCLPJI, DAFDMLMACJK);
	}

	static ::System::Void EGBBELILNLK(::MoleMole::EntityHandle KECKGDFIALJ, ::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle, ::System::Boolean))((::PBYTE)hIl2Cpp + HEADBLMMGBH_EGBBELILNLK_OFFSET))(KECKGDFIALJ, EGEGIMGMJHN);
	}

	static ::UnityEngine::Vector3 EMNDAHHHONK(::MoleMole::Battle::Entity* CBCNBLOFPLO, ::MoleMole::AIMoveTargetType CLGFKHNFHKB, ::System::Boolean& IGAAKDOIPNN, ::System::String* DHJMCKFKENB, ::System::String* FPBNHPCLHMI, ::System::String* JAFCHKDKNFL)
	{
		return ((::UnityEngine::Vector3(*)(::MoleMole::Battle::Entity*, ::MoleMole::AIMoveTargetType, ::System::Boolean&, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + HEADBLMMGBH_EMNDAHHHONK_OFFSET))(CBCNBLOFPLO, CLGFKHNFHKB, IGAAKDOIPNN, DHJMCKFKENB, FPBNHPCLHMI, JAFCHKDKNFL);
	}

	static ::MoleMole::Battle::Entity* HPPPAPKACPD(::MoleMole::Battle::Entity* BFDPPMDEOFF, ::MoleMole::AITargetType CLGFKHNFHKB, ::System::String* ACPIJDKDMPK)
	{
		return ((::MoleMole::Battle::Entity*(*)(::MoleMole::Battle::Entity*, ::MoleMole::AITargetType, ::System::String*))((::PBYTE)hIl2Cpp + HEADBLMMGBH_HPPPAPKACPD_OFFSET))(BFDPPMDEOFF, CLGFKHNFHKB, ACPIJDKDMPK);
	}

	static ::System::Boolean JKIGIMEPMKM(::System::String* LDNCOBBIBHM, ::UnityEngine::Vector3& IACKHFCLPJI, ::UnityEngine::Quaternion& DAFDMLMACJK)
	{
		return ((::System::Boolean(*)(::System::String*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&))((::PBYTE)hIl2Cpp + HEADBLMMGBH_JKIGIMEPMKM_OFFSET))(LDNCOBBIBHM, IACKHFCLPJI, DAFDMLMACJK);
	}
};
