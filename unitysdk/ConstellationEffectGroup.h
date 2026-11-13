#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class LineRenderer; }
namespace UnityEngine { class Material; }

#define CONSTELLATIONEFFECTGROUP_ADDALLCHILD_OFFSET UNITYSDK_OFFSET(0x19933C60)
#define CONSTELLATIONEFFECTGROUP_BDCNKJAKJCC_OFFSET UNITYSDK_OFFSET(0x19933EC0)
#define CONSTELLATIONEFFECTGROUP_CTOR_OFFSET UNITYSDK_OFFSET(0x19934F20)
#define CONSTELLATIONEFFECTGROUP_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x19933680)
#define CONSTELLATIONEFFECTGROUP_EHOJKDMMFEF_OFFSET UNITYSDK_OFFSET(0x199344B0)
#define CONSTELLATIONEFFECTGROUP_FORCEUPDATE_OFFSET UNITYSDK_OFFSET(0x19933410)
#define CONSTELLATIONEFFECTGROUP_IOKEFGKJLMF_OFFSET UNITYSDK_OFFSET(0x19933460)
#define CONSTELLATIONEFFECTGROUP_ONCCEFAHFLI_OFFSET UNITYSDK_OFFSET(0x199347D0)
#define CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x19934ED0)

inline static constexpr unsigned int ConstellationEffectGroup_TypeDefinitionIndex = 48357;

	class ConstellationEffectGroup : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* StarPrefab; // 0x18
		::UnityEngine::Material* LineMat; // 0x20
		::System::Collections::Generic::List_1<::System::Object*>* StarAnchorList; // 0x28
		::System::Collections::Generic::List_1<::System::Object*>* LineList; // 0x30
		::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* _ConstellationLineRenderer; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _ConstellationStarList; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_CTOR_OFFSET))(this);
		}

		::System::Void ForceUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_FORCEUPDATE_OFFSET))(this);
		}

		::System::Void AddAllChild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_ADDALLCHILD_OFFSET))(this);
		}

		::System::Void BDCNKJAKJCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_BDCNKJAKJCC_OFFSET))(this);
		}

		::System::Void EHOJKDMMFEF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_EHOJKDMMFEF_OFFSET))(this);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void ONCCEFAHFLI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_ONCCEFAHFLI_OFFSET))(this);
		}

		::System::Void IOKEFGKJLMF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_IOKEFGKJLMF_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CONSTELLATIONEFFECTGROUP_UPDATE_OFFSET))(this);
		}

	};
