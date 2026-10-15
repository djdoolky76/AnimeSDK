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

#define LNHDPDCGLAG_ALIBLECMGGM_OFFSET UNITYSDK_OFFSET(0xB7E0840)
#define LNHDPDCGLAG_AOKDGGOIEJE_OFFSET UNITYSDK_OFFSET(0xB7E0500)
#define LNHDPDCGLAG_BCMGIJLPCPE_OFFSET UNITYSDK_OFFSET(0xB7E0210)
#define LNHDPDCGLAG_BMMJLGPCLBE_OFFSET UNITYSDK_OFFSET(0xB7E13A0)
#define LNHDPDCGLAG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7E1B30)
#define LNHDPDCGLAG_CTOR_OFFSET UNITYSDK_OFFSET(0xB7DF0E0)
#define LNHDPDCGLAG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB7E08B0)
#define LNHDPDCGLAG_DMCAEPOAOFI_OFFSET UNITYSDK_OFFSET(0xB7DFFE0)
#define LNHDPDCGLAG_EIFBJBGFLON_OFFSET UNITYSDK_OFFSET(0xB7DF530)
#define LNHDPDCGLAG_FONEBOEAFNA_OFFSET UNITYSDK_OFFSET(0xB7E1B20)
#define LNHDPDCGLAG_GET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xB7E0890)
#define LNHDPDCGLAG_GKOONNKCJPO_OFFSET UNITYSDK_OFFSET(0xB7E0780)
#define LNHDPDCGLAG_GNFIFBFJJHK_OFFSET UNITYSDK_OFFSET(0xB7E09F0)
#define LNHDPDCGLAG_HIDMACDDDIE_OFFSET UNITYSDK_OFFSET(0xB7DF490)
#define LNHDPDCGLAG_HLIOLKPHHHF_OFFSET UNITYSDK_OFFSET(0xB7DF1D0)
#define LNHDPDCGLAG_IEHPLCAMANJ_OFFSET UNITYSDK_OFFSET(0xB7E0170)
#define LNHDPDCGLAG_IIJKLMNIGPN_OFFSET UNITYSDK_OFFSET(0xB7DF880)
#define LNHDPDCGLAG_JFMNHLCDGDE_OFFSET UNITYSDK_OFFSET(0xB7E0460)
#define LNHDPDCGLAG_JOHOAIPBDKN_OFFSET UNITYSDK_OFFSET(0xB7E1480)
#define LNHDPDCGLAG_KANAAAADJMC_OFFSET UNITYSDK_OFFSET(0xB7E02F0)
#define LNHDPDCGLAG_KBILNMFLLKH_OFFSET UNITYSDK_OFFSET(0xB7E13E0)
#define LNHDPDCGLAG_KCKGEJJPAEI_OFFSET UNITYSDK_OFFSET(0xB7E1430)
#define LNHDPDCGLAG_LEGKDHALNFP_OFFSET UNITYSDK_OFFSET(0xB7E06C0)
#define LNHDPDCGLAG_LOHMKJNNBAB_OFFSET UNITYSDK_OFFSET(0xB7DFCD0)
#define LNHDPDCGLAG_MHBPGNDEKDK_OFFSET UNITYSDK_OFFSET(0xB7DF180)
#define LNHDPDCGLAG_MMCHAINKPNP_OFFSET UNITYSDK_OFFSET(0xB7DF7A0)
#define LNHDPDCGLAG_NNMENJEMCBP_OFFSET UNITYSDK_OFFSET(0xB7DFF40)
#define LNHDPDCGLAG_OICHPDKDKCB_OFFSET UNITYSDK_OFFSET(0xB7E00C0)
#define LNHDPDCGLAG_OMOLHMJPCLE_OFFSET UNITYSDK_OFFSET(0xB7E0B90)
#define LNHDPDCGLAG_PFCCHJKKMJI_OFFSET UNITYSDK_OFFSET(0xB7E0970)
#define LNHDPDCGLAG_PNKLCAMLNIK_OFFSET UNITYSDK_OFFSET(0xB7E05A0)
#define LNHDPDCGLAG_SET_INSPECIALSTATE_OFFSET UNITYSDK_OFFSET(0xB7E08A0)

inline static constexpr unsigned int LNHDPDCGLAG_TypeDefinitionIndex = 52410;

	class LNHDPDCGLAG : public ::System::Object
	{
	public:
		::RPG::GameCore::AdventureCharacterController* COCFMJKINOP; // 0x10
		::RPG::GameCore::GameEntity* BCCAEHCKGEI; // 0x18
		::FOOIINCDBFA* JCHMONHBIFJ; // 0x20
		::RPG::GameCore::TransformComponent* DPPIHOCPIFH; // 0x28
		::EDJNAGDJEKB* OMDENPENMKE; // 0x30
		::RPG::GameCore::AdventureCharacterController* ICKHCACDNCA; // 0x38
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x40
		::RPG::GameCore::GameEntity* OJAHLJGABMJ; // 0x48
		::System::Boolean HAIIJPPJGNK; // 0x50
		::System::Boolean NMDOFJMPPKE; // 0x51
		::System::Byte _padding0[0x2];
		::System::Single GFEJNOIBCED; // 0x54
		::System::Single JHIGHBAOJHJ; // 0x58
		::System::Boolean DHMLHNKKOFB; // 0x5C
		::System::Boolean _InSpecialState_k__BackingField; // 0x5D
		::System::Boolean IMEAHGMOIJK; // 0x5E
		::System::Boolean KGGLCKPGOCJ; // 0x5F
		::System::Single NPDIOOGKENJ; // 0x60
		::System::Single PBIAELMHHIH; // 0x64
		::RPG::GameCore::FollowState OJLELGFBAFL; // 0x68
		::System::Single NOKGBLAOICJ; // 0x6C
		::System::Boolean NNCBEADHMPG; // 0x70
		::System::Boolean BHKFCAAFOIF; // 0x71
		::System::Boolean FFDNNGBJCDN; // 0x72
		::System::Boolean LPDOCBAGHJD; // 0x73
		::RPG::GameCore::CharacterMotionFlag KMKPGPIDKJF; // 0x74
		::System::Single IOHKLBJDLKA; // 0x78
		static ::System::Single* StaticGet_DLDNGCLHAJL()
		{
			return (::System::Single*)UnitySDK::FromName("", "LNHDPDCGLAG")->GetStaticField(0x150A0);
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
