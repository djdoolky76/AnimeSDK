#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/BaseMeshEffect.h"

namespace UnityEngine::UI { class VertexHelper; }

#define MOLEMOLE_UGUIEXTENSIONS_TILT_MODIFYMESH_OFFSET UNITYSDK_OFFSET(0x162FD2E0)
#define MOLEMOLE_UGUIEXTENSIONS_TILT__CTOR_OFFSET UNITYSDK_OFFSET(0x162FD230)

namespace MoleMole::UGUIExtensions
{
	inline static constexpr unsigned int Tilt_TypeDefinitionIndex = 49334;

	class Tilt : public ::UnityEngine::UI::BaseMeshEffect
	{
	public:
		::System::Single degree; // 0x20
		::System::Boolean filterModifyByLanguageTh; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_TILT__CTOR_OFFSET))(this);
		}

		::System::Void ModifyMesh(::UnityEngine::UI::VertexHelper* KKHICLCLGDM)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::VertexHelper*))((::PBYTE)hIl2Cpp + MOLEMOLE_UGUIEXTENSIONS_TILT_MODIFYMESH_OFFSET))(this, KKHICLCLGDM);
		}
	};
}
