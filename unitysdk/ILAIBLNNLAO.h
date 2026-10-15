#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/RPG/Client/WorldShiftingReason.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class DLNCBOGAMFG;
class KDFFHMDFALG;
class KLEFGGIHGMI;
namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client { class MapRotationInfo; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define ILAIBLNNLAO_AADFJFFMDAH_OFFSET UNITYSDK_OFFSET(0x164A5AA0)
#define ILAIBLNNLAO_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0x164A20D0)
#define ILAIBLNNLAO_APAGBBOJKAJ_OFFSET UNITYSDK_OFFSET(0x164A4920)
#define ILAIBLNNLAO_BMCJDBDMAGM_OFFSET UNITYSDK_OFFSET(0x164A2640)
#define ILAIBLNNLAO_CCTOR_OFFSET UNITYSDK_OFFSET(0x164A6150)
#define ILAIBLNNLAO_CGFDCPDFBJN_OFFSET UNITYSDK_OFFSET(0x164A5EB0)
#define ILAIBLNNLAO_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0x164A1F20)
#define ILAIBLNNLAO_CTOR_OFFSET UNITYSDK_OFFSET(0x164A60D0)
#define ILAIBLNNLAO_DISPOSE_OFFSET UNITYSDK_OFFSET(0x164A18D0)
#define ILAIBLNNLAO_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0x164A48B0)
#define ILAIBLNNLAO_FOHDAMMCCBB_OFFSET UNITYSDK_OFFSET(0x164A1CA0)
#define ILAIBLNNLAO_ILDJLFLJOFG_OFFSET UNITYSDK_OFFSET(0x164A3F40)
#define ILAIBLNNLAO_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0x164A59E0)
#define ILAIBLNNLAO_KOENMLBCBFG_OFFSET UNITYSDK_OFFSET(0x164A25E0)
#define ILAIBLNNLAO_LCHCNDGGOMF_OFFSET UNITYSDK_OFFSET(0x164A2770)
#define ILAIBLNNLAO_LIKCBPAJJFN_OFFSET UNITYSDK_OFFSET(0x164A5D70)
#define ILAIBLNNLAO_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0x164A2550)
#define ILAIBLNNLAO_NDMGIJHCPNI_OFFSET UNITYSDK_OFFSET(0x164A5A40)
#define ILAIBLNNLAO_OEMAFFJJAJN_OFFSET UNITYSDK_OFFSET(0x164A2150)
#define ILAIBLNNLAO_OFOGBAGBIBN_OFFSET UNITYSDK_OFFSET(0x164A33B0)
#define ILAIBLNNLAO_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0x164A3EC0)
#define ILAIBLNNLAO_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0x164A2F90)
#define ILAIBLNNLAO_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0x164A5870)

inline static constexpr unsigned int ILAIBLNNLAO_TypeDefinitionIndex = 60620;

	class ILAIBLNNLAO : public ::NPEBLEKDAGI
	{
	public:
		::UnityEngine::GameObject* OENDDNBGALF; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* GOMBAOLONDJ; // 0x18
		::DLNCBOGAMFG* BAMECAHHEKC; // 0x20
		::RPG::Client::AdventurePhase* DEIEJIOELMO; // 0x28
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* OHNPFHNPDEF; // 0x38
		::RPG::Client::MapRotationInfo* OCDIENNPEDA; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* COKDBHGJHKA; // 0x48
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_NBFDLMHLPFM()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)UnitySDK::FromName("", "ILAIBLNNLAO")->GetStaticField(0x65690);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ILAIBLNNLAO_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_DISPOSE_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KOENMLBCBFG(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_KOENMLBCBFG_OFFSET))(this, a1, a2);
		}

		::System::Void LCHCNDGGOMF(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Quaternion a3, ::UnityEngine::Quaternion a4, ::RPG::Client::WorldShiftingReason a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::RPG::Client::WorldShiftingReason))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LCHCNDGGOMF_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void NDMGIJHCPNI(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_NDMGIJHCPNI_OFFSET))(this, a1);
		}

		::System::Void AADFJFFMDAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_AADFJFFMDAH_OFFSET))(this);
		}

		::System::Void OEMAFFJJAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_OEMAFFJJAJN_OFFSET))(this);
		}

		::System::Void BMCJDBDMAGM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_BMCJDBDMAGM_OFFSET))(this, a1);
		}

		::System::Void ILDJLFLJOFG(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_ILDJLFLJOFG_OFFSET))(this, a1);
		}

		::System::Void FOHDAMMCCBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_FOHDAMMCCBB_OFFSET))(this);
		}

		::System::Void APAGBBOJKAJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_APAGBBOJKAJ_OFFSET))(this, a1);
		}

		::System::Boolean LIKCBPAJJFN(::KLEFGGIHGMI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KLEFGGIHGMI*))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_LIKCBPAJJFN_OFFSET))(this, a1);
		}

		::System::Void OFOGBAGBIBN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_OFOGBAGBIBN_OFFSET))(this, a1);
		}

		::System::Boolean CGFDCPDFBJN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAIBLNNLAO_CGFDCPDFBJN_OFFSET))(this);
		}

	};
