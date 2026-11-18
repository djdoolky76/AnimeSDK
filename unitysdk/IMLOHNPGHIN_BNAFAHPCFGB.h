#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LIBOIKJGAIH.h"

class IMLOHNPGHIN;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace System::Collections { class IEnumerable; }

#define IMLOHNPGHIN_BNAFAHPCFGB_FNMONEGOBHD_OFFSET UNITYSDK_OFFSET(0x141FD6A0)
#define IMLOHNPGHIN_BNAFAHPCFGB_HGMCGMDMANJ_OFFSET UNITYSDK_OFFSET(0x141FD6C0)
#define IMLOHNPGHIN_BNAFAHPCFGB_MJHMHMABFCG_OFFSET UNITYSDK_OFFSET(0x141FD760)
#define IMLOHNPGHIN_BNAFAHPCFGB__CTOR_OFFSET UNITYSDK_OFFSET(0x141FD690)

inline static constexpr unsigned int IMLOHNPGHIN_BNAFAHPCFGB_TypeDefinitionIndex = 80812;

class IMLOHNPGHIN_BNAFAHPCFGB : public ::System::Object
{
public:
	::MonoUITableScrollV2* FAMGIABLFPH; // 0x10
	::IMLOHNPGHIN* KLHPEBKNIFB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLOHNPGHIN_BNAFAHPCFGB__CTOR_OFFSET))(this);
	}

	::System::Collections::IEnumerable* FNMONEGOBHD()
	{
		return ((::System::Collections::IEnumerable*(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLOHNPGHIN_BNAFAHPCFGB_FNMONEGOBHD_OFFSET))(this);
	}

	::MoleMole::ScrollViewItemWidgetController* HGMCGMDMANJ(::LIBOIKJGAIH EIEOJFEPMAB)
	{
		return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::LIBOIKJGAIH))((::PBYTE)hIl2Cpp + IMLOHNPGHIN_BNAFAHPCFGB_HGMCGMDMANJ_OFFSET))(this, EIEOJFEPMAB);
	}

	::System::Boolean MJHMHMABFCG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMLOHNPGHIN_BNAFAHPCFGB_MJHMHMABFCG_OFFSET))(this);
	}
};
