#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class F2C84B5B45487A6A;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F1D4329AEA78B240_E418F0465D522CDA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F1D4329AEA78B240_E9A85024D0749B8A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F1D4329AEA78B240_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define F1D4329AEA78B240_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2719A40)
#define F1D4329AEA78B240__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F1D4329AEA78B240_TypeDefinitionIndex = 2914;

class F1D4329AEA78B240 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C84B5B45487A6A*>* A308001B53299B3B; // 0x10

	::System::Void E418F0465D522CDA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C84B5B45487A6A*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C84B5B45487A6A*>*))((::PBYTE)hIl2Cpp + F1D4329AEA78B240_E418F0465D522CDA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C84B5B45487A6A*>* E9A85024D0749B8A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::F2C84B5B45487A6A*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D4329AEA78B240_E9A85024D0749B8A_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::F2C84B5B45487A6A* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::F2C84B5B45487A6A*))((::PBYTE)hIl2Cpp + F1D4329AEA78B240_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F1D4329AEA78B240*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F1D4329AEA78B240*&))((::PBYTE)hIl2Cpp + F1D4329AEA78B240_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F1D4329AEA78B240__CTOR_OFFSET))(this);
	}
};
