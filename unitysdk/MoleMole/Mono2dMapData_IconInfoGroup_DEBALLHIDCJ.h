#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFAJPAIGMIP;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_DEBALLHIDCJ_DNEHPEMNJCJ_OFFSET UNITYSDK_OFFSET(0x14AF6AA0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_DEBALLHIDCJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14AF6A90)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_DEBALLHIDCJ_TypeDefinitionIndex = 75765;

	class Mono2dMapData_IconInfoGroup_DEBALLHIDCJ : public ::System::Object
	{
	public:
		::LFAJPAIGMIP* IPMMCGDMODG; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_DEBALLHIDCJ__CTOR_OFFSET))(this);
		}

		::System::Boolean DNEHPEMNJCJ(::MoleMole::Mono2dMapData_IconInfo* HMMMOCJAEOA)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Mono2dMapData_IconInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_DEBALLHIDCJ_DNEHPEMNJCJ_OFFSET))(this, HMMMOCJAEOA);
		}
	};
}
