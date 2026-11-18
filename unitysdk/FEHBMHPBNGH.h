#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGGHACLFONG.h"
#include "unitysdk/System/Object.h"

class FEHBMHPBNGH_BDJCOPPLNND;
class FEHBMHPBNGH_POONFBELLHL;
class NMNBCJDFDAB;
class NOBCAEAJIOJ;
namespace Foundation { template <typename T> class ObjectPoolOfReusable_1; }
namespace MoleMole { class UIWindowController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define FEHBMHPBNGH_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1428E330)
#define FEHBMHPBNGH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1428E610)
#define FEHBMHPBNGH_MBKDOMFJFIG_OFFSET UNITYSDK_OFFSET(0x1428E480)
#define FEHBMHPBNGH_PGGDPBNJHJG_OFFSET UNITYSDK_OFFSET(0x1428E770)
#define FEHBMHPBNGH_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x1428E660)
#define FEHBMHPBNGH__CTOR_OFFSET UNITYSDK_OFFSET(0x1428E1C0)

inline static constexpr unsigned int FEHBMHPBNGH_TypeDefinitionIndex = 40344;

class FEHBMHPBNGH : public ::System::Object
{
public:
	::MoleMole::UIWindowController* GFANGJBKIBA; // 0x10
	::Foundation::ObjectPoolOfReusable_1<::NOBCAEAJIOJ*>* IDALCPMPBBG; // 0x18
	::FEHBMHPBNGH_POONFBELLHL* OEBDMEBBDCC; // 0x20
	::Foundation::ObjectPoolOfReusable_1<::NOBCAEAJIOJ*>* FJKFCLLFHGL; // 0x28
	::System::Collections::Generic::List_1<::NOBCAEAJIOJ*>* CGLOLPGCNDM; // 0x30
	::System::Collections::Generic::List_1<::NOBCAEAJIOJ*>* CHIMLGAHCGH; // 0x38
	::UnityEngine::Transform* HNKIMODFBHJ; // 0x40
	::FEHBMHPBNGH_BDJCOPPLNND* MAEDACCKPPM; // 0x48

	::System::Void _ctor(::MoleMole::UIWindowController* DBEGNAMMHKA, ::UnityEngine::Transform* HMFJJBHMBDA)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIWindowController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + FEHBMHPBNGH__CTOR_OFFSET))(this, DBEGNAMMHKA, HMFJJBHMBDA);
	}

	::System::Boolean BBPCBEEHALC(::KGGHACLFONG IFBIKDHCCOF, ::NMNBCJDFDAB*& OFDKNLCFCPL)
	{
		return ((::System::Boolean(*)(::PVOID, ::KGGHACLFONG, ::NMNBCJDFDAB*&))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_BBPCBEEHALC_OFFSET))(this, IFBIKDHCCOF, OFDKNLCFCPL);
	}

	::System::Void MBKDOMFJFIG(::NMNBCJDFDAB*& OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::NMNBCJDFDAB*&))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_MBKDOMFJFIG_OFFSET))(this, OFDKNLCFCPL);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_DISPOSE_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_PHOADBJGFBE_OFFSET))(this);
	}

	::System::Void PGGDPBNJHJG(::NMNBCJDFDAB*& OFDKNLCFCPL)
	{
		return ((::System::Void(*)(::PVOID, ::NMNBCJDFDAB*&))((::PBYTE)hIl2Cpp + FEHBMHPBNGH_PGGDPBNJHJG_OFFSET))(this, OFDKNLCFCPL);
	}
};
