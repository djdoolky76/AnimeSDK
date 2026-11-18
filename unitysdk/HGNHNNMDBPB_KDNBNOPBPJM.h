#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SceneObjectStateWidget; }

#define HGNHNNMDBPB_KDNBNOPBPJM_OHKIMIGDPCM_OFFSET UNITYSDK_OFFSET(0x110196A0)
#define HGNHNNMDBPB_KDNBNOPBPJM__CTOR_OFFSET UNITYSDK_OFFSET(0x11019690)

inline static constexpr unsigned int HGNHNNMDBPB_KDNBNOPBPJM_TypeDefinitionIndex = 51525;

class HGNHNNMDBPB_KDNBNOPBPJM : public ::System::Object
{
public:
	::MoleMole::SceneObjectStateWidget* EIFONLCJOPG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_KDNBNOPBPJM__CTOR_OFFSET))(this);
	}

	::System::Boolean OHKIMIGDPCM(::MoleMole::SceneObjectStateWidget* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_KDNBNOPBPJM_OHKIMIGDPCM_OFFSET))(this, PELAJIFDIPN);
	}
};
