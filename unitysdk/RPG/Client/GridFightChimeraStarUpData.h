#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERASTARUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xDA90CA0)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraStarUpData_TypeDefinitionIndex = 67156;

	class GridFightChimeraStarUpData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 SelectPurchaseStartPos; // 0x10
		::System::Boolean FromSelectPurchase; // 0x1C
		::System::Boolean IsNew; // 0x1D
		::System::Boolean GainAll; // 0x1E
		::System::Byte _padding0[0x1];
		::System::Int32 Index; // 0x20
		::System::UInt32 Star; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASTARUPDATA_CTOR_OFFSET))(this);
		}

	};
}
