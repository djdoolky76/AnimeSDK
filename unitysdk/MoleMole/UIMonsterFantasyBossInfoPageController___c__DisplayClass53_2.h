#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HIEGJGAFDKI;
class HLAJPDILIIA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__BUILDCLIENTMONSTERINFO_B__5_OFFSET UNITYSDK_OFFSET(0x18FCA830)
#define MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__CTOR_OFFSET UNITYSDK_OFFSET(0x18FCA820)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyBossInfoPageController___c__DisplayClass53_2_TypeDefinitionIndex = 59127;

	template <typename T1, typename T2>
	class UIMonsterFantasyBossInfoPageController___c__DisplayClass53_2 : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* skillIDList; // 0x10
		::HLAJPDILIIA* serverInfo; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__CTOR_OFFSET))(this);
		}

		::System::Boolean _BuildClientMonsterInfo_b__5(::HIEGJGAFDKI* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIEGJGAFDKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYBOSSINFOPAGECONTROLLER___C__DISPLAYCLASS53_2__BUILDCLIENTMONSTERINFO_B__5_OFFSET))(this, x);
		}
	};
}
