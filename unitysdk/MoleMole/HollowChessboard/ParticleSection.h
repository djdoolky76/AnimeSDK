#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/RenderSequenceSectionType.h"
#include "unitysdk/System/Object.h"

class DENGNOJFDLA;
class DGNONKNGLMJ;
namespace MoleMole::HollowChessboard { class ParticleSection_Config; }

#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x13EEA460)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CCTOR_OFFSET UNITYSDK_OFFSET(0x13EEA500)
#define MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x13EEA4F0)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ParticleSection_TypeDefinitionIndex = 63449;

	class ParticleSection : public ::System::Object
	{
	public:
		static ::MoleMole::HollowChessboard::RenderSequenceSectionType* StaticGet_SectionType()
		{
			return (::MoleMole::HollowChessboard::RenderSequenceSectionType*)Il2CppClass::FromTypeDefinitionIndex(ParticleSection_TypeDefinitionIndex)->GetStaticField(0x11500);
		}
		::MoleMole::HollowChessboard::ParticleSection_Config* ParticleConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION__CCTOR_OFFSET))();
		}

		::DGNONKNGLMJ* CreateInstance(::DENGNOJFDLA* context)
		{
			return ((::DGNONKNGLMJ*(*)(::PVOID, ::DENGNOJFDLA*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_PARTICLESECTION_CREATEINSTANCE_OFFSET))(this, context);
		}
	};
}
