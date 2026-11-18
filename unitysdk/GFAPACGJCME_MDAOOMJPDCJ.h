#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }
namespace System { class String; }

#define GFAPACGJCME_MDAOOMJPDCJ_EHNHBGLPIGK_OFFSET UNITYSDK_OFFSET(0x10EEB390)
#define GFAPACGJCME_MDAOOMJPDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x10EEB380)

inline static constexpr unsigned int GFAPACGJCME_MDAOOMJPDCJ_TypeDefinitionIndex = 86891;

class GFAPACGJCME_MDAOOMJPDCJ : public ::System::Object
{
public:
	::System::String* MIDOEMOLNFP; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_MDAOOMJPDCJ__CTOR_OFFSET))(this);
	}

	::System::Boolean EHNHBGLPIGK(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_MDAOOMJPDCJ_EHNHBGLPIGK_OFFSET))(this, HAAEBCOBKFF);
	}
};
