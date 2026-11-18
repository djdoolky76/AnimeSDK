#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class FJIFILPGMCF;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT_BUILD_OFFSET UNITYSDK_OFFSET(0x179AC750)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x179AC6C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageControllerContext_TypeDefinitionIndex = 54651;

	class UIRidusGotBooPageControllerContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Collections::Generic::List_1<::FJIFILPGMCF*>* PassiveSkills; // 0x28
		::System::Int32 LevelID; // 0x30
		::System::Int32 ClothBuffRatio; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT__CTOR_OFFSET))(this);
		}

		::System::Void Build()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLERCONTEXT_BUILD_OFFSET))(this);
		}
	};
}
