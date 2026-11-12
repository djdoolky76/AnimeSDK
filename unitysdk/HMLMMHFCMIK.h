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

#define HMLMMHFCMIK_ALEJGHAIILJ_OFFSET UNITYSDK_OFFSET(0x16D26860)
#define HMLMMHFCMIK_AMABJJALLBE_OFFSET UNITYSDK_OFFSET(0x16D272B0)
#define HMLMMHFCMIK_BGOMKDMBLKK_OFFSET UNITYSDK_OFFSET(0x16D25B10)
#define HMLMMHFCMIK_CCTOR_OFFSET UNITYSDK_OFFSET(0x16D27880)
#define HMLMMHFCMIK_CEONDLECCHK_OFFSET UNITYSDK_OFFSET(0x16D26B00)
#define HMLMMHFCMIK_CFLFEOHOKJH_OFFSET UNITYSDK_OFFSET(0x16D26210)
#define HMLMMHFCMIK_DDIFFBKBEHB_OFFSET UNITYSDK_OFFSET(0x16D26190)
#define HMLMMHFCMIK_GHMHDDDBIMH_OFFSET UNITYSDK_OFFSET(0x16D27110)
#define HMLMMHFCMIK_GLDAMFLJPMH_OFFSET UNITYSDK_OFFSET(0x16D26F80)
#define HMLMMHFCMIK_HNGPJGEGLDJ_OFFSET UNITYSDK_OFFSET(0x16D274F0)
#define HMLMMHFCMIK_MCDFANBKPCF_OFFSET UNITYSDK_OFFSET(0x16D26CE0)
#define HMLMMHFCMIK_MGAAPNDJJKK_OFFSET UNITYSDK_OFFSET(0x16D267E0)
#define HMLMMHFCMIK_NGCIHBBNKKJ_OFFSET UNITYSDK_OFFSET(0x16D25E50)
#define HMLMMHFCMIK_OPOKJPDKOEF_OFFSET UNITYSDK_OFFSET(0x16D25D80)
#define HMLMMHFCMIK_PBBFNOKMMII_OFFSET UNITYSDK_OFFSET(0x16D26320)
#define HMLMMHFCMIK_PGIFJMAKLGM_OFFSET UNITYSDK_OFFSET(0x16D276E0)
#define HMLMMHFCMIK_PMDEBAMPLOG_OFFSET UNITYSDK_OFFSET(0x16D269C0)

inline static constexpr unsigned int HMLMMHFCMIK_TypeDefinitionIndex = 61908;

	class HMLMMHFCMIK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet_KKDEOOOBELM()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x1B3D0);
		}

		static ::System::Collections::Generic::HashSet_1<::System::UInt32>** StaticGet_COHPNFIKCDL()
		{
			return (::System::Collections::Generic::HashSet_1<::System::UInt32>**)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x1B3D8);
		}

		static ::System::Boolean* StaticGet_MEIALINGBHL()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x5A00);
		}

		static ::System::Boolean* StaticGet_KODICILLJJB()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x5A01);
		}

		static ::System::Boolean* StaticGet_JDJCIMDIGNC()
		{
			return (::System::Boolean*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x5A02);
		}

		static ::System::Int32* StaticGet_NIELBDHAADL()
		{
			return (::System::Int32*)UnitySDK::FromName("", "HMLMMHFCMIK")->GetStaticField(0x5A04);
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
