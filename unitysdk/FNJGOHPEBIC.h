#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/RPG/GameCore/CakeRaceCurveType.h"
#include "unitysdk/RPG/GameCore/CakeRaceMoveState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector3.h"
class IFBFJDCECML;
class PBGNKMMDBGD;
namespace RPG::GameCore { class FloatCurve; }

#define FNJGOHPEBIC_CHMIHOGGLCL_OFFSET UNITYSDK_OFFSET(0x1C624940)
#define FNJGOHPEBIC_DLIJJNCPLNN_OFFSET UNITYSDK_OFFSET(0x1C6249B0)
#define FNJGOHPEBIC_EMDJEDDOKDO_OFFSET UNITYSDK_OFFSET(0x1C625140)
#define FNJGOHPEBIC_FNFJANLLHAH_OFFSET UNITYSDK_OFFSET(0x1C6255E0)
#define FNJGOHPEBIC_GFAPNNEJDKK_OFFSET UNITYSDK_OFFSET(0x1C624E20)
#define FNJGOHPEBIC_GHPFGNNIPME_OFFSET UNITYSDK_OFFSET(0x1C625010)
#define FNJGOHPEBIC_IIHFNFNBHEH_OFFSET UNITYSDK_OFFSET(0x1C6254E0)
#define FNJGOHPEBIC_JLPEFECBMLN_OFFSET UNITYSDK_OFFSET(0x1C6259B0)
#define FNJGOHPEBIC_JMLBDBEBGNM_OFFSET UNITYSDK_OFFSET(0x1C625880)
#define FNJGOHPEBIC_NPKFPDDKHPO_OFFSET UNITYSDK_OFFSET(0x1C625350)
#define FNJGOHPEBIC_OILFJILOIIK_OFFSET UNITYSDK_OFFSET(0x1C625710)

	class FNJGOHPEBIC : public ::System::Object
	{
	public:
		static ::RPG::GameCore::CakeRaceCurveType CHMIHOGGLCL(::RPG::GameCore::CakeRaceAIState a1, ::RPG::GameCore::CakeRaceMoveState a2)
		{
			return ((::RPG::GameCore::CakeRaceCurveType(*)(::RPG::GameCore::CakeRaceAIState, ::RPG::GameCore::CakeRaceMoveState))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_CHMIHOGGLCL_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 DLIJJNCPLNN(::RPG::GameCore::CakeRaceCurveType a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::MVector3 a5, ::System::Single a6, ::RPG::MVector3 a7, ::RPG::GameCore::FloatCurve* a8)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::CakeRaceCurveType, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_DLIJJNCPLNN_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::RPG::MVector3 EMDJEDDOKDO(::RPG::GameCore::FloatCurve* a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::MVector3 a5, ::System::Single a6)
		{
			return ((::RPG::MVector3(*)(::RPG::GameCore::FloatCurve*, ::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_EMDJEDDOKDO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::MVector3 NPKFPDDKHPO(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_NPKFPDDKHPO_OFFSET))(a1, a2, a3, a4, a5, a6);
		}

		static ::RPG::MVector3 GFAPNNEJDKK(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::MVector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_GFAPNNEJDKK_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
		}

		static ::RPG::MVector3 IIHFNFNBHEH(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_IIHFNFNBHEH_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Single FNFJANLLHAH(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Single(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_FNFJANLLHAH_OFFSET))(a1, a2);
		}

		static ::System::Single OILFJILOIIK(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::System::Single(*)(::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_OILFJILOIIK_OFFSET))(a1, a2);
		}

		static ::RPG::MVector3 JMLBDBEBGNM(::RPG::MVector3 a1, ::System::Single a2, ::System::Single a3, ::RPG::MVector3 a4)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_JMLBDBEBGNM_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::MVector3 GHPFGNNIPME(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::System::Single a3, ::RPG::MVector3 a4)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::RPG::MVector3, ::System::Single, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_GHPFGNNIPME_OFFSET))(a1, a2, a3, a4);
		}

		static ::RPG::MVector3 JLPEFECBMLN(::RPG::MVector3 a1, ::System::Single a2, ::RPG::MVector3 a3, ::System::Single a4, ::RPG::GameCore::FloatCurve* a5)
		{
			return ((::RPG::MVector3(*)(::RPG::MVector3, ::System::Single, ::RPG::MVector3, ::System::Single, ::RPG::GameCore::FloatCurve*))((::PBYTE)hIl2Cpp + FNJGOHPEBIC_JLPEFECBMLN_OFFSET))(a1, a2, a3, a4, a5);
		}

	};
