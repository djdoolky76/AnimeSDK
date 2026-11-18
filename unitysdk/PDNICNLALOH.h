#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"

class FCJABCFLEMP;
class JFBNBOHNJBF;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Photo { class ScopedFrontCameraControlMotionConfig; }

#define PDNICNLALOH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1A7EBA10)
#define PDNICNLALOH_DNEPEJMOMCL_OFFSET UNITYSDK_OFFSET(0x1A7EBBE0)
#define PDNICNLALOH_MFIIKEGADCB_OFFSET UNITYSDK_OFFSET(0x1A7EBBA0)
#define PDNICNLALOH_NNMKCIHJMAA_OFFSET UNITYSDK_OFFSET(0x1A7EBB60)
#define PDNICNLALOH_NPNALPMMGLE_OFFSET UNITYSDK_OFFSET(0x1A7EBA90)
#define PDNICNLALOH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7EB950)

inline static constexpr unsigned int PDNICNLALOH_TypeDefinitionIndex = 50590;

class PDNICNLALOH : public ::System::Object
{
public:
	::JFBNBOHNJBF* MJKEEOJJDNP; // 0x10
	::FCJABCFLEMP* MCNBLEAKONG; // 0x18
	::System::Boolean CJCBDIILBDG; // 0x20

	::System::Void _ctor(::MoleMole::Battle::Entity* KECKGDFIALJ, ::MoleMole::Photo::ScopedFrontCameraControlMotionConfig* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Photo::ScopedFrontCameraControlMotionConfig*))((::PBYTE)hIl2Cpp + PDNICNLALOH__CTOR_OFFSET))(this, KECKGDFIALJ, DFMKILICPFB);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNICNLALOH_DISPOSE_OFFSET))(this);
	}

	::System::Void NPNALPMMGLE(::UnityEngine::Vector2 FMJGOHNLJNA)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PDNICNLALOH_NPNALPMMGLE_OFFSET))(this, FMJGOHNLJNA);
	}

	::System::Void NNMKCIHJMAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNICNLALOH_NNMKCIHJMAA_OFFSET))(this);
	}

	::System::Boolean MFIIKEGADCB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PDNICNLALOH_MFIIKEGADCB_OFFSET))(this);
	}

	::System::Void DNEPEJMOMCL(::System::Single HLFFCMIFFIB)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PDNICNLALOH_DNEPEJMOMCL_OFFSET))(this, HLFFCMIFFIB);
	}
};
