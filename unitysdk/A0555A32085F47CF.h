#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/BD3E6890C9C82A9E.h"

class AFB0FB0AD37C45CC;
class E5672CEAA467F23A;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define A0555A32085F47CF_FBBF870EA90E1D92_OFFSET UNITYSDK_OFFSET(0x23D6290)
#define A0555A32085F47CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A0555A32085F47CF_TypeDefinitionIndex = 3747;

class A0555A32085F47CF : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::E5672CEAA467F23A*>* FEACFC6C903CDE75; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::AFB0FB0AD37C45CC*>* E514D8F8F30B9590; // 0x18

	static ::System::Void FBBF870EA90E1D92(::BD3E6890C9C82A9E& F99B0FE319DB74D1, ::A0555A32085F47CF*& E937D4885DAA1AE8)
	{
		return ((::System::Void(*)(::BD3E6890C9C82A9E&, ::A0555A32085F47CF*&))((::PBYTE)hIl2Cpp + A0555A32085F47CF_FBBF870EA90E1D92_OFFSET))(F99B0FE319DB74D1, E937D4885DAA1AE8);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A0555A32085F47CF__CTOR_OFFSET))(this);
	}
};
