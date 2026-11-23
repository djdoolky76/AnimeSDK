#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class A09AF196A636E0CF;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A8E65223F6E0E46E_E418F0465D522CDA_OFFSET UNITYSDK_OFFSET(0x17D6400)
#define A8E65223F6E0E46E_E9A85024D0749B8A_OFFSET UNITYSDK_OFFSET(0x17D5EA0)
#define A8E65223F6E0E46E_EB8DF78C1D71130D_OFFSET UNITYSDK_OFFSET(0x233C5B0)
#define A8E65223F6E0E46E_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x25C0A20)
#define A8E65223F6E0E46E__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A8E65223F6E0E46E_TypeDefinitionIndex = 5495;

class A8E65223F6E0E46E : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A09AF196A636E0CF*>* A308001B53299B3B; // 0x10

	::System::Void E418F0465D522CDA(::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A09AF196A636E0CF*>* E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A09AF196A636E0CF*>*))((::PBYTE)hIl2Cpp + A8E65223F6E0E46E_E418F0465D522CDA_OFFSET))(this, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E65223F6E0E46E__CTOR_OFFSET))(this);
	}

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A8E65223F6E0E46E*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A8E65223F6E0E46E*&))((::PBYTE)hIl2Cpp + A8E65223F6E0E46E_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	static ::System::UInt32 EB8DF78C1D71130D(::A09AF196A636E0CF* E937D4885DAA1AE8)
	{
		return ((::System::UInt32(*)(::A09AF196A636E0CF*))((::PBYTE)hIl2Cpp + A8E65223F6E0E46E_EB8DF78C1D71130D_OFFSET))(E937D4885DAA1AE8);
	}

	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A09AF196A636E0CF*>* E9A85024D0749B8A()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::UInt32, ::A09AF196A636E0CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8E65223F6E0E46E_E9A85024D0749B8A_OFFSET))(this);
	}
};
