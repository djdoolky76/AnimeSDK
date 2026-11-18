#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLNLDCFEGNN;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_HHLNLKADDJI_HKJIPEBPHBB_OFFSET UNITYSDK_OFFSET(0x135B2860)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_HHLNLKADDJI__CTOR_OFFSET UNITYSDK_OFFSET(0x135B1620)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_HHLNLKADDJI_TypeDefinitionIndex = 75764;

	class Mono2dMapData_IconInfoGroup_HHLNLKADDJI : public ::System::Object
	{
	public:
		::MoleMole::Mono2dMapData_IconInfo* PDDNPOMOOFH; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_HHLNLKADDJI__CTOR_OFFSET))(this);
		}

		::System::Boolean HKJIPEBPHBB(::GLNLDCFEGNN* LILKIGNNLAJ)
		{
			return ((::System::Boolean(*)(::PVOID, ::GLNLDCFEGNN*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_HHLNLKADDJI_HKJIPEBPHBB_OFFSET))(this, LILKIGNNLAJ);
		}
	};
}
