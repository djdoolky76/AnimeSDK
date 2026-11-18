#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SkinMapAnimationClipData; }
namespace System { class Action; }

#define PDMLODMILCE_PDNNAMBIJLA_OKKMJKOAIKG_OFFSET UNITYSDK_OFFSET(0x13A8AE80)
#define PDMLODMILCE_PDNNAMBIJLA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A8AE70)

inline static constexpr unsigned int PDMLODMILCE_PDNNAMBIJLA_TypeDefinitionIndex = 83369;

class PDMLODMILCE_PDNNAMBIJLA : public ::System::Object
{
public:
	::System::Action* IBNICCGMILF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDMLODMILCE_PDNNAMBIJLA__CTOR_OFFSET))(this);
	}

	::System::Void OKKMJKOAIKG(::MoleMole::SkinMapAnimationClipData* JIJMHBJLJMO)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::SkinMapAnimationClipData*))((::PBYTE)hIl2Cpp + PDMLODMILCE_PDNNAMBIJLA_OKKMJKOAIKG_OFFSET))(this, JIJMHBJLJMO);
	}
};
