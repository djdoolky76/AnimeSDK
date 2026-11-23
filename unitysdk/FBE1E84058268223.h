#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define FBE1E84058268223_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x267C8A0)
#define FBE1E84058268223__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int FBE1E84058268223_TypeDefinitionIndex = 6334;

class FBE1E84058268223 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::E46B881AA2636190>* E6551BEBBFC02575; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBE1E84058268223__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::FBE1E84058268223*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::FBE1E84058268223*&))((::PBYTE)hIl2Cpp + FBE1E84058268223_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}
};
