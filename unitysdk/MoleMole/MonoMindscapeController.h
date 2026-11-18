#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIMindscape; }

#define MOLEMOLE_MONOMINDSCAPECONTROLLER_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x13107BF0)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_DFGBJEIBJJM_OFFSET UNITYSDK_OFFSET(0x13108050)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_GET_ISCORNERSVALID_OFFSET UNITYSDK_OFFSET(0x13107B30)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_GET_REFRECTTRANSFORM_OFFSET UNITYSDK_OFFSET(0x131079A0)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x13107C90)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x13107B90)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x13107C40)
#define MOLEMOLE_MONOMINDSCAPECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13107F60)

namespace MoleMole
{
	inline static constexpr unsigned int MonoMindscapeController_TypeDefinitionIndex = 73698;

	class MonoMindscapeController : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIMindscape*>* controlMindscapeList; // 0x18
		::UnityEngine::RectTransform* refRectTransform; // 0x20
		::Il2CppArray<::UnityEngine::Vector3>* _refWorldCorners; // 0x28
		::System::Int32 mindscapeSlot014; // 0x30
		::System::Int32 mindscapeSlot025; // 0x34
		::System::Int32 mindscapeSlot036; // 0x38
		::System::Int32 targetMindscapeLevel; // 0x3C
		::System::Int32 targetMindscapeSlot; // 0x40
		::System::Single divideLinePosition1; // 0x44
		::System::Single divideLineAngle1; // 0x48
		::System::Boolean divideLineInvert1; // 0x4C
		::System::Byte _padding0[0x3];
		::System::Single divideLinePosition2; // 0x50
		::System::Single divideLineAngle2; // 0x54
		::System::Boolean divideLineInvert2; // 0x58
		::System::Byte _padding1[0x3];
		::System::Single transitionStartLinePosition1; // 0x5C
		::System::Single transitionStartLineAngle1; // 0x60
		::System::Boolean transitionStartLineInvert1; // 0x64
		::System::Byte _padding2[0x3];
		::System::Single transitionEndLinePosition1; // 0x68
		::System::Single transitionEndLineAngle1; // 0x6C
		::System::Boolean transitionEndLineInvert1; // 0x70
		::System::Boolean invertDirection1; // 0x71
		::System::Byte _padding3[0x2];
		::System::Single transitionSoftness1; // 0x74
		::System::Single transitionRate1; // 0x78
		::System::Single transitionLinePosition2; // 0x7C
		::System::Single transitionLineAngle2; // 0x80
		::System::Boolean invertDirection2; // 0x84
		::System::Byte _padding4[0x3];
		::System::Single transitionSoftness2; // 0x88
		::System::Single transitionRate2; // 0x8C
		::System::Single transitionLinePosition3; // 0x90
		::System::Single transitionLineAngle3; // 0x94
		::System::Boolean invertDirection3; // 0x98
		::System::Byte _padding5[0x3];
		::System::Single transitionSoftness3; // 0x9C
		::System::Single transitionRate3; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER__CTOR_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_RefRectTransform()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_GET_REFRECTTRANSFORM_OFFSET))(this);
		}

		::System::Boolean get_IsCornersValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_GET_ISCORNERSVALID_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_START_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void BBOMJDBNHIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_BBOMJDBNHIC_OFFSET))(this);
		}

		::System::Void DFGBJEIBJJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOMINDSCAPECONTROLLER_DFGBJEIBJJM_OFFSET))(this);
		}
	};
}
