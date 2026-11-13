#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/WolfBroGunPlayTarget_HP.h"
#include "unitysdk/RPG/GameCore/RogueMiracleCategory.h"
class FICJADOJGMF;
namespace RPG::Client { class WolfBroGunPlayTarget_Group; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Texture; }

#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_CCTOR_OFFSET UNITYSDK_OFFSET(0x182348C0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_CTOR_OFFSET UNITYSDK_OFFSET(0x182346B0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_GET_ROGUEINDEX_OFFSET UNITYSDK_OFFSET(0x18234690)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_INIT_OFFSET UNITYSDK_OFFSET(0x182335F0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x18234630)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONLOSSHP_OFFSET UNITYSDK_OFFSET(0x18234230)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPCOINMATERIAL_OFFSET UNITYSDK_OFFSET(0x18233790)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPMIRACLEMATERIAL_OFFSET UNITYSDK_OFFSET(0x18233B50)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SET_ROGUEINDEX_OFFSET UNITYSDK_OFFSET(0x182346A0)
#define RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SHOWSCORE_OFFSET UNITYSDK_OFFSET(0x18234310)

namespace RPG::Client
{
	inline static constexpr unsigned int WolfBroGunPlayTarget_RogueHP_TypeDefinitionIndex = 70685;

	class WolfBroGunPlayTarget_RogueHP : public ::RPG::Client::WolfBroGunPlayTarget_HP
	{
	public:
		::UnityEngine::Renderer* Renderer; // 0xF8
		::System::Int32 _RogueIndex_k__BackingField; // 0x100
		::System::Byte _padding0[0x4];
		::UnityEngine::Texture* ECPMAMBLIAB; // 0x108
		::UnityEngine::MaterialPropertyBlock* IDGFNFGGDOL; // 0x110
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::RogueMiracleCategory, ::System::Object*>* JNJOOPAOBFO; // 0x118
		static ::System::Int32* StaticGet_GFJFOCKBIOH()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13910);
		}

		static ::System::Int32* StaticGet_DDAHGMIOJNK()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13914);
		}

		static ::System::Int32* StaticGet_CHCEPCADKGI()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13918);
		}

		static ::System::Int32* StaticGet_NJGMMIOOJBM()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x1391C);
		}

		static ::System::Int32* StaticGet_EOJEBLGCBDA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13920);
		}

		static ::System::Int32* StaticGet_HPDCIGKGHFN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13924);
		}

		static ::System::Int32* StaticGet_BONBEACEIKA()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13928);
		}

		static ::System::Int32* StaticGet_KLMHDIPLGDD()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x1392C);
		}

		static ::System::Int32* StaticGet_NKDMCLKKLCN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13930);
		}

		static ::System::Int32* StaticGet_HPCILKKLFEE()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13934);
		}

		static ::System::Int32* StaticGet_COHANNMEAAN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x13938);
		}

		static ::System::Int32* StaticGet_JLDBBEKLJAN()
		{
			return (::System::Int32*)UnitySDK::FromName("RPG.Client", "WolfBroGunPlayTarget_RogueHP")->GetStaticField(0x1393C);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_CCTOR_OFFSET))();
		}

		::System::Void Init(::FICJADOJGMF* a1, ::RPG::Client::WolfBroGunPlayTarget_Group* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICJADOJGMF*, ::RPG::Client::WolfBroGunPlayTarget_Group*))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Void SetupCoinMaterial(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPCOINMATERIAL_OFFSET))(this, a1);
		}

		::System::Void SetupMiracleMaterial(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SETUPMIRACLEMATERIAL_OFFSET))(this, a1);
		}

		::System::Void OnLossHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONLOSSHP_OFFSET))(this);
		}

		::System::Void ShowScore(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SHOWSCORE_OFFSET))(this, a1, a2);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_ONDESTROY_OFFSET))(this);
		}

		::System::Int32 get_RogueIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_GET_ROGUEINDEX_OFFSET))(this);
		}

		::System::Void set_RogueIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_WOLFBROGUNPLAYTARGET_ROGUEHP_SET_ROGUEINDEX_OFFSET))(this, a1);
		}

	};
}
