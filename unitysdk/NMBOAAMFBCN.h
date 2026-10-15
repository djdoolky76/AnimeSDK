#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPEBLEKDAGI.h"
#include "unitysdk/System/ValueTuple.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class KDFFHMDFALG;
namespace RPG::Client { class MapDef; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NMBOAAMFBCN_ADJGJDFAIBB_OFFSET UNITYSDK_OFFSET(0xBC808F0)
#define NMBOAAMFBCN_CGNFJINIMDN_OFFSET UNITYSDK_OFFSET(0xBC7FAB0)
#define NMBOAAMFBCN_CMKBAOIMDBK_OFFSET UNITYSDK_OFFSET(0xBC7FB20)
#define NMBOAAMFBCN_CTOR_OFFSET UNITYSDK_OFFSET(0xBC80EE0)
#define NMBOAAMFBCN_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBC80710)
#define NMBOAAMFBCN_DOJMDBOEOAI_OFFSET UNITYSDK_OFFSET(0xBC80D30)
#define NMBOAAMFBCN_EMDBDCAAMIA_OFFSET UNITYSDK_OFFSET(0xBC80800)
#define NMBOAAMFBCN_KBNOBPOIPDC_OFFSET UNITYSDK_OFFSET(0xBC808A0)
#define NMBOAAMFBCN_LKINOKFJPCL_OFFSET UNITYSDK_OFFSET(0xBC80CA0)
#define NMBOAAMFBCN_MDONEBJEGBH_OFFSET UNITYSDK_OFFSET(0xBC80E70)
#define NMBOAAMFBCN_OEMAFFJJAJN_OFFSET UNITYSDK_OFFSET(0xBC80970)
#define NMBOAAMFBCN_OHKKNAPILAN_OFFSET UNITYSDK_OFFSET(0xBC807B0)
#define NMBOAAMFBCN_PBHCOGMEFJK_OFFSET UNITYSDK_OFFSET(0xBC80760)
#define NMBOAAMFBCN_PNBCCHFNDAG_OFFSET UNITYSDK_OFFSET(0xBC80850)

inline static constexpr unsigned int NMBOAAMFBCN_TypeDefinitionIndex = 60598;

	class NMBOAAMFBCN : public ::NPEBLEKDAGI
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::System::Object*>* DLBGMKACBEH; // 0x10
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::ValueTuple, ::System::Object*>* FLKGJELMHCO; // 0x20
		::KDFFHMDFALG* KGCNPIEDOCA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_CTOR_OFFSET))(this);
		}

		::System::Void CGNFJINIMDN(::KDFFHMDFALG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KDFFHMDFALG*))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_CGNFJINIMDN_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_DISPOSE_OFFSET))(this);
		}

		::System::Void PBHCOGMEFJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_PBHCOGMEFJK_OFFSET))(this, a1);
		}

		::System::Void OHKKNAPILAN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_OHKKNAPILAN_OFFSET))(this, a1);
		}

		::System::Void EMDBDCAAMIA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_EMDBDCAAMIA_OFFSET))(this, a1);
		}

		::System::Boolean PNBCCHFNDAG(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_PNBCCHFNDAG_OFFSET))(this, a1);
		}

		::System::Void KBNOBPOIPDC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_KBNOBPOIPDC_OFFSET))(this, a1);
		}

		::System::Void ADJGJDFAIBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_ADJGJDFAIBB_OFFSET))(this, a1, a2);
		}

		::System::Void LKINOKFJPCL(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Quaternion a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_LKINOKFJPCL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DOJMDBOEOAI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_DOJMDBOEOAI_OFFSET))(this, a1);
		}

		::System::Void MDONEBJEGBH(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_MDONEBJEGBH_OFFSET))(this, a1);
		}

		::System::Void CMKBAOIMDBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_CMKBAOIMDBK_OFFSET))(this);
		}

		::System::Void OEMAFFJJAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMBOAAMFBCN_OEMAFFJJAJN_OFFSET))(this);
		}

	};
