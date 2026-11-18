#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CKMMPOGHDFI.h"
#include "unitysdk/JOHNONOOOCH.h"
#include "unitysdk/MoleMole/VOPerformSubSystem_CurtainSetInfo.h"

class NLANCPLMPLB;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x120A7B50)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x120A7B90)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__71_0_OFFSET UNITYSDK_OFFSET(0x120A7BC0)
#define MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__36_0_OFFSET UNITYSDK_OFFSET(0x120A7BA0)

namespace MoleMole
{
	inline static constexpr unsigned int VOPerformSubSystem___c_TypeDefinitionIndex = 76204;

	class VOPerformSubSystem___c : public ::System::Object
	{
	public:
		static ::NLANCPLMPLB** StaticGet___9__71_0()
		{
			return (::NLANCPLMPLB**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x393D0);
		}
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__36_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x393D8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(VOPerformSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x393E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __RefreshBlackCurtain_b__36_0(::MoleMole::VOPerformSubSystem_CurtainSetInfo l, ::MoleMole::VOPerformSubSystem_CurtainSetInfo r)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::VOPerformSubSystem_CurtainSetInfo, ::MoleMole::VOPerformSubSystem_CurtainSetInfo))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___REFRESHBLACKCURTAIN_B__36_0_OFFSET))(this, l, r);
		}

		::JOHNONOOOCH __OperateNpcEntityNameByEntity_b__71_0(::CKMMPOGHDFI& target)
		{
			return ((::JOHNONOOOCH(*)(::PVOID, ::CKMMPOGHDFI&))((::PBYTE)hIl2Cpp + MOLEMOLE_VOPERFORMSUBSYSTEM___C___OPERATENPCENTITYNAMEBYENTITY_B__71_0_OFFSET))(this, target);
		}
	};
}
