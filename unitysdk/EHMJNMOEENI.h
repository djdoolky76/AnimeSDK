#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
class FOOIINCDBFA;
namespace RPG::GameCore { class AdventureAbilityComponent; }
namespace RPG::GameCore { class ST_Main_Escape; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TransformComponent; }

#define EHMJNMOEENI_BAHPLEGJEGK_OFFSET UNITYSDK_OFFSET(0x18BD9D60)
#define EHMJNMOEENI_BEPBDGBNNBC_OFFSET UNITYSDK_OFFSET(0x18BD9920)
#define EHMJNMOEENI_CCTOR_OFFSET UNITYSDK_OFFSET(0x18BDCBB0)
#define EHMJNMOEENI_CTOR_OFFSET UNITYSDK_OFFSET(0x18BD9750)
#define EHMJNMOEENI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18BD98C0)
#define EHMJNMOEENI_EOIBMFKIIHL_OFFSET UNITYSDK_OFFSET(0x18BD9A70)
#define EHMJNMOEENI_FEKFKEPEKHC_OFFSET UNITYSDK_OFFSET(0x18BDC1C0)
#define EHMJNMOEENI_GMEMLICLJPC_OFFSET UNITYSDK_OFFSET(0x18BDBF20)
#define EHMJNMOEENI_HDKDELPOLOM_OFFSET UNITYSDK_OFFSET(0x18BDC3C0)
#define EHMJNMOEENI_IPIIKGMKMCA_OFFSET UNITYSDK_OFFSET(0x18BDC2D0)
#define EHMJNMOEENI_JOECFMLMGAP_OFFSET UNITYSDK_OFFSET(0x18BDC610)
#define EHMJNMOEENI_OIFLDBBPANB_OFFSET UNITYSDK_OFFSET(0x18BDC000)
#define EHMJNMOEENI_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18BD9BC0)
#define EHMJNMOEENI_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18BDBC00)
#define EHMJNMOEENI_TICK_OFFSET UNITYSDK_OFFSET(0x18BDBCB0)

inline static constexpr unsigned int EHMJNMOEENI_TypeDefinitionIndex = 53309;

	class EHMJNMOEENI
	{
	public:
		::RPG::GameCore::TransformComponent* AHLEHJFOMCF; // 0x28
		::RPG::GameCore::AdventureAbilityComponent* PCDEEAAIFPK; // 0x30
		::FOOIINCDBFA* JCHMONHBIFJ; // 0x38
		::System::Single LGPDOMJLANJ; // 0x40
		::UnityEngine::Vector3 CNIOPJHPIIJ; // 0x44
		::System::Boolean MFLJDCOCICI; // 0x50
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 MPEPJMMDDOJ; // 0x54
		::System::Nullable_1<::UnityEngine::Vector3> LFIELBMBEFM; // 0x60
		::System::Byte _padding1[0x8];
		::UnityEngine::Vector3 DNNLBGCHGEI; // 0x70
		::System::Int32 JFLHNFPPDFF; // 0x7C
		static ::System::Single* StaticGet_NINLIKBCLNF()
		{
			return (::System::Single*)UnitySDK::FromName("", "EHMJNMOEENI")->GetStaticField(0x46B0);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Main_Escape* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Main_Escape*))((::PBYTE)hIl2Cpp + EHMJNMOEENI_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EHMJNMOEENI_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_DISPOSE_OFFSET))(this);
		}

		::System::Void BEPBDGBNNBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_BEPBDGBNNBC_OFFSET))(this);
		}

		::System::Void EOIBMFKIIHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_EOIBMFKIIHL_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EHMJNMOEENI_TICK_OFFSET))(this, a1);
		}

		::System::Nullable_1<::System::Single> IPIIKGMKMCA(::RPG::GameCore::TransformComponent* a1)
		{
			return ((::System::Nullable_1<::System::Single>(*)(::PVOID, ::RPG::GameCore::TransformComponent*))((::PBYTE)hIl2Cpp + EHMJNMOEENI_IPIIKGMKMCA_OFFSET))(this, a1);
		}

		::System::Boolean FEKFKEPEKHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_FEKFKEPEKHC_OFFSET))(this);
		}

		::System::Boolean OIFLDBBPANB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_OIFLDBBPANB_OFFSET))(this);
		}

		::System::Boolean BAHPLEGJEGK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_BAHPLEGJEGK_OFFSET))(this);
		}

		::System::Boolean JOECFMLMGAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EHMJNMOEENI_JOECFMLMGAP_OFFSET))(this);
		}

		::System::Boolean GMEMLICLJPC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EHMJNMOEENI_GMEMLICLJPC_OFFSET))(this, a1);
		}

		::System::Boolean HDKDELPOLOM(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EHMJNMOEENI_HDKDELPOLOM_OFFSET))(this, a1, a2, a3);
		}

	};
