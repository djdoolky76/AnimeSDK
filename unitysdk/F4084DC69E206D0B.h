#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BB53FDCEC0659F4F.h"
#include "unitysdk/E422587EEBF1562A.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace A970A434E9CC38AD { class E081240858EC757E; }
namespace System { class String; }

#define F4084DC69E206D0B_A7B45E9C54783119_OFFSET UNITYSDK_OFFSET(0x1930640)
#define F4084DC69E206D0B_FE2AF5C35A75BD19_OFFSET UNITYSDK_OFFSET(0x1930840)
#define F4084DC69E206D0B__CTOR_OFFSET UNITYSDK_OFFSET(0x1930930)

inline static constexpr unsigned int F4084DC69E206D0B_TypeDefinitionIndex = 1579;

class F4084DC69E206D0B : public ::BB53FDCEC0659F4F
{
public:
	::System::Single B81506C6C1514A15; // 0x40
	::System::Byte _padding0[0x4];
	::System::Nullable_1<::E422587EEBF1562A> F5506216CF87FEBE; // 0x48

	::System::Void _ctor(::System::String* F80DA8BF03C0121C, ::A970A434E9CC38AD::E081240858EC757E* E0C29B9F427F1B80, ::UnityEngine::Vector3 F643CAC84B2D63EA, ::System::Boolean F86A08B9DC7E5829, ::E422587EEBF1562A E9103EDD9BBCBC59)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::A970A434E9CC38AD::E081240858EC757E*, ::UnityEngine::Vector3, ::System::Boolean, ::E422587EEBF1562A))((::PBYTE)hIl2Cpp + F4084DC69E206D0B__CTOR_OFFSET))(this, F80DA8BF03C0121C, E0C29B9F427F1B80, F643CAC84B2D63EA, F86A08B9DC7E5829, E9103EDD9BBCBC59);
	}

	::System::Void A7B45E9C54783119(::System::Boolean AD09E42C80D4B5FC, ::System::String* A7714DE08D5D7E93)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + F4084DC69E206D0B_A7B45E9C54783119_OFFSET))(this, AD09E42C80D4B5FC, A7714DE08D5D7E93);
	}

	::System::Void FE2AF5C35A75BD19()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + F4084DC69E206D0B_FE2AF5C35A75BD19_OFFSET))(this);
	}
};
