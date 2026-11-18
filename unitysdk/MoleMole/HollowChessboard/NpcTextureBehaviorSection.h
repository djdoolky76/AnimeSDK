#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;
namespace System { class String; }

#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14670450)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x146704F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x146704E0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int NpcTextureBehaviorSection_TypeDefinitionIndex = 55360;

	class NpcTextureBehaviorSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(NpcTextureBehaviorSection_TypeDefinitionIndex)->GetStaticField(0x119F0);
		}
		::System::String* npcBehavior; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_NPCTEXTUREBEHAVIORSECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
