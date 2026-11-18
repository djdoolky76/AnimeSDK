#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlatBuffers/Config/BabelTowerFloorInfoTemplate.h"
#include "unitysdk/LNJCBANNCDL.h"

class KGBFLHNJHHN;

#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETDAMAGESCOREBASE_OFFSET UNITYSDK_OFFSET(0x1D0BEFB0)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATHPFINALSCOREPERCENTAGE_OFFSET UNITYSDK_OFFSET(0x1D0BF010)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATTIMEFINALSCOREMULTIPLIER_OFFSET UNITYSDK_OFFSET(0x1D0BF070)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CCTOR_OFFSET UNITYSDK_OFFSET(0x1D0BF260)
#define MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0BEFA0)

namespace MoleMole::Project::Config
{
	inline static constexpr unsigned int BabelFloorInfoTemplateExt_TypeDefinitionIndex = 11612;

	class BabelFloorInfoTemplateExt : public ::MoleMole::FlatBuffers::Config::BabelTowerFloorInfoTemplate
	{
	public:
		static ::System::Int32* StaticGet_HundredThousandDivisor()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(BabelFloorInfoTemplateExt_TypeDefinitionIndex)->GetStaticField(0x3DF0);
		}

		::System::Void _ctor(::LNJCBANNCDL data, ::KGBFLHNJHHN* notify)
		{
			return ((::System::Void(*)(::PVOID, ::LNJCBANNCDL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CTOR_OFFSET))(this, data, notify);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT__CCTOR_OFFSET))();
		}

		::System::Single GetDamageScoreBase()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETDAMAGESCOREBASE_OFFSET))(this);
		}

		::System::Single GetFloatHpFinalScorePercentage()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATHPFINALSCOREPERCENTAGE_OFFSET))(this);
		}

		::System::Single GetFloatTimeFinalScoreMultiplier(::System::Single time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_PROJECT_CONFIG_BABELFLOORINFOTEMPLATEEXT_GETFLOATTIMEFINALSCOREMULTIPLIER_OFFSET))(this, time);
		}
	};
}
