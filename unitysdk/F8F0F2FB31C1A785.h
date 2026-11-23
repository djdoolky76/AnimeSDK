#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A1A6E5969F85ACD1;
class B008DECE68704AB9;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define F8F0F2FB31C1A785_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x2469300)
#define F8F0F2FB31C1A785__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int F8F0F2FB31C1A785_TypeDefinitionIndex = 4353;

class F8F0F2FB31C1A785 : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::B008DECE68704AB9*>* AFDF9B7EF3084FD1; // 0x10
	::A1A6E5969F85ACD1* EE08919042C482FC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F8F0F2FB31C1A785__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::F8F0F2FB31C1A785*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::F8F0F2FB31C1A785*&))((::PBYTE)hIl2Cpp + F8F0F2FB31C1A785_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
