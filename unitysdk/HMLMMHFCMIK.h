#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMLMMHFCMIK_NKHICOENJKH;
class KPMAOLIGPAP;
namespace RPG::GameCore { class HoyoTagContainer; }
namespace RPG::GameCore { class LittleGameSandboxGroupIsolationConfig; }
namespace RPG::GameCore { class RuntimeGroupInfo; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMLMMHFCMIK_ALEJGHAIILJ_OFFSET UNITYSDK_OFFSET(0x1A35CB40)
#define HMLMMHFCMIK_AMABJJALLBE_OFFSET UNITYSDK_OFFSET(0x1A35D590)
#define HMLMMHFCMIK_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x1A35BDF0)
#define HMLMMHFCMIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x1A35DB60)
#define HMLMMHFCMIK_CEONDLECCHK_OFFSET UNITYSDK_OFFSET(0x1A35CDE0)
#define HMLMMHFCMIK_CFLFEOHOKJH_OFFSET UNITYSDK_OFFSET(0x1A35C4F0)
#define HMLMMHFCMIK_DDIFFBKBEHB_OFFSET UNITYSDK_OFFSET(0x1A35C470)
#define HMLMMHFCMIK_GHMHDDDBIMH_OFFSET UNITYSDK_OFFSET(0x1A35D3F0)
#define HMLMMHFCMIK_GLDAMFLJPMH_OFFSET UNITYSDK_OFFSET(0x1A35D260)
#define HMLMMHFCMIK_HNGPJGEGLDJ_OFFSET UNITYSDK_OFFSET(0x1A35D7D0)
#define HMLMMHFCMIK_MCDFANBKPCF_OFFSET UNITYSDK_OFFSET(0x1A35CFC0)
#define HMLMMHFCMIK_MGAAPNDJJKK_OFFSET UNITYSDK_OFFSET(0x1A35CAC0)
#define HMLMMHFCMIK_NGCIHBBNKKJ_OFFSET UNITYSDK_OFFSET(0x1A35C130)
#define HMLMMHFCMIK_OPOKJPDKOEF_OFFSET UNITYSDK_OFFSET(0x1A35C060)
#define HMLMMHFCMIK_PBBFNOKMMII_OFFSET UNITYSDK_OFFSET(0x1A35C600)
#define HMLMMHFCMIK_PGIFJMAKLGM_OFFSET UNITYSDK_OFFSET(0x1A35D9C0)
#define HMLMMHFCMIK_PMDEBAMPLOG_OFFSET UNITYSDK_OFFSET(0x1A35CCA0)

inline static constexpr unsigned int HMLMMHFCMIK_TypeDefinitionIndex = 61908;

	class HMLMMHFCMIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_KKDEOOOBELM()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x1E970);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_COHPNFIKCDL()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x1E978);
		}

		static ::System::Int32* StaticGet_NIELBDHAADL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x6800);
		}

		static ::System::Boolean* StaticGet_KODICILLJJB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x6804);
		}

		static ::System::Boolean* StaticGet_MEIALINGBHL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x6805);
		}

		static ::System::Boolean* StaticGet_JDJCIMDIGNC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x6806);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_CCTOR_OFFSET))();
		}

		static ::System::Void BGOMKDMBLKK(::KPMAOLIGPAP* a1, ::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* a2)
		{
			return ((::System::Void(*)(::KPMAOLIGPAP*, ::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_BGOMKDMBLKK_OFFSET))(a1, a2);
		}

		static ::System::Boolean NGCIHBBNKKJ(::System::UInt32 a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::System::UInt32, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_NGCIHBBNKKJ_OFFSET))(a1, a2);
		}

		static ::System::Boolean CFLFEOHOKJH(::HMLMMHFCMIK_NKHICOENJKH* a1, ::RPG::GameCore::RuntimeGroupInfo* a2)
		{
			return ((::System::Boolean(*)(::HMLMMHFCMIK_NKHICOENJKH*, ::RPG::GameCore::RuntimeGroupInfo*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_CFLFEOHOKJH_OFFSET))(a1, a2);
		}

		static ::System::Boolean OPOKJPDKOEF(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_OPOKJPDKOEF_OFFSET))(a1);
		}

		static ::System::Boolean MGAAPNDJJKK(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::LittleGameSandboxGroupIsolationConfig*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_MGAAPNDJJKK_OFFSET))(a1);
		}

		static ::System::Boolean ALEJGHAIILJ(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_ALEJGHAIILJ_OFFSET))(a1);
		}

		static ::System::Boolean PMDEBAMPLOG()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_PMDEBAMPLOG_OFFSET))();
		}

		static ::System::Void CEONDLECCHK(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_CEONDLECCHK_OFFSET))(a1, a2);
		}

		static ::System::Boolean MCDFANBKPCF(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_MCDFANBKPCF_OFFSET))(a1);
		}

		static ::System::Void GLDAMFLJPMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_GLDAMFLJPMH_OFFSET))();
		}

		static ::System::Void GHMHDDDBIMH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_GHMHDDDBIMH_OFFSET))();
		}

		static ::System::Void AMABJJALLBE(::System::Object* a1)
		{
			return ((::System::Void(*)(::System::Object*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_AMABJJALLBE_OFFSET))(a1);
		}

		static ::System::Void HNGPJGEGLDJ()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_HNGPJGEGLDJ_OFFSET))();
		}

		static ::System::Boolean DDIFFBKBEHB(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_DDIFFBKBEHB_OFFSET))(a1, a2);
		}

		static ::System::Boolean PBBFNOKMMII(::RPG::GameCore::HoyoTagContainer* a1, ::RPG::GameCore::HoyoTagContainer* a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::HoyoTagContainer*, ::RPG::GameCore::HoyoTagContainer*))((::PBYTE)hIl2Cpp + HMLMMHFCMIK_PBBFNOKMMII_OFFSET))(a1, a2);
		}

		static ::System::Void PGIFJMAKLGM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMLMMHFCMIK_PGIFJMAKLGM_OFFSET))();
		}

	};
