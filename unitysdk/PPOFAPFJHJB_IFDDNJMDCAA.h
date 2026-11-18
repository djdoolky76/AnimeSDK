#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
template <typename T> class JKPDIPKKFEI_1;

#define PPOFAPFJHJB_IFDDNJMDCAA_FJJFNPJJDOJ_OFFSET UNITYSDK_OFFSET(0x1D9DCE10)
#define PPOFAPFJHJB_IFDDNJMDCAA__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9DADD0)

inline static constexpr unsigned int PPOFAPFJHJB_IFDDNJMDCAA_TypeDefinitionIndex = 57547;

class PPOFAPFJHJB_IFDDNJMDCAA : public ::System::Object
{
public:
	::System::Func_4<::System::Boolean, ::MoleMole::HollowChessboard::HollowCell, ::MoleMole::HollowChessboard::HollowCell, ::System::Double>* DHBKLOFBBFN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PPOFAPFJHJB_IFDDNJMDCAA__CTOR_OFFSET))(this);
	}

	::System::Double FJJFNPJJDOJ(::JKPDIPKKFEI_1<::MoleMole::HollowChessboard::HollowCell>* NFFNEFLKPDG)
	{
		return ((::System::Double(*)(::PVOID, ::JKPDIPKKFEI_1<::MoleMole::HollowChessboard::HollowCell>*))((::PBYTE)hIl2Cpp + PPOFAPFJHJB_IFDDNJMDCAA_FJJFNPJJDOJ_OFFSET))(this, NFFNEFLKPDG);
	}
};
