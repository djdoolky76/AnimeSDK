#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SceneObjectStateWidget; }

#define HGNHNNMDBPB_CMDAEPILNIH_ODPMLMAOEIO_OFFSET UNITYSDK_OFFSET(0x101039F0)
#define HGNHNNMDBPB_CMDAEPILNIH__CTOR_OFFSET UNITYSDK_OFFSET(0x101039E0)

inline static constexpr unsigned int HGNHNNMDBPB_CMDAEPILNIH_TypeDefinitionIndex = 51526;

class HGNHNNMDBPB_CMDAEPILNIH : public ::System::Object
{
public:
	::MoleMole::SceneObjectStateWidget* EIFONLCJOPG; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_CMDAEPILNIH__CTOR_OFFSET))(this);
	}

	::System::Boolean ODPMLMAOEIO(::MoleMole::SceneObjectStateWidget* PELAJIFDIPN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::SceneObjectStateWidget*))((::PBYTE)hIl2Cpp + HGNHNNMDBPB_CMDAEPILNIH_ODPMLMAOEIO_OFFSET))(this, PELAJIFDIPN);
	}
};
