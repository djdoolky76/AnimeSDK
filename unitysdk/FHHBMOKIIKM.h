#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHHBMOKIIKM_MoveState.h"
#include "unitysdk/RPGTools/Timeline/CharacterStoryMoveData_MoveStopMode.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IMOHEHDKGPK.h"
class CFFPEAALCPH;
namespace RPG::Client { class MockAnimator; }
namespace RPG::GameCore { class GameEntity; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterMoveData; }
namespace RPGTools::Timeline::Story { class BaseStoryMoveWalkData; }

#define FHHBMOKIIKM_BDKDKNHICJD_OFFSET UNITYSDK_OFFSET(0x18AA9800)
#define FHHBMOKIIKM_BJGCKGPEFMN_OFFSET UNITYSDK_OFFSET(0x18AA95E0)
#define FHHBMOKIIKM_BJLJJLBDCMJ_1_OFFSET UNITYSDK_OFFSET(0x18AA7650)
#define FHHBMOKIIKM_BJLJJLBDCMJ_OFFSET UNITYSDK_OFFSET(0x18AA77B0)
#define FHHBMOKIIKM_BNMKDMKJKCD_OFFSET UNITYSDK_OFFSET(0x18AA9790)
#define FHHBMOKIIKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x18AA9EE0)
#define FHHBMOKIIKM_CNPAAMKKFJC_OFFSET UNITYSDK_OFFSET(0x18AA9BA0)
#define FHHBMOKIIKM_CTOR_OFFSET UNITYSDK_OFFSET(0x18AA9EA0)
#define FHHBMOKIIKM_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0x18AA9710)
#define FHHBMOKIIKM_DGBNPBEJOCO_OFFSET UNITYSDK_OFFSET(0x18AA84B0)
#define FHHBMOKIIKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AA9670)
#define FHHBMOKIIKM_EOCIPOCBKHA_OFFSET UNITYSDK_OFFSET(0x18AA6C70)
#define FHHBMOKIIKM_FMAIKIOPOHD_OFFSET UNITYSDK_OFFSET(0x18AA7770)
#define FHHBMOKIIKM_GCLINNECIPH_OFFSET UNITYSDK_OFFSET(0x18AA76B0)
#define FHHBMOKIIKM_GFLDMDLDHBH_OFFSET UNITYSDK_OFFSET(0x18AA99D0)
#define FHHBMOKIIKM_GNKPEEECNPO_OFFSET UNITYSDK_OFFSET(0x18AA9000)
#define FHHBMOKIIKM_HHODJCHABMC_OFFSET UNITYSDK_OFFSET(0x18AA87C0)
#define FHHBMOKIIKM_HOBJBNNBIAK_OFFSET UNITYSDK_OFFSET(0x18AA9270)
#define FHHBMOKIIKM_KJPBDAJHIHP_OFFSET UNITYSDK_OFFSET(0x18AA8080)
#define FHHBMOKIIKM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x18AA6B50)
#define FHHBMOKIIKM_LLLPIPBPFEK_OFFSET UNITYSDK_OFFSET(0x18AA9590)
#define FHHBMOKIIKM_LMMAKBJKAGN_OFFSET UNITYSDK_OFFSET(0x18AA8FB0)
#define FHHBMOKIIKM_LMPICKFJMKD_OFFSET UNITYSDK_OFFSET(0x18AA8F60)
#define FHHBMOKIIKM_MELFOOIPNCE_OFFSET UNITYSDK_OFFSET(0x18AA7960)
#define FHHBMOKIIKM_NAKNNGFLAOC_OFFSET UNITYSDK_OFFSET(0x18AA6C00)
#define FHHBMOKIIKM_NJKCMKCGJFA_OFFSET UNITYSDK_OFFSET(0x18AA8C40)
#define FHHBMOKIIKM_OPONADPFICO_OFFSET UNITYSDK_OFFSET(0x18AA8F10)

