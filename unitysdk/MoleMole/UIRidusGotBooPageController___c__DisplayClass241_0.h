#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IMNGAOGPIAA.h"
#include "unitysdk/NMGGOIGIABA.h"
#include "unitysdk/System/Object.h"

class CFPJKCLFEHC;
class ENDGACKJLGP;
namespace MoleMole { class RidusGotBooSkillEx; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__CTOR_OFFSET UNITYSDK_OFFSET(0x179ABE90)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__GENERATESIMPLESKILLDATA_B__0_OFFSET UNITYSDK_OFFSET(0x179ABEA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController___c__DisplayClass241_0_TypeDefinitionIndex = 45852;

	class UIRidusGotBooPageController___c__DisplayClass241_0 : public ::System::Object
	{
	public:
		::System::Func_2<::CFPJKCLFEHC*, ::System::String*>* getColorFunc; // 0x10
		::NMGGOIGIABA skillType; // 0x18
		::IMNGAOGPIAA qteResult; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__CTOR_OFFSET))(this);
		}

		::MoleMole::RidusGotBooSkillEx* _GenerateSimpleSkillData_b__0(::ENDGACKJLGP* x)
		{
			return ((::MoleMole::RidusGotBooSkillEx*(*)(::PVOID, ::ENDGACKJLGP*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER___C__DISPLAYCLASS241_0__GENERATESIMPLESKILLDATA_B__0_OFFSET))(this, x);
		}
	};
}
