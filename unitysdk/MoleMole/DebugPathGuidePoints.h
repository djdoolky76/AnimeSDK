#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/MaskableGraphic.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace UnityEngine::UI { class VertexHelper; }
namespace UnityEngine::UI::Extension { class PathGuide; }

#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x1B456CD0)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_GOKBADGGEMB_OFFSET UNITYSDK_OFFSET(0x1B4571E0)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_ONPOPULATEMESH_OFFSET UNITYSDK_OFFSET(0x1B456730)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS_UPDATE_OFFSET UNITYSDK_OFFSET(0x1B457010)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B4570D0)
#define MOLEMOLE_DEBUGPATHGUIDEPOINTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4570C0)

namespace MoleMole
{
	inline static constexpr unsigned int DebugPathGuidePoints_TypeDefinitionIndex = 86133;

	class DebugPathGuidePoints : public ::UnityEngine::UI::MaskableGraphic
	{
	public:
		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_NDHALEOBPJE()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)Il2CppClass::FromTypeDefinitionIndex(DebugPathGuidePoints_TypeDefinitionIndex)->GetStaticField(0x48700);
		}
		::UnityEngine::UI::Extension::PathGuide* PathGuideComponent; // 0xF8
		::UnityEngine::UI::Extension::PathGuide* DFEBIAKDBCG; // 0x100

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS__CCTOR_OFFSET))();
		}

		::System::Void OnPopulateMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_ONPOPULATEMESH_OFFSET))(this, KKHICLCLGDM);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_UPDATE_OFFSET))(this);
		}

		::System::Void GOKBADGGEMB(::UnityEngine::UI::VertexHelper* MIALFKCCCPI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_GOKBADGGEMB_OFFSET))(this, MIALFKCCCPI);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DEBUGPATHGUIDEPOINTS_BBOMJDBNHIC_OFFSET))(this);
		}
	};
}
