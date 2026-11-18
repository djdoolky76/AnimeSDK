#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class GLNLDCFEGNN;
namespace MoleMole { class Mono2dMapData_IconInfo; }

#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IOKPMOAFLAE_KJPHHGMCAFN_OFFSET UNITYSDK_OFFSET(0x180F6D70)
#define MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IOKPMOAFLAE__CTOR_OFFSET UNITYSDK_OFFSET(0x180F6D60)

namespace MoleMole
{
	inline static constexpr unsigned int Mono2dMapData_IconInfoGroup_IOKPMOAFLAE_TypeDefinitionIndex = 75763;

	class Mono2dMapData_IconInfoGroup_IOKPMOAFLAE : public ::System::Object
	{
	public:
		::GLNLDCFEGNN* IPMMCGDMODG; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IOKPMOAFLAE__CTOR_OFFSET))(this);
		}

		::System::Boolean KJPHHGMCAFN(::MoleMole::Mono2dMapData_IconInfo* HMMMOCJAEOA)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Mono2dMapData_IconInfo*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONO2DMAPDATA_ICONINFOGROUP_IOKPMOAFLAE_KJPHHGMCAFN_OFFSET))(this, HMMMOCJAEOA);
		}
	};
}
