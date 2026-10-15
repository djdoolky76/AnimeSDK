#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
class IDCOKMGFCGJ;
class KDOJKNPADNC;
class POPMABHOCDI;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class CharacterModelComponent; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class ModifyAdventureCharacterRunSpeedRatio; }
namespace RPG::GameCore { class TransformComponent; }

#define GHJODDBAHLI_BEFCGMHDBOP_OFFSET UNITYSDK_OFFSET(0x15A1B760)
#define GHJODDBAHLI_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A1BC20)
#define GHJODDBAHLI_CHAILJHEOFP_OFFSET UNITYSDK_OFFSET(0x15A1A180)
#define GHJODDBAHLI_CTOR_OFFSET UNITYSDK_OFFSET(0x15A19C70)
#define GHJODDBAHLI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15A19EF0)
#define GHJODDBAHLI_DMCHEDILPKP_OFFSET UNITYSDK_OFFSET(0x15A1B660)
#define GHJODDBAHLI_EADMHNOBKEG_OFFSET UNITYSDK_OFFSET(0x15A1B290)
#define GHJODDBAHLI_EBLMEKGAKAD_OFFSET UNITYSDK_OFFSET(0x15A1B530)
#define GHJODDBAHLI_GFIJGKKMMIP_OFFSET UNITYSDK_OFFSET(0x15A1B7F0)
#define GHJODDBAHLI_GPOLBDHKLCI_OFFSET UNITYSDK_OFFSET(0x15A1B7B0)
#define GHJODDBAHLI_IAKCEPJGNJC_OFFSET UNITYSDK_OFFSET(0x15A1BBB0)
#define GHJODDBAHLI_IGOONINDMOP_OFFSET UNITYSDK_OFFSET(0x15A1A120)
#define GHJODDBAHLI_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A1A320)
#define GHJODDBAHLI_LGKDFNBEHDC_OFFSET UNITYSDK_OFFSET(0x15A1AA40)
#define GHJODDBAHLI_LHMKCOHPLMN_OFFSET UNITYSDK_OFFSET(0x15A1BB70)
#define GHJODDBAHLI_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x15A1B4D0)
#define GHJODDBAHLI_NHPDCPKMNAM_OFFSET UNITYSDK_OFFSET(0x15A1B5E0)
#define GHJODDBAHLI_ONAFTERMODELARTLOAD_OFFSET UNITYSDK_OFFSET(0x15A19F30)
#define GHJODDBAHLI_ONBEFOREMODELARTUNLOAD_OFFSET UNITYSDK_OFFSET(0x15A1A2D0)
#define GHJODDBAHLI_PLGNLKALBNN_OFFSET UNITYSDK_OFFSET(0x15A1B6E0)

inline static constexpr unsigned int GHJODDBAHLI_TypeDefinitionIndex = 64243;

	class GHJODDBAHLI : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* KIHMIJNKGFD; // 0x10
		::FOOIINCDBFA* JFMDCAIDMHJ; // 0x18
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0x20
		::KDOJKNPADNC* MHAEBFAEFCG; // 0x28
		::RPG::GameCore::CharacterModelComponent* LBNNBDGEPBN; // 0x30
		::POPMABHOCDI* GBLEMMBAAOK; // 0x38
		::RPG::GameCore::TransformComponent* PDJGEDNLBKJ; // 0x40
		::RPG::GameCore::AdventureCharacterController* CPIIOIPAAKK; // 0x48
		::IDCOKMGFCGJ* BILCDPGDIGM; // 0x50
		::RPG::GameCore::ModifyAdventureCharacterRunSpeedRatio* JFEJENBHBCO; // 0x58
		::RPG::GameCore::CharacterModelComponent* FFPNKJOPAIL; // 0x60
		::System::Single MDFMHJPFAKE; // 0x68
		::System::Single FHGBIJOBOFD; // 0x6C
		::System::Boolean LCMGMEJNIAP; // 0x70
		::System::Boolean OMKOFBEPCAB; // 0x71
		::System::Byte _padding0[0x2];
		::UnityEngine::Vector3 BGJECKILABB; // 0x74
		::System::Int32 BIHNCOMDMEC; // 0x80
		::System::Single BPLPMMOBBHJ; // 0x84
		::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x88
		::System::Int32 HAKEBJOFIGO; // 0x8C
		::UnityEngine::Vector3 BEDPGAOCOHG; // 0x90
		::System::Single NGAEMPHCOAI; // 0x9C
		::System::Single CMHDFEJAFHG; // 0xA0
		::UnityEngine::Vector3 CNNEIOBCINA; // 0xA4
		static ::System::Int32* StaticGet_IFLNJLFCHOM()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHJODDBAHLI")->GetStaticField(0x14AD0);
		}

		static ::System::Int32* StaticGet_KNAJNCAJONK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHJODDBAHLI")->GetStaticField(0x14AD4);
		}

		static ::System::Int32* StaticGet_BODAIEJJDLI()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHJODDBAHLI")->GetStaticField(0x14AD8);
		}

		static ::System::Int32* StaticGet_BHNIHEMCEIN()
		{
			return (::System::Int32*)UnitySDK::FromName("", "GHJODDBAHLI")->GetStaticField(0x14ADC);
		}

		// static const ::System::Object NCGJNLDBCNJ; // 0x0
		::System::Void _ctor(::KDOJKNPADNC* a1, ::RPG::GameCore::GameEntity* a2, ::RPG::GameCore::GameEntity* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::KDOJKNPADNC*, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::GameEntity*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHJODDBAHLI_CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GHJODDBAHLI_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_DISPOSE_OFFSET))(this);
		}

		::System::Void OnAfterModelArtLoad(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GHJODDBAHLI_ONAFTERMODELARTLOAD_OFFSET))(this, a1);
		}

		::System::Void OnBeforeModelArtUnload(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GHJODDBAHLI_ONBEFOREMODELARTUNLOAD_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GHJODDBAHLI_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void LPFBANCOMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_LPFBANCOMPE_OFFSET))(this);
		}

		::System::Void EBLMEKGAKAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_EBLMEKGAKAD_OFFSET))(this);
		}

		::System::Void NHPDCPKMNAM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJODDBAHLI_NHPDCPKMNAM_OFFSET))(this, a1);
		}

		::System::Void DMCHEDILPKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_DMCHEDILPKP_OFFSET))(this);
		}

		::System::Void PLGNLKALBNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_PLGNLKALBNN_OFFSET))(this);
		}

		::System::Void BEFCGMHDBOP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + GHJODDBAHLI_BEFCGMHDBOP_OFFSET))(this, a1);
		}

		::System::Void GPOLBDHKLCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_GPOLBDHKLCI_OFFSET))(this);
		}

		::System::Void GFIJGKKMMIP(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GHJODDBAHLI_GFIJGKKMMIP_OFFSET))(this, a1, a2);
		}

		::System::Void EADMHNOBKEG(::System::Boolean a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + GHJODDBAHLI_EADMHNOBKEG_OFFSET))(this, a1, a2);
		}

		::System::Void LGKDFNBEHDC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_LGKDFNBEHDC_OFFSET))(this);
		}

		::System::Void CHAILJHEOFP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_CHAILJHEOFP_OFFSET))(this);
		}

		::System::Void IGOONINDMOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_IGOONINDMOP_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* LHMKCOHPLMN()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_LHMKCOHPLMN_OFFSET))(this);
		}

		::UnityEngine::Vector3 IAKCEPJGNJC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + GHJODDBAHLI_IAKCEPJGNJC_OFFSET))(this);
		}

	};
