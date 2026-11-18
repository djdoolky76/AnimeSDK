#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;
namespace MoleMole::HollowChessboard { class SceneAnimRenderSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x130E09A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_GETRELATIVESCREENLAYER_OFFSET UNITYSDK_OFFSET(0x130E0A50)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E0AA0)
#define MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x130E0A90)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int SceneAnimRenderSection_TypeDefinitionIndex = 58151;

	class SceneAnimRenderSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(SceneAnimRenderSection_TypeDefinitionIndex)->GetStaticField(0xB190);
		}
		::MoleMole::HollowChessboard::SceneAnimRenderSection_Config* SectionConfig; // 0x10
		::System::Int32 screenIndex; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}

		::System::Int32 GetRelativeScreenLayer()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_SCENEANIMRENDERSECTION_GETRELATIVESCREENLAYER_OFFSET))(this);
		}
	};
}
