#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170DE4A0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170DE4E0)
#define MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C___CTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x170DE4F0)

namespace MoleMole
{
	inline static constexpr unsigned int ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex = 80947;

	class ZenkovYokaiHenshinEntityPreloadSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*>** StaticGet___9__18_0()
		{
			return (::System::Func_1<::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*>**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x358E0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(ZenkovYokaiHenshinEntityPreloadSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x358E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>* __ctor_b__18_0()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::EntityHandle>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ZENKOVYOKAIHENSHINENTITYPRELOADSUBSYSTEM___C___CTOR_B__18_0_OFFSET))(this);
		}
	};
}
