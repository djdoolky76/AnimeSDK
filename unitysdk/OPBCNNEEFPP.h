#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/FixVec3.h"
#include "unitysdk/RPG/GameCore/IVec2.h"
#include "unitysdk/System/Object.h"
class BMICACAAOGP;
class LBOKPEKBPOK;
class NJACFPMJMHH;
class OLAPJIKMNMH;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class GameWorld; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OPBCNNEEFPP_CELHMLLIDJF_OFFSET UNITYSDK_OFFSET(0xBF861F0)
#define OPBCNNEEFPP_COHHMPBOLGM_OFFSET UNITYSDK_OFFSET(0xBF97120)
#define OPBCNNEEFPP_CTOR_OFFSET UNITYSDK_OFFSET(0xBF97240)
#define OPBCNNEEFPP_EBHPALCADNL_OFFSET UNITYSDK_OFFSET(0xBF96D50)
#define OPBCNNEEFPP_EBIDFEGMEAO_OFFSET UNITYSDK_OFFSET(0xBF96320)
#define OPBCNNEEFPP_EGIBHBFHJPN_OFFSET UNITYSDK_OFFSET(0xBF96A90)
#define OPBCNNEEFPP_FHLLHAJMCLM_OFFSET UNITYSDK_OFFSET(0xBF96C20)
#define OPBCNNEEFPP_FINCMCHIONL_OFFSET UNITYSDK_OFFSET(0xBF96FE0)
#define OPBCNNEEFPP_FNGMJKBCCEH_OFFSET UNITYSDK_OFFSET(0xBF96160)
#define OPBCNNEEFPP_GGOJMDBNJEI_OFFSET UNITYSDK_OFFSET(0xBF96050)
#define OPBCNNEEFPP_IOBDMFGHNBP_OFFSET UNITYSDK_OFFSET(0xBF968D0)
#define OPBCNNEEFPP_JLAMDGIMNLG_OFFSET UNITYSDK_OFFSET(0xBF96950)
#define OPBCNNEEFPP_KMLNBEOBEGN_OFFSET UNITYSDK_OFFSET(0xBF962A0)
#define OPBCNNEEFPP_MAEGFGNBJEF_OFFSET UNITYSDK_OFFSET(0xBF96B40)
#define OPBCNNEEFPP_OKIDGFKENNB_OFFSET UNITYSDK_OFFSET(0xBF95CC0)
#define OPBCNNEEFPP_ONPLUGININIT_OFFSET UNITYSDK_OFFSET(0xBF96380)
#define OPBCNNEEFPP_ONPLUGINUNINIT_OFFSET UNITYSDK_OFFSET(0xBF969D0)
#define OPBCNNEEFPP_PHNKGKBPLND_OFFSET UNITYSDK_OFFSET(0xBF95DF0)
#define OPBCNNEEFPP_PJIMBHJBADK_OFFSET UNITYSDK_OFFSET(0xBF96EE0)
#define OPBCNNEEFPP_PNKGEEGAADH_OFFSET UNITYSDK_OFFSET(0xBF97230)

