#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"

namespace UnityEngine { class Transform; }

#define DLPCMDPJAOM_AFDDALJKNPH_JHIJLNJECKO_OFFSET UNITYSDK_OFFSET(0x1A1F8040)
#define DLPCMDPJAOM_AFDDALJKNPH_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x1A1F80A0)
#define DLPCMDPJAOM_AFDDALJKNPH_OKLLFEIJKHN_OFFSET UNITYSDK_OFFSET(0x1A1F8130)
#define DLPCMDPJAOM_AFDDALJKNPH__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1F7F40)

inline static constexpr unsigned int DLPCMDPJAOM_AFDDALJKNPH_TypeDefinitionIndex = 89043;

class DLPCMDPJAOM_AFDDALJKNPH : public ::System::Object
{
public:
	::UnityEngine::Transform* ACDOKEGBJAO; // 0x10
	::UnityEngine::Vector3 JAHGKHFOFLF; // 0x18

	::System::Void _ctor(::Foundation::ViewObject::ViewObjectHandle AMNIHACKELI)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::ViewObject::ViewObjectHandle))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_AFDDALJKNPH__CTOR_OFFSET))(this, AMNIHACKELI);
	}

	::UnityEngine::Vector3 JHIJLNJECKO()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_AFDDALJKNPH_JHIJLNJECKO_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single HFFCOJCKIBD, ::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_AFDDALJKNPH_OKJCHFGIKBH_OFFSET))(this, HFFCOJCKIBD, OHOGDOMNHNK);
	}

	::System::Void OKLLFEIJKHN(::UnityEngine::Vector3 OHOGDOMNHNK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DLPCMDPJAOM_AFDDALJKNPH_OKLLFEIJKHN_OFFSET))(this, OHOGDOMNHNK);
	}
};
