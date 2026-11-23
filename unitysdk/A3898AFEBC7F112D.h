#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/BA2122CB560826F3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A3898AFEBC7F112D_AFF5975FD933941F_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A3898AFEBC7F112D_E0C7FC8C28D92FDB_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A3898AFEBC7F112D_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2445A20)
#define A3898AFEBC7F112D__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A3898AFEBC7F112D_TypeDefinitionIndex = 2429;

class A3898AFEBC7F112D : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BA2122CB560826F3, ::System::Boolean>* EECB4897F400F121; // 0x10

	::System::Void E0C7FC8C28D92FDB(::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BA2122CB560826F3, ::System::Boolean>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BA2122CB560826F3, ::System::Boolean>*))((::PBYTE)hIl2Cpp + A3898AFEBC7F112D_E0C7FC8C28D92FDB_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A3898AFEBC7F112D__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BA2122CB560826F3, ::System::Boolean>* AFF5975FD933941F()
	{
		return ((::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::BA2122CB560826F3, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A3898AFEBC7F112D_AFF5975FD933941F_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A3898AFEBC7F112D*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A3898AFEBC7F112D*&))((::PBYTE)hIl2Cpp + A3898AFEBC7F112D_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
