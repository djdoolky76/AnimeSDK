#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FCCJJOFALCD.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class DownloadFileInfo; }

#define GFAPACGJCME_CKGGDBACLJH_IGGKDLKMCCA_OFFSET UNITYSDK_OFFSET(0x149C0BF0)
#define GFAPACGJCME_CKGGDBACLJH__CTOR_OFFSET UNITYSDK_OFFSET(0x149C0BE0)

inline static constexpr unsigned int GFAPACGJCME_CKGGDBACLJH_TypeDefinitionIndex = 86885;

class GFAPACGJCME_CKGGDBACLJH : public ::System::Object
{
public:
	::Il2CppArray<::FCCJJOFALCD>* DJNNKLJBFOD; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFAPACGJCME_CKGGDBACLJH__CTOR_OFFSET))(this);
	}

	::System::Boolean IGGKDLKMCCA(::MoleMole::DownloadFileInfo* HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::DownloadFileInfo*))((::PBYTE)hIl2Cpp + GFAPACGJCME_CKGGDBACLJH_IGGKDLKMCCA_OFFSET))(this, HAAEBCOBKFF);
	}
};
