#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/EntityBodySize.h"
#include "unitysdk/System/Object.h"

class DIAEPBNFKBO;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x131DAFC0)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CTOR_OFFSET UNITYSDK_OFFSET(0x131DB000)
#define MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__GETENTITYBODYSIZE_B__3_0_OFFSET UNITYSDK_OFFSET(0x131DB010)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CameraStoryDataActiveCondition___c_TypeDefinitionIndex = 51392;

	class CameraStoryDataActiveCondition___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DIAEPBNFKBO*, ::MoleMole::Battle::EntityBodySize>** StaticGet___9__3_0()
		{
			return (::System::Func_2<::DIAEPBNFKBO*, ::MoleMole::Battle::EntityBodySize>**)Il2CppClass::FromTypeDefinitionIndex(CameraStoryDataActiveCondition___c_TypeDefinitionIndex)->GetStaticField(0x4C080);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(CameraStoryDataActiveCondition___c_TypeDefinitionIndex)->GetStaticField(0x4C088);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__CTOR_OFFSET))(this);
		}

		::MoleMole::Battle::EntityBodySize _GetEntityBodySize_b__3_0(::DIAEPBNFKBO* comp)
		{
			return ((::MoleMole::Battle::EntityBodySize(*)(::PVOID, ::DIAEPBNFKBO*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASTORYDATAACTIVECONDITION___C__GETENTITYBODYSIZE_B__3_0_OFFSET))(this, comp);
		}
	};
}