inline static constexpr unsigned int FHHBMOKIIKM_TypeDefinitionIndex = 54771;

	class FHHBMOKIIKM : public ::System::Object
	{
	public:
		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* IKJBJPKKELL; // 0x10
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x18
		::System::Single NCENNMCAPJH; // 0x20
		::System::Int32 MPKKKHHCGNM; // 0x24
		::System::Single NLLLNLJBHKB; // 0x28
		::System::Single IJKFPHAKDEA; // 0x2C
		::FHHBMOKIIKM_MoveState CKMDHLPCLFH; // 0x30
		::System::Single JNCOFOCKPBE; // 0x34
		::System::Single DFBNOOOAJCM; // 0x38
		::RPG::MVector3 OIMMGKNHKOA; // 0x3C
		::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode JCDOEIPACPP; // 0x48
		::System::Single EIEPAMAPHAD; // 0x4C
		::System::Single HOHJNNNECDJ; // 0x50
		::System::Single LBCLDAAOIHP; // 0x54
		::System::Single BNBPFIGGKGL; // 0x58
		::System::Single KPJEKDLOMON; // 0x5C
		::System::Single HKCKFEMAHNN; // 0x60
		::RPG::MVector3 FCAOOKFEOHC; // 0x64
		::RPG::MVector3 KPIIOKCHPCG; // 0x70
		::System::Single BEEHHBEGPBG; // 0x7C
		::System::Boolean MPEBFOIELOO; // 0x80
		static ::System::Int32* StaticGet_GOAHOLGIOPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x13800);
		}

		static ::System::Int32* StaticGet_JHOAJGLCFID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x13804);
		}

		static ::System::Int32* StaticGet_DAHPLPCOMBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x13808);
		}

		// static const ::System::Object OFMGDJMBFCB; // 0x0
		// static const ::System::Object BHINAMLFIGA; // 0x0
		// static const ::System::Object PNDPAGLOEBO; // 0x0
		// static const ::System::Object KIFPMCBEMNI; // 0x0
		// static const ::System::Object PHKICEGJLHO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHHBMOKIIKM_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Boolean EOCIPOCBKHA(::RPGTools::Timeline::BattlePerform::BPCharacterMoveData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterMoveData*))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_EOCIPOCBKHA_OFFSET))(this, a1);
		}

		::RPG::MVector3 DGBNPBEJOCO(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_DGBNPBEJOCO_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean GNKPEEECNPO(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::MVector3))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_GNKPEEECNPO_OFFSET))(this, a1);
		}

		::System::Void LLLPIPBPFEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_LLLPIPBPFEK_OFFSET))(this);
		}

		::System::Void BJGCKGPEFMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_BJGCKGPEFMN_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_DISPOSE_OFFSET))(this);
		}

		::System::Void DDKJIMBJBMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_DDKJIMBJBMH_OFFSET))(this);
		}

		::System::Void NAKNNGFLAOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_NAKNNGFLAOC_OFFSET))(this);
		}

		::System::Void HOBJBNNBIAK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_HOBJBNNBIAK_OFFSET))(this);
		}

		::System::Boolean MELFOOIPNCE(::RPGTools::Timeline::BattlePerform::BPCharacterMoveData* a1, ::RPGTools::Timeline::Story::BaseStoryMoveWalkData* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::BattlePerform::BPCharacterMoveData*, ::RPGTools::Timeline::Story::BaseStoryMoveWalkData*))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_MELFOOIPNCE_OFFSET))(this, a1, a2);
		}

		::System::Void HHODJCHABMC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_HHODJCHABMC_OFFSET))(this, a1);
		}

		::System::Void NJKCMKCGJFA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_NJKCMKCGJFA_OFFSET))(this);
		}

		::System::Void GFLDMDLDHBH(::IMOHEHDKGPK a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::IMOHEHDKGPK, ::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_GFLDMDLDHBH_OFFSET))(this, a1, a2);
		}

		::System::Single BDKDKNHICJD(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_BDKDKNHICJD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BNMKDMKJKCD(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_BNMKDMKJKCD_OFFSET))(this, a1, a2);
		}

		::System::Void CNPAAMKKFJC(::CFFPEAALCPH* a1, ::RPG::Client::MockAnimator* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::CFFPEAALCPH*, ::RPG::Client::MockAnimator*, ::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_CNPAAMKKFJC_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KJPBDAJHIHP(::RPG::Client::MockAnimator* a1, ::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MockAnimator*, ::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_KJPBDAJHIHP_OFFSET))(this, a1, a2);
		}

		::System::Boolean OPONADPFICO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_OPONADPFICO_OFFSET))(this);
		}

		::System::Boolean LMPICKFJMKD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_LMPICKFJMKD_OFFSET))(this);
		}

		::System::Boolean LMMAKBJKAGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_LMMAKBJKAGN_OFFSET))(this);
		}

		static ::System::Boolean GCLINNECIPH(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_GCLINNECIPH_OFFSET))(a1);
		}

		static ::System::Boolean FMAIKIOPOHD(::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode a1)
		{
			return ((::System::Boolean(*)(::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_FMAIKIOPOHD_OFFSET))(a1);
		}

		static ::System::Boolean BJLJJLBDCMJ(::RPG::MVector3 a1)
		{
			return ((::System::Boolean(*)(::RPG::MVector3))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_BJLJJLBDCMJ_OFFSET))(a1);
		}

		static ::System::Boolean BJLJJLBDCMJ_1(::System::Single a1)
		{
			return ((::System::Boolean(*)(::System::Single))((::PBYTE)hIl2Cpp + FHHBMOKIIKM_BJLJJLBDCMJ_1_OFFSET))(a1);
		}

	};
