#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPLOFONGBGI.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class CakeRaceActionTransportToFrontRandomCat; }

#define NKELDPHOFLB_CTOR_OFFSET UNITYSDK_OFFSET(0x1C76D970)
#define NKELDPHOFLB_GAILDDCMCHP_OFFSET UNITYSDK_OFFSET(0x1C76DE90)
#define NKELDPHOFLB_MCGNJBKAGFN_OFFSET UNITYSDK_OFFSET(0x1C76D980)

inline static constexpr unsigned int NKELDPHOFLB_TypeDefinitionIndex = 37398;

	class NKELDPHOFLB : public ::GPLOFONGBGI
	{
	public:
		::RPG::GameCore::CakeRaceActionTransportToFrontRandomCat* IKGOJNHMOKM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKELDPHOFLB_CTOR_OFFSET))(this);
		}

		static ::System::Boolean MCGNJBKAGFN(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Boolean(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + NKELDPHOFLB_MCGNJBKAGFN_OFFSET))(a1, a2);
		}

		::System::Void GAILDDCMCHP(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Int32))((::PBYTE)hIl2Cpp + NKELDPHOFLB_GAILDDCMCHP_OFFSET))(this, a1, a2, a3);
		}

	};
