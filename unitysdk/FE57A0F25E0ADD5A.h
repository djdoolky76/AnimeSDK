#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class E3528907394240DD;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FE57A0F25E0ADD5A_E418F0465D522CDA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define FE57A0F25E0ADD5A_E9A85024D0749B8A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define FE57A0F25E0ADD5A_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define FE57A0F25E0ADD5A_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x26289C0)
#define FE57A0F25E0ADD5A__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FE57A0F25E0ADD5A_TypeDefinitionIndex = 6027;

class FE57A0F25E0ADD5A : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E3528907394240DD*>* A308001B53299B3B; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FE57A0F25E0ADD5A__CTOR_OFFSET))(this);
	}

	::System::Void E418F0465D522CDA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E3528907394240DD*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E3528907394240DD*>*))((::PBYTE)hIl2Cpp + FE57A0F25E0ADD5A_E418F0465D522CDA_OFFSET))(this, E937D4885DAA1AE8);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FE57A0F25E0ADD5A*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FE57A0F25E0ADD5A*&))((::PBYTE)hIl2Cpp + FE57A0F25E0ADD5A_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E3528907394240DD*>* E9A85024D0749B8A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E3528907394240DD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FE57A0F25E0ADD5A_E9A85024D0749B8A_OFFSET))(this);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::E3528907394240DD* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::E3528907394240DD*))((::PBYTE)hIl2Cpp + FE57A0F25E0ADD5A_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}
};
