#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JAIGIPGEHBL;
class NPPNOGNDFMJ;
namespace RPG::GameCore { class TemporarySubStageConfig; }
namespace System { class IDisposable; }

#define NPPNOGNDFMJ___C__DISPLAYCLASS83_0_CTOR_OFFSET UNITYSDK_OFFSET(0xC60D080)
#define NPPNOGNDFMJ___C__DISPLAYCLASS83_0___APPLYSCENERESOURCES_B__0_OFFSET UNITYSDK_OFFSET(0xC611CF0)
#define NPPNOGNDFMJ___C__DISPLAYCLASS83_0___APPLYSCENERESOURCES_B__1_OFFSET UNITYSDK_OFFSET(0xC611D30)

inline static constexpr unsigned int NPPNOGNDFMJ___c__DisplayClass83_0_TypeDefinitionIndex = 61886;

	class NPPNOGNDFMJ___c__DisplayClass83_0 : public ::System::Object
	{
	public:
		::JAIGIPGEHBL* legacy; // 0x10
		::RPG::GameCore::TemporarySubStageConfig* temporarySubStage; // 0x18
		::System::IDisposable* temporaryOwnership; // 0x20
		::NPPNOGNDFMJ* __4__this; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS83_0_CTOR_OFFSET))(this);
		}

		::System::Void __ApplySceneResources_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS83_0___APPLYSCENERESOURCES_B__0_OFFSET))(this);
		}

		::System::Void __ApplySceneResources_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ___C__DISPLAYCLASS83_0___APPLYSCENERESOURCES_B__1_OFFSET))(this);
		}

	};
