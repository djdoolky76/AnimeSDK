#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIEGJGAFDKI;
class HLAJPDILIIA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET UNITYSDK_OFFSET(0x18EAE900)
#define MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18EAE8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0_TypeDefinitionIndex = 91614;

	class UIMonsterFantasyBossCultivationPageController___c__DisplayClass47_0 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x10
		::HLAJPDILIIA* serverInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__0(::HIEGJGAFDKI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEGJGAFDKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSCULTIVATIONPAGECONTROLLER___C__DISPLAYCLASS47_0__BUILDCLIENTMONSTERINFO_B__0_OFFSET))(this, x);
		}
	};
}
