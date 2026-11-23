#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A4BD16663D31CCDC;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define F5842D1DD82CF630_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x24B5880)
#define F5842D1DD82CF630_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25447A0)
#define F5842D1DD82CF630_FD66684F5E0EB503_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define F5842D1DD82CF630_FDBFED13C2C27F3D_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define F5842D1DD82CF630__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F5842D1DD82CF630_TypeDefinitionIndex = 5411;

class F5842D1DD82CF630 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A4BD16663D31CCDC*>* F1A903AC58ED4452; // 0x10

	static ::System::UInt32 EB8DF78C1D71130D(::A4BD16663D31CCDC* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A4BD16663D31CCDC*))((::PBYTE)hIl2Cpp + F5842D1DD82CF630_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F5842D1DD82CF630__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A4BD16663D31CCDC*>* FD66684F5E0EB503()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A4BD16663D31CCDC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + F5842D1DD82CF630_FD66684F5E0EB503_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F5842D1DD82CF630*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F5842D1DD82CF630*&))((::PBYTE)hIl2Cpp + F5842D1DD82CF630_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void FDBFED13C2C27F3D(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A4BD16663D31CCDC*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A4BD16663D31CCDC*>*))((::PBYTE)hIl2Cpp + F5842D1DD82CF630_FDBFED13C2C27F3D_OFFSET))(this, E937D4885DAA1AE8);
	}
};