inline static constexpr unsigned int OPBCNNEEFPP_TypeDefinitionIndex = 54218;

	class OPBCNNEEFPP : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* ILJPCPAJDMC; // 0x10
		::NJACFPMJMHH* BLJOOHKFBBF; // 0x18
		::Il2CppArray<::BMICACAAOGP*>* MHPIAFKLEEG; // 0x20
		::RPG::GameCore::FixPoint JHLBDACDGOM; // 0x28
		::RPG::GameCore::FixVec3 CFAGPIIALAB; // 0x30
		::RPG::GameCore::IVec2 APDEGFLMOIB; // 0x48
		::RPG::GameCore::IVec2 PJJIBPCHANK; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_CTOR_OFFSET))(this);
		}

		::System::Boolean OKIDGFKENNB(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::OLAPJIKMNMH* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::OLAPJIKMNMH*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_OKIDGFKENNB_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean PHNKGKBPLND(::RPG::GameCore::IVec2 a1, ::OLAPJIKMNMH* a2, ::RPG::GameCore::IVec2 a3, ::RPG::GameCore::IVec2 a4, ::System::Int32 a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::OLAPJIKMNMH*, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_PHNKGKBPLND_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean GGOJMDBNJEI(::RPG::GameCore::IVec2 a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2, ::RPG::GameCore::IVec2, ::System::Int32))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_GGOJMDBNJEI_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 FNGMJKBCCEH(::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>* a1, ::RPG::GameCore::IVec2 a2, ::System::Int32 a3, ::System::Int32 a4, ::Il2CppArray<::LBOKPEKBPOK*>* a5, ::Il2CppArray<::LBOKPEKBPOK*>* a6)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::IVec2>*, ::RPG::GameCore::IVec2, ::System::Int32, ::System::Int32, ::Il2CppArray<::LBOKPEKBPOK*>*, ::Il2CppArray<::LBOKPEKBPOK*>*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_FNGMJKBCCEH_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		static ::System::Boolean KMLNBEOBEGN(::BMICACAAOGP* a1)
		{
			return ((::System::Boolean(*)(::BMICACAAOGP*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_KMLNBEOBEGN_OFFSET))(a1);
		}

		static ::System::Boolean EBIDFEGMEAO(::BMICACAAOGP* a1)
		{
			return ((::System::Boolean(*)(::BMICACAAOGP*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_EBIDFEGMEAO_OFFSET))(a1);
		}

		::System::Void OnPluginInit(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_ONPLUGININIT_OFFSET))(this, a1);
		}

		::System::Void OnPluginUninit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_ONPLUGINUNINIT_OFFSET))(this);
		}

		::System::Boolean EGIBHBFHJPN(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_EGIBHBFHJPN_OFFSET))(this, a1);
		}

		::BMICACAAOGP* MAEGFGNBJEF(::RPG::GameCore::IVec2 a1)
		{
			return ((::BMICACAAOGP*(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_MAEGFGNBJEF_OFFSET))(this, a1);
		}

		::BMICACAAOGP* FHLLHAJMCLM(::RPG::GameCore::IVec2 a1, ::OLAPJIKMNMH* a2, ::System::Boolean a3)
		{
			return ((::BMICACAAOGP*(*)(::PVOID, ::RPG::GameCore::IVec2, ::OLAPJIKMNMH*, ::System::Boolean))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_FHLLHAJMCLM_OFFSET))(this, a1, a2, a3);
		}

		::RPG::GameCore::IVec2 EBHPALCADNL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_EBHPALCADNL_OFFSET))(this, a1);
		}

		::BMICACAAOGP* CELHMLLIDJF(::RPG::GameCore::GameEntity* a1)
		{
			return ((::BMICACAAOGP*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_CELHMLLIDJF_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* FINCMCHIONL(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_FINCMCHIONL_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixVec3 COHHMPBOLGM(::RPG::GameCore::IVec2 a1)
		{
			return ((::RPG::GameCore::FixVec3(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_COHHMPBOLGM_OFFSET))(this, a1);
		}

		::RPG::GameCore::IVec2 PJIMBHJBADK(::RPG::GameCore::FixVec3 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::RPG::GameCore::FixVec3))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_PJIMBHJBADK_OFFSET))(this, a1);
		}

		::System::Int32 IOBDMFGHNBP(::RPG::GameCore::IVec2 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::GameCore::IVec2))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_IOBDMFGHNBP_OFFSET))(this, a1);
		}

		::RPG::GameCore::IVec2 JLAMDGIMNLG(::System::Int32 a1)
		{
			return ((::RPG::GameCore::IVec2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_JLAMDGIMNLG_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint PNKGEEGAADH()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OPBCNNEEFPP_PNKGEEGAADH_OFFSET))(this);
		}

	};
