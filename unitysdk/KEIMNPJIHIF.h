#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BEMKNPIFMBI.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class OONGDLIDJJJ;
namespace RPG::GameCore { class CheckSkillUsabilityAxis; }

#define KEIMNPJIHIF_CTOR_OFFSET UNITYSDK_OFFSET(0xB37B750)
#define KEIMNPJIHIF_DECJJKDJKHK_OFFSET UNITYSDK_OFFSET(0xB37B960)
#define KEIMNPJIHIF_JIPKLCDFGNE_OFFSET UNITYSDK_OFFSET(0xB37BA30)
#define KEIMNPJIHIF_MNAKIEOGPDK_OFFSET UNITYSDK_OFFSET(0xB37B760)
#define KEIMNPJIHIF_OHEGIKMCAFN_OFFSET UNITYSDK_OFFSET(0xB37B810)

inline static constexpr unsigned int KEIMNPJIHIF_TypeDefinitionIndex = 54373;

	class KEIMNPJIHIF : public ::BEMKNPIFMBI
	{
	public:
		::RPG::GameCore::CheckSkillUsabilityAxis* IGHAHBNLIJA; // 0x18
		::System::Void _ctor(::RPG::GameCore::CheckSkillUsabilityAxis* a1, ::OONGDLIDJJJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CheckSkillUsabilityAxis*, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + KEIMNPJIHIF_CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint MNAKIEOGPDK()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + KEIMNPJIHIF_MNAKIEOGPDK_OFFSET))(this);
		}

		::System::Boolean OHEGIKMCAFN(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + KEIMNPJIHIF_OHEGIKMCAFN_OFFSET))(this, a1);
		}

		::System::Boolean DECJJKDJKHK(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + KEIMNPJIHIF_DECJJKDJKHK_OFFSET))(this, a1);
		}

		::System::Boolean JIPKLCDFGNE(::OONGDLIDJJJ* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::OONGDLIDJJJ*))((::PBYTE)hIl2Cpp + KEIMNPJIHIF_JIPKLCDFGNE_OFFSET))(this, a1);
		}

	};
