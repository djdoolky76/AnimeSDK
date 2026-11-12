#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
#include "unitysdk/RPG/GameCore/PlanetFesAnimTypeEnum.h"
namespace RPG::Client { class PlanetFesAvatarData; }
namespace RPG::Client { class PlanetFesLandData; }
namespace RPG::GameCore { class PlanetFesAnimComposite; }
namespace RPG::GameCore { class PlanetFesAvatarAnimConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JHNNLMMJFMD_CFHJHKDHJDE_OFFSET UNITYSDK_OFFSET(0xB9E19A0)
#define JHNNLMMJFMD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9E2450)
#define JHNNLMMJFMD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB9E1D20)
#define JHNNLMMJFMD_GET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0xB9E2430)
#define JHNNLMMJFMD_GET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0xB9E2410)
#define JHNNLMMJFMD_GET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xB9E22A0)
#define JHNNLMMJFMD_GHOPBCBAKLL_OFFSET UNITYSDK_OFFSET(0xB9E1F30)
#define JHNNLMMJFMD_KKDJCGLBLEA_OFFSET UNITYSDK_OFFSET(0xB9E19F0)
#define JHNNLMMJFMD_KLAPEGJNOOB_OFFSET UNITYSDK_OFFSET(0xB9E1D70)
#define JHNNLMMJFMD_OMFLNDNOMLM_OFFSET UNITYSDK_OFFSET(0xB9E1E20)
#define JHNNLMMJFMD_PEAFAJLNFOL_OFFSET UNITYSDK_OFFSET(0xB9E22C0)
#define JHNNLMMJFMD_SET_ANIMCOMPOSITELUT_OFFSET UNITYSDK_OFFSET(0xB9E2440)
#define JHNNLMMJFMD_SET_ANIMCONFIG_OFFSET UNITYSDK_OFFSET(0xB9E2420)
#define JHNNLMMJFMD_SET_AVATARDATA_OFFSET UNITYSDK_OFFSET(0xB9E22B0)

inline static constexpr unsigned int JHNNLMMJFMD_TypeDefinitionIndex = 68597;

	class JHNNLMMJFMD : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::RPG::GameCore::PlanetFesAvatarAnimConfig* _AnimConfig_k__BackingField; // 0x18
		::RPG::Client::PlanetFesAvatarData* _AvatarData_k__BackingField; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* _AnimCompositeLUT_k__BackingField; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_CTOR_OFFSET))(this);
		}

		::System::Void CFHJHKDHJDE(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_CFHJHKDHJDE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_DISPOSE_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesAnimComposite* OMFLNDNOMLM(::RPG::GameCore::PlanetFesAnimTypeEnum a1, ::System::Object* a2)
		{
			return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Object*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_OMFLNDNOMLM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::PlanetFesAnimComposite* GHOPBCBAKLL(::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>* a1)
		{
			return ((::RPG::GameCore::PlanetFesAnimComposite*(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_GHOPBCBAKLL_OFFSET))(this, a1);
		}

		::System::Void KKDJCGLBLEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_KKDJCGLBLEA_OFFSET))(this);
		}

		::System::Void KLAPEGJNOOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_KLAPEGJNOOB_OFFSET))(this);
		}

		::RPG::Client::PlanetFesAvatarData* get_AvatarData()
		{
			return ((::RPG::Client::PlanetFesAvatarData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_GET_AVATARDATA_OFFSET))(this);
		}

		::System::Void set_AvatarData(::RPG::Client::PlanetFesAvatarData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PlanetFesAvatarData*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_SET_AVATARDATA_OFFSET))(this, a1);
		}

		::RPG::Client::PlanetFesLandData* PEAFAJLNFOL()
		{
			return ((::RPG::Client::PlanetFesLandData*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_PEAFAJLNFOL_OFFSET))(this);
		}

		::RPG::GameCore::PlanetFesAvatarAnimConfig* get_AnimConfig()
		{
			return ((::RPG::GameCore::PlanetFesAvatarAnimConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_GET_ANIMCONFIG_OFFSET))(this);
		}

		::System::Void set_AnimConfig(::RPG::GameCore::PlanetFesAvatarAnimConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::PlanetFesAvatarAnimConfig*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_SET_ANIMCONFIG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* get_AnimCompositeLUT()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_GET_ANIMCOMPOSITELUT_OFFSET))(this);
		}

		::System::Void set_AnimCompositeLUT(::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::PlanetFesAnimTypeEnum, ::System::Collections::Generic::List_1<::RPG::GameCore::PlanetFesAnimComposite*>*>*))((::PBYTE)hIl2Cpp + JHNNLMMJFMD_SET_ANIMCOMPOSITELUT_OFFSET))(this, a1);
		}

	};
