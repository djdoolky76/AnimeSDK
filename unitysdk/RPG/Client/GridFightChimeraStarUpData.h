#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define RPG_CLIENT_GRIDFIGHTCHIMERASTARUPDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58F750)

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightChimeraStarUpData_TypeDefinitionIndex = 67156;

	class GridFightChimeraStarUpData : public ::System::Object
	{
	public:
		::System::Int32 Index; // 0x10
		::UnityEngine::Vector3 SelectPurchaseStartPos; // 0x14
		::System::Boolean FromSelectPurchase; // 0x20
		::System::Boolean GainAll; // 0x21
		::System::Boolean IsNew; // 0x22
		::System::Byte _padding0[0x1];
		::System::UInt32 Star; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_GRIDFIGHTCHIMERASTARUPDATA_CTOR_OFFSET))(this);
		}

	};
}
