#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoSceneMap3DConfig.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class NewMonoSceneMap3DConfig_NewConfig; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_AGLLIINEKEN_OFFSET UNITYSDK_OFFSET(0x1B935090)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_KHCNOMOFKJF_OFFSET UNITYSDK_OFFSET(0x1B9357F0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_PROCESSNEWCONFIG_OFFSET UNITYSDK_OFFSET(0x1B9344E0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET UNITYSDK_OFFSET(0x1B934DC0)
#define MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B935780)

namespace MoleMole::Config
{
	inline static constexpr unsigned int NewMonoSceneMap3DConfig_TypeDefinitionIndex = 45116;

	class NewMonoSceneMap3DConfig : public ::MonoSceneMap3DConfig
	{
	public:
		::MoleMole::Config::NewMonoSceneMap3DConfig_NewConfig* ConfigData; // 0x1B8
		::System::Int32 AIAPCIHFGJG; // 0x1C0
		::UnityEngine::Bounds EINKJFMDDFI; // 0x1C4
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* DCNODAGBFPA; // 0x1E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void ProcessNewConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_PROCESSNEWCONFIG_OFFSET))(this);
		}

		::System::Void SetCurrentLayerCenterAndHeight(::UnityEngine::Vector3 LNOPEKOIIMP, ::UnityEngine::Vector3 OAGCOALHFHK, ::System::Int32 EEGBEFGJJBM, ::System::Collections::Generic::List_1<::System::Object*>* HLEKONAIANN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_SETCURRENTLAYERCENTERANDHEIGHT_OFFSET))(this, LNOPEKOIIMP, OAGCOALHFHK, EEGBEFGJJBM, HLEKONAIANN);
		}

		::System::Void KHCNOMOFKJF(::UnityEngine::Vector3 MIALFKCCCPI, ::UnityEngine::Vector3 KMGKAIDEIBA, ::System::Int32 FDHMCIFPNCK, ::System::Collections::Generic::List_1<::System::Object*>* MPBJAGIKPJM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_KHCNOMOFKJF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK, MPBJAGIKPJM);
		}

		::System::Void AGLLIINEKEN(::UnityEngine::Bounds GOFCNJELMHH, ::System::Int32 EEGBEFGJJBM, ::System::Collections::Generic::List_1<::System::Object*>* HLEKONAIANN)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Bounds, ::System::Int32, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_NEWMONOSCENEMAP3DCONFIG_AGLLIINEKEN_OFFSET))(this, GOFCNJELMHH, EEGBEFGJJBM, HLEKONAIANN);
		}
	};
}
