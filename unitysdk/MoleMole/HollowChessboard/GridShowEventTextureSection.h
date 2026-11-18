#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;

#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x180EE4B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x180EE5B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x180EE5A0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GridShowEventTextureSection_TypeDefinitionIndex = 61015;

	class GridShowEventTextureSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(GridShowEventTextureSection_TypeDefinitionIndex)->GetStaticField(0x13AE0);
		}
		::System::Int32 IconTextureId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_GRIDSHOWEVENTTEXTURESECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
