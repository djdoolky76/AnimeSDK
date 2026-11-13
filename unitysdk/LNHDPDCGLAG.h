#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvNavigationFailReason.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/FollowState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class EDJNAGDJEKB;
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TransformComponent; }
namespace System { class Object; }

#define LNHDPDCGLAG_ALIBLECMGGM_OFFSET UNITYSDK_OFFSET(0x1A58DB70)
#define LNHDPDCGLAG_AOKDGGOIEJE_OFFSET UNITYSDK_OFFSET(0x1A58D830)
#define LNHDPDCGLAG_BCMGIJLPCPE_OFFSET UNITYSDK_OFFSET(0x1A58D530)
#define LNHDPDCGLAG_BMMJLGPCLBE_OFFSET UNITYSDK_OFFSET(0x1A58E6E0)
#define LNHDPDCGLAG_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A58EE70)
#define LNHDPDCGLAG_CTOR_OFFSET UNITYSDK_OFFSET(0x1A58C410)
#define LNHDPDCGLAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A58DBE0)
#define LNHDPDCGLAG_DMCAEPOAOFI_OFFSET UNITYSDK_OFFSET(0x1A58D310)
#define LNHDPDCGLAG_EIFBJBGFLON_OFFSET UNITYSDK_OFFSET(0x1A58C860)
#define LNHDPDCGLAG_FONEBOEAFNA_OFFSET UNITYSDK_OFFSET(0x1A58EE60)
#define LNHDPDCGLAG_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x1A58DBC0)
#define LNHDPDCGLAG_GKOONNKCJPO_OFFSET UNITYSDK_OFFSET(0x1A58DAB0)
#define LNHDPDCGLAG_GNFIFBFJJHK_OFFSET UNITYSDK_OFFSET(0x1A58DD20)
#define LNHDPDCGLAG_HIDMACDDDIE_OFFSET UNITYSDK_OFFSET(0x1A58C7C0)
#define LNHDPDCGLAG_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0x1A58C500)
#define LNHDPDCGLAG_IEHPLCAMANJ_OFFSET UNITYSDK_OFFSET(0x1A58D4A0)
#define LNHDPDCGLAG_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0x1A58CBB0)
#define LNHDPDCGLAG_JFMNHLCDGDE_OFFSET UNITYSDK_OFFSET(0x1A58D790)
#define LNHDPDCGLAG_JOHOAIPBDKN_OFFSET UNITYSDK_OFFSET(0x1A58E7C0)
#define LNHDPDCGLAG_KANAAAADJMC_OFFSET UNITYSDK_OFFSET(0x1A58D610)
#define LNHDPDCGLAG_KBILNMFLLKH_OFFSET UNITYSDK_OFFSET(0x1A58E720)
#define LNHDPDCGLAG_KCKGEJJPAEI_OFFSET UNITYSDK_OFFSET(0x1A58E770)
#define LNHDPDCGLAG_LEGKDHALNFP_OFFSET UNITYSDK_OFFSET(0x1A58D9F0)
#define LNHDPDCGLAG_LOHMKJNNBAB_OFFSET UNITYSDK_OFFSET(0x1A58D000)
#define LNHDPDCGLAG_MHBPGNDEKDK_OFFSET UNITYSDK_OFFSET(0x1A58C4B0)
#define LNHDPDCGLAG_MMCHAINKPNP_OFFSET UNITYSDK_OFFSET(0x1A58CAD0)
#define LNHDPDCGLAG_NNMENJEMCBP_OFFSET UNITYSDK_OFFSET(0x1A58D270)
#define LNHDPDCGLAG_OICHPDKDKCB_OFFSET UNITYSDK_OFFSET(0x1A58D3F0)
#define LNHDPDCGLAG_OMOLHMJPCLE_OFFSET UNITYSDK_OFFSET(0x1A58DED0)
#define LNHDPDCGLAG_PFCCHJKKMJI_OFFSET UNITYSDK_OFFSET(0x1A58DCA0)
#define LNHDPDCGLAG_PNKLCAMLNIK_OFFSET UNITYSDK_OFFSET(0x1A58D8D0)
#define LNHDPDCGLAG_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0x1A58DBD0)

