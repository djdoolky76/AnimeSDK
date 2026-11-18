#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class DynamicBoneConfigV2;
class DynamicBoneV2;
class DynamicBoneV2_UpdateConfig;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_DYNAMICBONEGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1BA5F940)
#define MOLEMOLE_DYNAMICBONEGROUP_BEJOGNIEBHG_OFFSET UNITYSDK_OFFSET(0x1BA60B30)
#define MOLEMOLE_DYNAMICBONEGROUP_CNHLJBIAJCE_OFFSET UNITYSDK_OFFSET(0x1BA60730)
#define MOLEMOLE_DYNAMICBONEGROUP_EMHNLLIAOOK_OFFSET UNITYSDK_OFFSET(0x1BA60240)
#define MOLEMOLE_DYNAMICBONEGROUP_EMPTY_OFFSET UNITYSDK_OFFSET(0x1BA5FB10)
#define MOLEMOLE_DYNAMICBONEGROUP_GETCOMPONENTSAFELY_OFFSET UNITYSDK_OFFSET(0x1BA5FC20)
#define MOLEMOLE_DYNAMICBONEGROUP_JJJDGABGOCH_OFFSET UNITYSDK_OFFSET(0x1BA603B0)
#define MOLEMOLE_DYNAMICBONEGROUP_LENAIKCKEHH_OFFSET UNITYSDK_OFFSET(0x1BA60D60)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA60430)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALLATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA60620)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA605B0)
#define MOLEMOLE_DYNAMICBONEGROUP_MANUALWAITFORFIXEDUPDATE_OFFSET UNITYSDK_OFFSET(0x1BA60510)
#define MOLEMOLE_DYNAMICBONEGROUP_NABECAKLCIP_OFFSET UNITYSDK_OFFSET(0x1BA60870)
#define MOLEMOLE_DYNAMICBONEGROUP_NEBKJENJCCI_OFFSET UNITYSDK_OFFSET(0x1BA5F9C0)
#define MOLEMOLE_DYNAMICBONEGROUP_OLKHLPAPBCE_OFFSET UNITYSDK_OFFSET(0x1BA5FA70)
#define MOLEMOLE_DYNAMICBONEGROUP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1BA60010)
#define MOLEMOLE_DYNAMICBONEGROUP_ONDYNAMICBONEDATAREADY_OFFSET UNITYSDK_OFFSET(0x1BA60920)
#define MOLEMOLE_DYNAMICBONEGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1BA5FD50)
#define MOLEMOLE_DYNAMICBONEGROUP_PLOGFPOKMJI_OFFSET UNITYSDK_OFFSET(0x1BA5FF20)
#define MOLEMOLE_DYNAMICBONEGROUP_START_OFFSET UNITYSDK_OFFSET(0x1BA5FA10)
#define MOLEMOLE_DYNAMICBONEGROUP_SWITCHLOD_OFFSET UNITYSDK_OFFSET(0x1BA606C0)
#define MOLEMOLE_DYNAMICBONEGROUP_TRYSYNCTIMESCALE_OFFSET UNITYSDK_OFFSET(0x1BA602E0)
#define MOLEMOLE_DYNAMICBONEGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BA60A90)
#define MOLEMOLE_DYNAMICBONEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA609F0)

namespace MoleMole
{
	inline static constexpr unsigned int DynamicBoneGroup_TypeDefinitionIndex = 83899;

	class DynamicBoneGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicBoneGroup*>** StaticGet_MBNFHLPNEJH()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::DynamicBoneGroup*>**)Il2CppClass::FromTypeDefinitionIndex(DynamicBoneGroup_TypeDefinitionIndex)->GetStaticField(0x50BE0);
		}
		::System::Boolean CPMBKPDNKBF; // 0x18
		::System::Boolean ADOCADJOKKC; // 0x19
		::System::Byte _padding0[0x6];
		::Il2CppArray<::DynamicBoneV2*>* dynamicBones; // 0x20
		::Il2CppArray<::System::Object*>* transformConfigs; // 0x28
		::System::String* configKey; // 0x30
		::DynamicBoneConfigV2* config; // 0x38
		::DynamicBoneV2_UpdateConfig* updateConfig; // 0x40
		::System::Single timescale; // 0x48
		::System::Boolean MGDDGHAAOEK; // 0x4C
		::System::Boolean BHENCHFLDMM; // 0x4D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP__CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_AWAKE_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_START_OFFSET))(this);
		}

		static ::System::Void Empty()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_EMPTY_OFFSET))();
		}

		static ::MoleMole::DynamicBoneGroup* GetComponentSafely(::System::Int32 HLJEFIIDMFA)
		{
			return ((::MoleMole::DynamicBoneGroup*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_GETCOMPONENTSAFELY_OFFSET))(HLJEFIIDMFA);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONDISABLE_OFFSET))(this);
		}

		::System::Void TrySyncTimeScale(::System::Single CAOPDAMCNCN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_TRYSYNCTIMESCALE_OFFSET))(this, CAOPDAMCNCN);
		}

		::System::Void ManualFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualWaitForFixedUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALWAITFORFIXEDUPDATE_OFFSET))(this);
		}

		::System::Void ManualUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALUPDATE_OFFSET))(this);
		}

		::System::Void ManualLateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_MANUALLATEUPDATE_OFFSET))(this);
		}

		static ::System::Void SwitchLOD(::MoleMole::DynamicBoneGroup* PBFNCLJCBIK, ::MoleMole::DynamicBoneGroup* EAFGJPMIOLL)
		{
			return ((::System::Void(*)(::MoleMole::DynamicBoneGroup*, ::MoleMole::DynamicBoneGroup*))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_SWITCHLOD_OFFSET))(PBFNCLJCBIK, EAFGJPMIOLL);
		}

		::System::Void OnDynamicBoneDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_ONDYNAMICBONEDATAREADY_OFFSET))(this);
		}

		::System::Void JJJDGABGOCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_JJJDGABGOCH_OFFSET))(this);
		}

		::System::Void PLOGFPOKMJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_PLOGFPOKMJI_OFFSET))(this);
		}

		::System::Void NABECAKLCIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_NABECAKLCIP_OFFSET))(this);
		}

		::System::Void OLKHLPAPBCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_OLKHLPAPBCE_OFFSET))(this);
		}

		::System::Void CNHLJBIAJCE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_CNHLJBIAJCE_OFFSET))(this);
		}

		::System::Void EMHNLLIAOOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_EMHNLLIAOOK_OFFSET))(this);
		}

		::System::Void LENAIKCKEHH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_LENAIKCKEHH_OFFSET))(this);
		}

		::System::Boolean BEJOGNIEBHG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_BEJOGNIEBHG_OFFSET))(this);
		}

		::System::Void NEBKJENJCCI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DYNAMICBONEGROUP_NEBKJENJCCI_OFFSET))(this);
		}
	};
}
