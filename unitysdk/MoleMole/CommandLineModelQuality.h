#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"

namespace MoleMole { class ModelQualityProfileContext; }
namespace System { class Object; }

#define MOLEMOLE_COMMANDLINEMODELQUALITY_ALEKEEINDAO_OFFSET UNITYSDK_OFFSET(0xFFC5550)
#define MOLEMOLE_COMMANDLINEMODELQUALITY_PMKOMFHNKOE_OFFSET UNITYSDK_OFFSET(0xFFC5680)
#define MOLEMOLE_COMMANDLINEMODELQUALITY__CTOR_OFFSET UNITYSDK_OFFSET(0xFFC5640)

namespace MoleMole
{
	inline static constexpr unsigned int CommandLineModelQuality_TypeDefinitionIndex = 63221;

	class CommandLineModelQuality
	{
	public:
		::System::Nullable_1<::System::Object*> BodyModelLodLevel; // 0x18
		::System::Nullable_1<::System::Object*> FaceModelLodLevel; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY__CTOR_OFFSET))(this);
		}

		::MoleMole::CommandLineModelQuality* ALEKEEINDAO(::MoleMole::ModelQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::CommandLineModelQuality*(*)(::PVOID, ::MoleMole::ModelQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY_ALEKEEINDAO_OFFSET))(this, LJBPECKCCEA);
		}

		::MoleMole::ModelQualityProfileContext* PMKOMFHNKOE(::MoleMole::ModelQualityProfileContext* LJBPECKCCEA)
		{
			return ((::MoleMole::ModelQualityProfileContext*(*)(::PVOID, ::MoleMole::ModelQualityProfileContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_COMMANDLINEMODELQUALITY_PMKOMFHNKOE_OFFSET))(this, LJBPECKCCEA);
		}
	};
}
