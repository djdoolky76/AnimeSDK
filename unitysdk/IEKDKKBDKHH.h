#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionFieldTransportLastCat; }

#define IEKDKKBDKHH_CTOR_OFFSET UNITYSDK_OFFSET(0x1C692C40)
#define IEKDKKBDKHH_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C692C50)

inline static constexpr unsigned int IEKDKKBDKHH_TypeDefinitionIndex = 37385;

	class IEKDKKBDKHH : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionFieldTransportLastCat* HEDFOAGEFGF; // 0x10
		::System::Void _ctor(::RPG::GameCore::CakeRaceActionFieldTransportLastCat* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CakeRaceActionFieldTransportLastCat*))((::PBYTE)hIl2Cpp + IEKDKKBDKHH_CTOR_OFFSET))(this, a1);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + IEKDKKBDKHH_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
