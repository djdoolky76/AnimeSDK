#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimEvilSmileState.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ECAKAEANPJB;
class HIOEAKHGILF;
class MEIJGMHFPLB;
namespace RPG::GameCore { class FiveDimEvilSmileBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmileMoveConfig; }
namespace RPG::GameCore { class FiveDimEvilSmilePropSpawnerParam; }
namespace RPG::GameCore { class FiveDimEvilSmileStateEventConfig; }
namespace RPG::GameCore { class FloatCurve; }
namespace System { class String; }
namespace UnityEngine { class Collider; }

#define GJOFNOCMMKL_AEPIKIFFILH_OFFSET UNITYSDK_OFFSET(0x15A72A30)
#define GJOFNOCMMKL_AKAFHCHODDB_OFFSET UNITYSDK_OFFSET(0x15A70090)
#define GJOFNOCMMKL_AKFCNLEFBKE_OFFSET UNITYSDK_OFFSET(0x15A6F590)
#define GJOFNOCMMKL_AOMDLKCMKNM_OFFSET UNITYSDK_OFFSET(0x15A70C60)
#define GJOFNOCMMKL_BAAGCKNGMFP_OFFSET UNITYSDK_OFFSET(0x15A72D60)
#define GJOFNOCMMKL_BDNJOBHADEI_OFFSET UNITYSDK_OFFSET(0x15A702A0)
#define GJOFNOCMMKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x15A73110)
#define GJOFNOCMMKL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x15A70230)
#define GJOFNOCMMKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x15A6F6C0)
#define GJOFNOCMMKL_CTOR_OFFSET UNITYSDK_OFFSET(0x15A6F500)
#define GJOFNOCMMKL_FJAJHGHBGIB_OFFSET UNITYSDK_OFFSET(0x15A70310)
#define GJOFNOCMMKL_GEBNPFGOLKF_OFFSET UNITYSDK_OFFSET(0x15A6FD10)
#define GJOFNOCMMKL_HOHGIJNDJNJ_OFFSET UNITYSDK_OFFSET(0x15A71EE0)
#define GJOFNOCMMKL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x15A6FE50)
#define GJOFNOCMMKL_KBLHANMCMJO_OFFSET UNITYSDK_OFFSET(0x15A6FF50)
#define GJOFNOCMMKL_KCBOLECLGPC_OFFSET UNITYSDK_OFFSET(0x15A70B10)
#define GJOFNOCMMKL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x15A6F710)
#define GJOFNOCMMKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x15A6F510)
#define GJOFNOCMMKL_LHLDHBNGEDL_OFFSET UNITYSDK_OFFSET(0x15A70DA0)
#define GJOFNOCMMKL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x15A701D0)
#define GJOFNOCMMKL_OECGAFGDIBK_OFFSET UNITYSDK_OFFSET(0x15A72ED0)
#define GJOFNOCMMKL_OKAGBOCBILG_OFFSET UNITYSDK_OFFSET(0x15A6FBE0)

inline static constexpr unsigned int GJOFNOCMMKL_TypeDefinitionIndex = 77094;

	class GJOFNOCMMKL : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatCurve* FFIKHKFLEJK; // 0x10
		::Il2CppArray<::System::Boolean>* JIECPKIELBP; // 0x18
		::ECAKAEANPJB* FKIBGPJNCIJ; // 0x20
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* IGNGBHOGEPK; // 0x28
		::System::Single MBCEDPCNFKE; // 0x30
		::System::Single KCMOHJEDEMK; // 0x34
		::System::Single CPFPMCJKHLL; // 0x38
		::RPG::GameCore::FiveDimEvilSmileState CMBLAFNGAOB; // 0x3C
		::System::Single LCLMHBFCPDM; // 0x40
		::System::Single HJBJKHJFGKO; // 0x44
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_FIGBBAIJILL()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x4D800);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x4D808);
		}

		static ::System::String** StaticGet_NHCKFHEDLHJ()
		{
			return (::System::String**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x4D810);
		}

		static ::System::Single* StaticGet_LCPBMIKGFHH()
		{
			return (::System::Single*)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x11B90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GJOFNOCMMKL_CCTOR_OFFSET))();
		}

		::System::Void KPJGDHLENIP(::ECAKAEANPJB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECAKAEANPJB*))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_CLEAR_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_KIGBILLGNOH_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileState JLANKNHFKCN(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::RPG::GameCore::FiveDimEvilSmileState LJOLGCNKIEH(::System::Single a1)
		{
			return ((::RPG::GameCore::FiveDimEvilSmileState(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void CHAHBFGGIDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_CHAHBFGGIDL_OFFSET))(this);
		}

		::System::Boolean BDNJOBHADEI(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_BDNJOBHADEI_OFFSET))(this, a1);
		}

		::System::Void FJAJHGHBGIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_FJAJHGHBGIB_OFFSET))(this);
		}

		::System::Void HOHGIJNDJNJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_HOHGIJNDJNJ_OFFSET))(this, a1);
		}

		::System::Void KBLHANMCMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_KBLHANMCMJO_OFFSET))(this);
		}

		::System::Void AKAFHCHODDB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_AKAFHCHODDB_OFFSET))(this, a1);
		}

		::System::Boolean LHLDHBNGEDL(::MEIJGMHFPLB* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Quaternion a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEIJGMHFPLB*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_LHLDHBNGEDL_OFFSET))(this, a1, a2, a3, a4);
		}

		::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam* AOMDLKCMKNM()
		{
			return ((::RPG::GameCore::FiveDimEvilSmilePropSpawnerParam*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_AOMDLKCMKNM_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileMoveConfig* OKAGBOCBILG()
		{
			return ((::RPG::GameCore::FiveDimEvilSmileMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_OKAGBOCBILG_OFFSET))(this);
		}

		::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig* GEBNPFGOLKF()
		{
			return ((::RPG::GameCore::FiveDimEvilSmileBakedMoveConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_GEBNPFGOLKF_OFFSET))(this);
		}

		::System::Void AKFCNLEFBKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_AKFCNLEFBKE_OFFSET))(this);
		}

		::HIOEAKHGILF* AEPIKIFFILH()
		{
			return ((::HIOEAKHGILF*(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_AEPIKIFFILH_OFFSET))(this);
		}

		::System::Boolean KCBOLECLGPC(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_KCBOLECLGPC_OFFSET))(this, a1, a2);
		}

		::System::Boolean BAAGCKNGMFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_BAAGCKNGMFP_OFFSET))(this);
		}

		::System::Boolean OECGAFGDIBK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GJOFNOCMMKL_OECGAFGDIBK_OFFSET))(this);
		}

	};
