#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BCJPCHNKDCP;
class CFALFIPEHJH;
class DMPMGGKKIBH;
namespace RPG::GameCore { class ParkourTriggerEventRow; }

#define FFPAFGCOKHK_BIECELLIJOO_OFFSET UNITYSDK_OFFSET(0x15741D00)
#define FFPAFGCOKHK_CTOR_OFFSET UNITYSDK_OFFSET(0x15741FD0)
#define FFPAFGCOKHK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x15741F00)
#define FFPAFGCOKHK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15741C50)
#define FFPAFGCOKHK_IMNHKPJHGCL_OFFSET UNITYSDK_OFFSET(0x15741F40)
#define FFPAFGCOKHK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15741CA0)
#define FFPAFGCOKHK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15741B40)
#define FFPAFGCOKHK_LDKMIKEMHFO_OFFSET UNITYSDK_OFFSET(0x15741FC0)

inline static constexpr unsigned int FFPAFGCOKHK_TypeDefinitionIndex = 74196;

	class FFPAFGCOKHK : public ::System::Object
	{
	public:
		::RPG::GameCore::ParkourTriggerEventRow* IGHAHBNLIJA; // 0x10
		::DMPMGGKKIBH* LGEGKIKIPOB; // 0x18
		::CFALFIPEHJH* EKODGCDDPNI; // 0x20
		::CFALFIPEHJH* OJAHLJGABMJ; // 0x28
		::BCJPCHNKDCP* CPIIOIPAAKK; // 0x30
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
