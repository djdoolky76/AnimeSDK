#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/E1249778E5AD2EA2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ABADEC2D24126A14_A1F4FECAB5448E2C_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define ABADEC2D24126A14_B6BDFC40DC9BAE78_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define ABADEC2D24126A14_E74F4AC110DDBC1D_OFFSET UNITYSDK_OFFSET(0x1873310)
#define ABADEC2D24126A14_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x24694E0)
#define ABADEC2D24126A14__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int ABADEC2D24126A14_TypeDefinitionIndex = 4442;

class ABADEC2D24126A14 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E1249778E5AD2EA2, ::System::Boolean>* FD7A7A3C9DE3E962; // 0x10
	::System::Boolean F4FCD7678ECB1957; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADEC2D24126A14__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::ABADEC2D24126A14*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::ABADEC2D24126A14*&))((::PBYTE)hIl2Cpp + ABADEC2D24126A14_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void B6BDFC40DC9BAE78(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E1249778E5AD2EA2, ::System::Boolean>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E1249778E5AD2EA2, ::System::Boolean>*))((::PBYTE)hIl2Cpp + ABADEC2D24126A14_B6BDFC40DC9BAE78_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E1249778E5AD2EA2, ::System::Boolean>* A1F4FECAB5448E2C()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::E1249778E5AD2EA2, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABADEC2D24126A14_A1F4FECAB5448E2C_OFFSET))(this);
	}

	::System::Void E74F4AC110DDBC1D(::System::Boolean E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABADEC2D24126A14_E74F4AC110DDBC1D_OFFSET))(this, E937D4885DAA1AE8);
	}
};
