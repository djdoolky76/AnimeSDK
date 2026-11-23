#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/ED91E1C6E484CE96.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

#define BDE8451D4F8A61A7_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x250DE40)
#define BDE8451D4F8A61A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int BDE8451D4F8A61A7_TypeDefinitionIndex = 5204;

class BDE8451D4F8A61A7 : public ::System::Object
{
public:
	::E68AA4EB51923C98::ED91E1C6E484CE96 E32F8427C33E0D1B; // 0x10
	::System::Single E363EA37455F01AD; // 0x14
	::System::Single A250D85174CDB7FC; // 0x18
	::System::Single E79BEEFBE9F1B171; // 0x1C
	::UnityEngine::Vector3 FD149A3AB6475203; // 0x20
	::UnityEngine::Vector3 E46DAF876F54C854; // 0x2C
	::System::Single B1300842B517BA59; // 0x38
	::System::Single AE9A54B768487B22; // 0x3C
	::System::Single B17B9B9C54637FC1; // 0x40
	::System::Single BA676117252D00A4; // 0x44

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDE8451D4F8A61A7__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::BDE8451D4F8A61A7*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::BDE8451D4F8A61A7*&))((::PBYTE)hIl2Cpp + BDE8451D4F8A61A7_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
