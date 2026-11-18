#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

class JFBNBOHNJBF;
class LKMHAPGNBKG;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFirstPersonCameraMotionConfig; }

#define IELGDBFHIMK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1013A580)
#define IELGDBFHIMK_MFIIKEGADCB_OFFSET UNITYSDK_OFFSET(0x1013A600)
#define IELGDBFHIMK_NPNALPMMGLE_OFFSET UNITYSDK_OFFSET(0x1013A610)
#define IELGDBFHIMK__CTOR_OFFSET UNITYSDK_OFFSET(0x1013A480)

inline static constexpr unsigned int IELGDBFHIMK_TypeDefinitionIndex = 75572;

class IELGDBFHIMK : public ::System::Object
{
public:
	::LKMHAPGNBKG* MCNBLEAKONG; // 0x10
	::JFBNBOHNJBF* MJKEEOJJDNP; // 0x18
	::System::Boolean CJCBDIILBDG; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig* DFMKILICPFB, ::Foundation::Variable_1<::UnityEngine::Quaternion> BAEBNBNJCDC)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFirstPersonCameraMotionConfig*, ::Foundation::Variable_1<::UnityEngine::Quaternion>))((::PBYTE)hIl2Cpp + IELGDBFHIMK__CTOR_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB, BAEBNBNJCDC);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IELGDBFHIMK_DISPOSE_OFFSET))(this);
	}

	::System::Boolean MFIIKEGADCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IELGDBFHIMK_MFIIKEGADCB_OFFSET))(this);
	}

	::System::Void NPNALPMMGLE(::UnityEngine::Vector2 FMJGOHNLJNA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + IELGDBFHIMK_NPNALPMMGLE_OFFSET))(this, FMJGOHNLJNA);
	}
};
