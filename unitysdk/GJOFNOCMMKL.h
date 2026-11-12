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

#define GJOFNOCMMKL_AEPIKIFFILH_OFFSET UNITYSDK_OFFSET(0x169BB3F0)
#define GJOFNOCMMKL_AKAFHCHODDB_OFFSET UNITYSDK_OFFSET(0x169B8A50)
#define GJOFNOCMMKL_AKFCNLEFBKE_OFFSET UNITYSDK_OFFSET(0x169B7F50)
#define GJOFNOCMMKL_AOMDLKCMKNM_OFFSET UNITYSDK_OFFSET(0x169B9620)
#define GJOFNOCMMKL_BAAGCKNGMFP_OFFSET UNITYSDK_OFFSET(0x169BB720)
#define GJOFNOCMMKL_BDNJOBHADEI_OFFSET UNITYSDK_OFFSET(0x169B8C60)
#define GJOFNOCMMKL_CCTOR_OFFSET UNITYSDK_OFFSET(0x169BBAB0)
#define GJOFNOCMMKL_CHAHBFGGIDL_OFFSET UNITYSDK_OFFSET(0x169B8BF0)
#define GJOFNOCMMKL_CLEAR_OFFSET UNITYSDK_OFFSET(0x169B8080)
#define GJOFNOCMMKL_CTOR_OFFSET UNITYSDK_OFFSET(0x169B7EC0)
#define GJOFNOCMMKL_FJAJHGHBGIB_OFFSET UNITYSDK_OFFSET(0x169B8CD0)
#define GJOFNOCMMKL_GEBNPFGOLKF_OFFSET UNITYSDK_OFFSET(0x169B86D0)
#define GJOFNOCMMKL_HOHGIJNDJNJ_OFFSET UNITYSDK_OFFSET(0x169BA8A0)
#define GJOFNOCMMKL_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x169B8810)
#define GJOFNOCMMKL_KBLHANMCMJO_OFFSET UNITYSDK_OFFSET(0x169B8910)
#define GJOFNOCMMKL_KCBOLECLGPC_OFFSET UNITYSDK_OFFSET(0x169B94D0)
#define GJOFNOCMMKL_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x169B80D0)
#define GJOFNOCMMKL_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x169B7ED0)
#define GJOFNOCMMKL_LHLDHBNGEDL_OFFSET UNITYSDK_OFFSET(0x169B9760)
#define GJOFNOCMMKL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0x169B8B90)
#define GJOFNOCMMKL_OECGAFGDIBK_OFFSET UNITYSDK_OFFSET(0x169BB880)
#define GJOFNOCMMKL_OKAGBOCBILG_OFFSET UNITYSDK_OFFSET(0x169B85A0)

inline static constexpr unsigned int GJOFNOCMMKL_TypeDefinitionIndex = 79429;

	class GJOFNOCMMKL : public ::System::Object
	{
	public:
		::RPG::GameCore::FloatCurve* FFIKHKFLEJK; // 0x10
		::Il2CppArray<::RPG::GameCore::FiveDimEvilSmileStateEventConfig*>* IGNGBHOGEPK; // 0x18
		::Il2CppArray<::System::Boolean>* JIECPKIELBP; // 0x20
		::ECAKAEANPJB* FKIBGPJNCIJ; // 0x28
		::System::Single CPFPMCJKHLL; // 0x30
		::System::Single MBCEDPCNFKE; // 0x34
		::System::Single KCMOHJEDEMK; // 0x38
		::System::Single HJBJKHJFGKO; // 0x3C
		::RPG::GameCore::FiveDimEvilSmileState CMBLAFNGAOB; // 0x40
		::System::Single LCLMHBFCPDM; // 0x44
		static ::Il2CppArray<::UnityEngine::Collider*>** StaticGet_FIGBBAIJILL()
		{
			return (::Il2CppArray<::UnityEngine::Collider*>**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x65620);
		}

		static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_KDDCBHBPJMF()
		{
			return (::Il2CppArray<::UnityEngine::RaycastHit>**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x65628);
		}

		static ::System::String** StaticGet_NHCKFHEDLHJ()
		{
			return (::System::String**)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x65630);
		}

		static ::System::Single* StaticGet_LCPBMIKGFHH()
		{
			return (::System::Single*)UnitySDK::FromName("", "GJOFNOCMMKL")->GetStaticField(0x14660);
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
