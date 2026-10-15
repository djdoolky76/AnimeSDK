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

#define FHHBMOKIIKM_BDKDKNHICJD_OFFSET UNITYSDK_OFFSET(0x1577FB80)
#define FHHBMOKIIKM_BJGCKGPEFMN_OFFSET UNITYSDK_OFFSET(0x1577F950)
#define FHHBMOKIIKM_BJLJJLBDCMJ_1_OFFSET UNITYSDK_OFFSET(0x1577D9D0)
#define FHHBMOKIIKM_BJLJJLBDCMJ_OFFSET UNITYSDK_OFFSET(0x1577DB30)
#define FHHBMOKIIKM_BNMKDMKJKCD_OFFSET UNITYSDK_OFFSET(0x1577FB00)
#define FHHBMOKIIKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15780260)
#define FHHBMOKIIKM_CNPAAMKKFJC_OFFSET UNITYSDK_OFFSET(0x1577FF20)
#define FHHBMOKIIKM_CTOR_OFFSET UNITYSDK_OFFSET(0x15780220)
#define FHHBMOKIIKM_DDKJIMBJBMH_OFFSET UNITYSDK_OFFSET(0x1577FA80)
#define FHHBMOKIIKM_DGBNPBEJOCO_OFFSET UNITYSDK_OFFSET(0x1577E830)
#define FHHBMOKIIKM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1577F9E0)
#define FHHBMOKIIKM_EOCIPOCBKHA_OFFSET UNITYSDK_OFFSET(0x1577CFF0)
#define FHHBMOKIIKM_FMAIKIOPOHD_OFFSET UNITYSDK_OFFSET(0x1577DAF0)
#define FHHBMOKIIKM_GCLINNECIPH_OFFSET UNITYSDK_OFFSET(0x1577DA30)
#define FHHBMOKIIKM_GFLDMDLDHBH_OFFSET UNITYSDK_OFFSET(0x1577FD50)
#define FHHBMOKIIKM_GNKPEEECNPO_OFFSET UNITYSDK_OFFSET(0x1577F380)
#define FHHBMOKIIKM_HHODJCHABMC_OFFSET UNITYSDK_OFFSET(0x1577EB40)
#define FHHBMOKIIKM_HOBJBNNBIAK_OFFSET UNITYSDK_OFFSET(0x1577F5F0)
#define FHHBMOKIIKM_KJPBDAJHIHP_OFFSET UNITYSDK_OFFSET(0x1577E400)
#define FHHBMOKIIKM_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1577CED0)
#define FHHBMOKIIKM_LLLPIPBPFEK_OFFSET UNITYSDK_OFFSET(0x1577F900)
#define FHHBMOKIIKM_LMMAKBJKAGN_OFFSET UNITYSDK_OFFSET(0x1577F330)
#define FHHBMOKIIKM_LMPICKFJMKD_OFFSET UNITYSDK_OFFSET(0x1577F2E0)
#define FHHBMOKIIKM_MELFOOIPNCE_OFFSET UNITYSDK_OFFSET(0x1577DCE0)
#define FHHBMOKIIKM_NAKNNGFLAOC_OFFSET UNITYSDK_OFFSET(0x1577CF80)
#define FHHBMOKIIKM_NJKCMKCGJFA_OFFSET UNITYSDK_OFFSET(0x1577EFC0)
#define FHHBMOKIIKM_OPONADPFICO_OFFSET UNITYSDK_OFFSET(0x1577F290)

inline static constexpr unsigned int FHHBMOKIIKM_TypeDefinitionIndex = 53607;

	class FHHBMOKIIKM : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x10
		::RPGTools::Timeline::Story::BaseStoryMoveWalkData* IKJBJPKKELL; // 0x18
		::RPG::MVector3 KPIIOKCHPCG; // 0x20
		::System::Single DFBNOOOAJCM; // 0x2C
		::System::Single NLLLNLJBHKB; // 0x30
		::RPG::MVector3 FCAOOKFEOHC; // 0x34
		::System::Boolean MPEBFOIELOO; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single HKCKFEMAHNN; // 0x44
		::System::Single EIEPAMAPHAD; // 0x48
		::FHHBMOKIIKM_MoveState CKMDHLPCLFH; // 0x4C
		::System::Single BEEHHBEGPBG; // 0x50
		::RPG::MVector3 OIMMGKNHKOA; // 0x54
		::System::Int32 MPKKKHHCGNM; // 0x60
		::System::Single JNCOFOCKPBE; // 0x64
		::System::Single NCENNMCAPJH; // 0x68
		::System::Single KPJEKDLOMON; // 0x6C
		::System::Single IJKFPHAKDEA; // 0x70
		::System::Single BNBPFIGGKGL; // 0x74
		::System::Single LBCLDAAOIHP; // 0x78
		::RPGTools::Timeline::CharacterStoryMoveData_MoveStopMode JCDOEIPACPP; // 0x7C
		::System::Single HOHJNNNECDJ; // 0x80
		static ::System::Int32* StaticGet_GOAHOLGIOPD()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x15030);
		}

		static ::System::Int32* StaticGet_DAHPLPCOMBP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x15034);
		}

		static ::System::Int32* StaticGet_JHOAJGLCFID()
		{
			return (::System::Int32*)UnitySDK::FromName("", "FHHBMOKIIKM")->GetStaticField(0x15038);
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
