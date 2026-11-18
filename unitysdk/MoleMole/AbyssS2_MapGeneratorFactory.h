#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class AbyssS2_GenRouteMapConfig; }
namespace MoleMole { class AbyssS2_IMapGenerator; }

#define MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_CREATEGENERATOR_OFFSET UNITYSDK_OFFSET(0x10790E60)
#define MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_TEST_OFFSET UNITYSDK_OFFSET(0x10790E20)

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_MapGeneratorFactory_TypeDefinitionIndex = 93064;

	class AbyssS2_MapGeneratorFactory : public ::System::Object
	{
	public:
		static ::System::Void Test()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_TEST_OFFSET))();
		}

		static ::MoleMole::AbyssS2_IMapGenerator* CreateGenerator(::MoleMole::AbyssS2_GenRouteMapConfig* inConfig)
		{
			return ((::MoleMole::AbyssS2_IMapGenerator*(*)(::MoleMole::AbyssS2_GenRouteMapConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_ABYSSS2_MAPGENERATORFACTORY_CREATEGENERATOR_OFFSET))(inConfig);
		}
	};
}
