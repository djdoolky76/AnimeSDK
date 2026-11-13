#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GridFightPreparationEffectSource_SourceType.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF36620)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM1_OFFSET UNITYSDK_OFFSET(0x1DF36A90)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM2_OFFSET UNITYSDK_OFFSET(0x1DF36B10)
#define RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM3_OFFSET UNITYSDK_OFFSET(0x1DF36B90)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightPreparationEffectSource_TypeDefinitionIndex = 66023;

	class GridFightPreparationEffectSource : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* Params; // 0x10
		::RPG::Client::GridFightPreparationEffectSource_SourceType Source; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_CTOR_OFFSET))(this);
		}

		::System::UInt32 get_Param1()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM1_OFFSET))(this);
		}

		::System::UInt32 get_Param2()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM2_OFFSET))(this);
		}

		::System::UInt32 get_Param3()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTPREPARATIONEFFECTSOURCE_GET_PARAM3_OFFSET))(this);
		}

	};
}
