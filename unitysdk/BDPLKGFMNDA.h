#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/Client/UISkillIndex.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CAJBDLAOBPF;
class DNLBGJNPCON;
class KNOCJADNCOA;
class MLEDNKPLEAM;
class NMNIJNNFPGP;
class PPMIMKCKGME;
namespace RPG::Client { class PrefabLoadMeta; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define BDPLKGFMNDA_AJFDLJJCFGA_OFFSET UNITYSDK_OFFSET(0xB7BD9B0)
#define BDPLKGFMNDA_AJPENEHACEG_OFFSET UNITYSDK_OFFSET(0xB7BDC70)
#define BDPLKGFMNDA_CBHGEGECCDH_OFFSET UNITYSDK_OFFSET(0xB7BD8F0)
#define BDPLKGFMNDA_CCTOR_OFFSET UNITYSDK_OFFSET(0xB7BE020)
#define BDPLKGFMNDA_CTOR_OFFSET UNITYSDK_OFFSET(0xB7BDFC0)
#define BDPLKGFMNDA_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xB7BD4A0)
#define BDPLKGFMNDA_GCFMGAJPMBL_OFFSET UNITYSDK_OFFSET(0xB7BDEC0)
#define BDPLKGFMNDA_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xB7BD720)
#define BDPLKGFMNDA_NFFCFBOBIDA_OFFSET UNITYSDK_OFFSET(0xB7BDAE0)
#define BDPLKGFMNDA_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0xB7BD790)
#define BDPLKGFMNDA_PBCIPFDJLBA_OFFSET UNITYSDK_OFFSET(0xB7BDBA0)
#define BDPLKGFMNDA_PNJKFOILFOB_OFFSET UNITYSDK_OFFSET(0xB7BDA90)
#define BDPLKGFMNDA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xB7BCB80)
#define BDPLKGFMNDA__ONBIND_OFFSET UNITYSDK_OFFSET(0xB7BCE00)
#define BDPLKGFMNDA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xB7BCD30)
#define BDPLKGFMNDA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xB7BD560)

inline static constexpr unsigned int BDPLKGFMNDA_TypeDefinitionIndex = 73999;

	class BDPLKGFMNDA : public ::FMPCODLIOLG
	{
	public:
		::CAJBDLAOBPF* CGADMHJAMCK; // 0x60
		::DNLBGJNPCON* LMJLIBIIINI; // 0x68
		::System::Collections::Generic::Dictionary_2<::RPG::Client::UISkillIndex, ::NMNIJNNFPGP*>* OMBMEAGNBNL; // 0x70
		::PPMIMKCKGME* PNPNGCLCCNP; // 0x78
		::CAJBDLAOBPF* IFNJNEAHGIH; // 0x80
		::DNLBGJNPCON* GNGKDLOEKLN; // 0x88
		::RPG::GameCore::BattleInstance* CKPCDFOHJIE; // 0x90
		::UnityEngine::Animator* APPGGMLEPLN; // 0x98
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xA0
		::Il2CppArray<::MLEDNKPLEAM*>* PDPMGFLOHDD; // 0xA8
		::RPG::Client::PrefabLoadMeta* BFFGFGEMCCH; // 0xB0
		::UnityEngine::Transform* HABCGOICJEI; // 0xB8
		::System::Boolean EINNACFPAEN; // 0xC0
		::System::Boolean COKDIOCOGJK; // 0xC1
		::System::Byte _padding0[0x2];
		::System::Int32 AGNBPBHIKMG; // 0xC4
		static ::System::Int32* StaticGet_JPLIPLNMKAL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BDPLKGFMNDA")->GetStaticField(0x150E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDPLKGFMNDA_CCTOR_OFFSET))();
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BDPLKGFMNDA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::KNOCJADNCOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KNOCJADNCOA*))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* CBHGEGECCDH(::RPG::Client::UISkillIndex a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID, ::RPG::Client::UISkillIndex, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_CBHGEGECCDH_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>* AJFDLJJCFGA()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::NMNIJNNFPGP*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_AJFDLJJCFGA_OFFSET))(this);
		}

		::RPG::Client::UISkillIndex PNJKFOILFOB(::RPG::Client::UISkillIndex a1)
		{
			return ((::RPG::Client::UISkillIndex(*)(::PVOID, ::RPG::Client::UISkillIndex))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_PNJKFOILFOB_OFFSET))(this, a1);
		}

		::System::Void NFFCFBOBIDA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_NFFCFBOBIDA_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::Void GCFMGAJPMBL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_GCFMGAJPMBL_OFFSET))(this, a1);
		}

		::System::Void PBCIPFDJLBA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_PBCIPFDJLBA_OFFSET))(this);
		}

		::System::Void AJPENEHACEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDPLKGFMNDA_AJPENEHACEG_OFFSET))(this);
		}

	};
