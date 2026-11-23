#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/E68AA4EB51923C98/B8F24387E7315042.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AC08300428F34271;
class FDFB01138C173312;
class FEFC80AC144793C5;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B66669EA5FDB3B55_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x246FE70)
#define B66669EA5FDB3B55__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B66669EA5FDB3B55_TypeDefinitionIndex = 4465;

class B66669EA5FDB3B55 : public ::System::Object
{
public:
	::FEFC80AC144793C5* AC11D7A68501D282; // 0x10
	::System::Collections::Generic::Dictionary_2<::E68AA4EB51923C98::B8F24387E7315042, ::AC08300428F34271*>* BD6702FAB3F9170F; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC08300428F34271*>* E21C5DD22A6E8C03; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::FDFB01138C173312*>* F01E15364FC93621; // 0x28

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::B66669EA5FDB3B55*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::B66669EA5FDB3B55*&))((::PBYTE)hIl2Cpp + B66669EA5FDB3B55_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B66669EA5FDB3B55__CTOR_OFFSET))(this);
	}
};
