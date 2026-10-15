#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameWorld; }
namespace System { class Object; }

#define JLAMCCBFMKK_BKKFGMPIEMO_OFFSET UNITYSDK_OFFSET(0xB232780)
#define JLAMCCBFMKK_CEFOMFPOCJN_OFFSET UNITYSDK_OFFSET(0xB2327C0)
#define JLAMCCBFMKK_CTOR_OFFSET UNITYSDK_OFFSET(0xB232940)
#define JLAMCCBFMKK_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0xB232700)
#define JLAMCCBFMKK_GKDMGAICAPK_OFFSET UNITYSDK_OFFSET(0xB232930)
#define JLAMCCBFMKK_HJJLBAKGKLI_OFFSET UNITYSDK_OFFSET(0xB232800)
#define JLAMCCBFMKK_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0xB232570)
#define JLAMCCBFMKK_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB232150)
#define JLAMCCBFMKK_MHBEJENLMIG_OFFSET UNITYSDK_OFFSET(0xB232890)
#define JLAMCCBFMKK_NDAKFHEBOEG_OFFSET UNITYSDK_OFFSET(0xB232920)
#define JLAMCCBFMKK_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0xB232740)
#define JLAMCCBFMKK_PJIGEGGAHAG_OFFSET UNITYSDK_OFFSET(0xB232420)

inline static constexpr unsigned int JLAMCCBFMKK_TypeDefinitionIndex = 61047;

	class JLAMCCBFMKK : public ::System::Object
	{
	public:
		::RPG::GameCore::GameWorld* IMMBMILPPFB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_NLBNJGKAMII_OFFSET))(this);
		}

		::System::Void BKKFGMPIEMO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_BKKFGMPIEMO_OFFSET))(this);
		}

		::System::Void CEFOMFPOCJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_CEFOMFPOCJN_OFFSET))(this);
		}

		::System::Void HJJLBAKGKLI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_HJJLBAKGKLI_OFFSET))(this, a1);
		}

		::System::Void MHBEJENLMIG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_MHBEJENLMIG_OFFSET))(this, a1);
		}

		::System::Void PJIGEGGAHAG(::RPG::GameCore::GameWorld* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameWorld*))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_PJIGEGGAHAG_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameWorld* NDAKFHEBOEG()
		{
			return ((::RPG::GameCore::GameWorld*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_NDAKFHEBOEG_OFFSET))(this);
		}

		::System::Boolean GKDMGAICAPK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLAMCCBFMKK_GKDMGAICAPK_OFFSET))(this);
		}

	};