inline static constexpr unsigned int LNHDPDCGLAG_TypeDefinitionIndex = 53516;

	class LNHDPDCGLAG : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* ICKHCACDNCA; // 0x10
		::FOOIINCDBFA* JCHMONHBIFJ; // 0x18
		::RPG::GameCore::GameEntity* BCCAEHCKGEI; // 0x20
		::EDJNAGDJEKB* OMDENPENMKE; // 0x28
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x30
		::RPG::GameCore::AdventureCharacterController* COCFMJKINOP; // 0x38
		::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x40
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x48
		::System::Boolean DHMLHNKKOFB; // 0x50
		::System::Boolean _InSpecialState_k__BackingField; // 0x51
		::System::Byte _padding0[0x2];
		::RPG::GameCore::FollowState OJLELGFBAFL; // 0x54
		::System::Single IOHKLBJDLKA; // 0x58
		::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x5C
		::System::Single PBIAELMHHIH; // 0x60
		::System::Boolean BHKFCAAFOIF; // 0x64
		::System::Boolean NNCBEADHMPG; // 0x65
		::System::Boolean NMDOFJMPPKE; // 0x66
		::System::Boolean LPDOCBAGHJD; // 0x67
		::System::Single GFEJNOIBCED; // 0x68
		::System::Single JHIGHBAOJHJ; // 0x6C
		::System::Single NOKGBLAOICJ; // 0x70
		::System::Boolean FFDNNGBJCDN; // 0x74
		::System::Boolean HAIIJPPJGNK; // 0x75
		::System::Boolean KGGLCKPGOCJ; // 0x76
		::System::Boolean IMEAHGMOIJK; // 0x77
		::System::Single NPDIOOGKENJ; // 0x78
		static ::System::Single* StaticGet_DLDNGCLHAJL()
		{
			return (::System::Single*)UnitySDK::FromName("", "LNHDPDCGLAG")->GetStaticField(0x159C0);
		}

		::System::Void _ctor(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LNHDPDCGLAG_CCTOR_OFFSET))();
		}

		::System::Void MHBPGNDEKDK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_MHBPGNDEKDK_OFFSET))(this, a1);
		}

		::System::Void HLIOLKPHHHF(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_HLIOLKPHHHF_OFFSET))(this, a1, a2);
		}

		::System::Void IIJKLMNIGPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_IIJKLMNIGPN_OFFSET))(this);
		}

		::System::Void HIDMACDDDIE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_HIDMACDDDIE_OFFSET))(this);
		}

		::System::Void NNMENJEMCBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_NNMENJEMCBP_OFFSET))(this);
		}

		::System::Void IEHPLCAMANJ(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_IEHPLCAMANJ_OFFSET))(this, a1);
		}

		::System::Void BCMGIJLPCPE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_BCMGIJLPCPE_OFFSET))(this, a1);
		}

		::System::Void KANAAAADJMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_KANAAAADJMC_OFFSET))(this);
		}

		::System::Void OICHPDKDKCB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_OICHPDKDKCB_OFFSET))(this);
		}

		::System::Void JFMNHLCDGDE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_JFMNHLCDGDE_OFFSET))(this);
		}

		::System::Void AOKDGGOIEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_AOKDGGOIEJE_OFFSET))(this);
		}

		::System::Void PNKLCAMLNIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_PNKLCAMLNIK_OFFSET))(this, a1);
		}

		::System::Void EIFBJBGFLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_EIFBJBGFLON_OFFSET))(this);
		}

		::System::Void LOHMKJNNBAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_LOHMKJNNBAB_OFFSET))(this);
		}

		::System::Void LEGKDHALNFP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_LEGKDHALNFP_OFFSET))(this, a1);
		}

		::System::Void GKOONNKCJPO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_GKOONNKCJPO_OFFSET))(this, a1);
		}

		::System::Void MMCHAINKPNP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_MMCHAINKPNP_OFFSET))(this);
		}

		::System::Void DMCAEPOAOFI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_DMCAEPOAOFI_OFFSET))(this);
		}

		::System::Void ALIBLECMGGM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_ALIBLECMGGM_OFFSET))(this, a1);
		}

		::System::Boolean get_InSpecialState()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_GET_INSPECIALSTATE_OFFSET))(this);
		}

		::System::Void set_InSpecialState(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_SET_INSPECIALSTATE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_DISPOSE_OFFSET))(this);
		}

		::System::Void PFCCHJKKMJI(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_PFCCHJKKMJI_OFFSET))(this, a1, a2);
		}

		::System::Void GNFIFBFJJHK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_GNFIFBFJJHK_OFFSET))(this, a1);
		}

		::System::Void BMMJLGPCLBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_BMMJLGPCLBE_OFFSET))(this);
		}

		::System::Void KBILNMFLLKH(::RPG::GameCore::AdvNavigationFailReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdvNavigationFailReason))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_KBILNMFLLKH_OFFSET))(this, a1);
		}

		::System::Boolean OMOLHMJPCLE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_OMOLHMJPCLE_OFFSET))(this, a1);
		}

		::System::Void KCKGEJJPAEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_KCKGEJJPAEI_OFFSET))(this);
		}

		::System::Boolean JOHOAIPBDKN(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_JOHOAIPBDKN_OFFSET))(this, a1, a2);
		}

		::System::Boolean FONEBOEAFNA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNHDPDCGLAG_FONEBOEAFNA_OFFSET))(this);
		}

	};
