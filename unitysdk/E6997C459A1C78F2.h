#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F1C808DBF9BA75AC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define E6997C459A1C78F2_A703482C6209719E_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define E6997C459A1C78F2_F58450558612F288_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define E6997C459A1C78F2_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26BAE10)
#define E6997C459A1C78F2__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int E6997C459A1C78F2_TypeDefinitionIndex = 2631;

class E6997C459A1C78F2 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1C808DBF9BA75AC*>* F47F379EDAC3D3A3; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E6997C459A1C78F2__CTOR_OFFSET))(this);
	}

	::System::Void F58450558612F288(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1C808DBF9BA75AC*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1C808DBF9BA75AC*>*))((::PBYTE)hIl2Cpp + E6997C459A1C78F2_F58450558612F288_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::E6997C459A1C78F2*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::E6997C459A1C78F2*&))((::PBYTE)hIl2Cpp + E6997C459A1C78F2_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1C808DBF9BA75AC*>* A703482C6209719E()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F1C808DBF9BA75AC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + E6997C459A1C78F2_A703482C6209719E_OFFSET))(this);
	}
};
