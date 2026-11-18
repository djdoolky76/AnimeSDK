#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LFAJPAIGMIP;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OMMEGMFLLEG_KIHOABKMOIA_OFFSET UNITYSDK_OFFSET(0x10D371F0)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OMMEGMFLLEG__CTOR_OFFSET UNITYSDK_OFFSET(0x10D371E0)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_OMMEGMFLLEG_TypeDefinitionIndex = 75762;

	class Mono2dMapData_IconInfoGroup_OMMEGMFLLEG : public ::System::Object
	{
	public:
		::MoleMole::Mono2dMapData_IconInfo* PDDNPOMOOFH; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OMMEGMFLLEG__CTOR_OFFSET))(this);
		}

		::System::Boolean KIHOABKMOIA(::LFAJPAIGMIP* LILKIGNNLAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::LFAJPAIGMIP*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_OMMEGMFLLEG_KIHOABKMOIA_OFFSET))(this, LILKIGNNLAJ);
		}
	};
}
