#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCJPCHNKDCP;
class CFALFIPEHJH;
class DMPMGGKKIBH;
namespace RPG::GameCore { class ParkourTriggerEventRow; }

#define FFPAFGCOKHK_BIECELLIJOO_OFFSET UNITYSDK_OFFSET(0x18A758C0)
#define FFPAFGCOKHK_CTOR_OFFSET UNITYSDK_OFFSET(0x18A75B90)
#define FFPAFGCOKHK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x18A75AC0)
#define FFPAFGCOKHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18A75810)
#define FFPAFGCOKHK_IMNHKPJHGCL_OFFSET UNITYSDK_OFFSET(0x18A75B00)
#define FFPAFGCOKHK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x18A75860)
#define FFPAFGCOKHK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18A75700)
#define FFPAFGCOKHK_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x18A75B80)

inline static constexpr unsigned int FFPAFGCOKHK_TypeDefinitionIndex = 76344;

	class FFPAFGCOKHK : public ::System::Object
	{
	public:
		::BCJPCHNKDCP* CPIIOIPAAKK; // 0x10
		::RPG::GameCore::ParkourTriggerEventRow* IGHAHBNLIJA; // 0x18
		::CFALFIPEHJH* OJAHLJGABMJ; // 0x20
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x28
		::CFALFIPEHJH* EKODGCDDPNI; // 0x30
		::System::Boolean MABFMALCGKF; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::DMPMGGKKIBH* a1, ::BCJPCHNKDCP* a2, ::RPG::GameCore::ParkourTriggerEventRow* a3, ::CFALFIPEHJH* a4, ::CFALFIPEHJH* a5)
		{
			return ((::System::Void(*)(::PVOID, ::DMPMGGKKIBH*, ::BCJPCHNKDCP*, ::RPG::GameCore::ParkourTriggerEventRow*, ::CFALFIPEHJH*, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_KPJGDHLENIP_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void BIECELLIJOO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_BIECELLIJOO_OFFSET))(this, a1);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Boolean IMNHKPJHGCL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_IMNHKPJHGCL_OFFSET))(this);
		}

		::System::Boolean LDKMIKEMHFO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFPAFGCOKHK_LDKMIKEMHFO_OFFSET))(this);
		}

	};
