#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class MELDNFKKBME;
class NHBJLCIHMIH;
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define BFJKBHAJDOL_FCFOEJGPDNO_OFFSET UNITYSDK_OFFSET(0x169EC170)
#define BFJKBHAJDOL__CTOR_OFFSET UNITYSDK_OFFSET(0x169EC0F0)

inline static constexpr unsigned int BFJKBHAJDOL_TypeDefinitionIndex = 44504;

class BFJKBHAJDOL : public ::System::Object
{
public:
	::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>* NHFGJENDPNA; // 0x10

	::System::Void _ctor(::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>* KPDNJEDICCM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_3<::MELDNFKKBME*, ::NHBJLCIHMIH*, ::System::Boolean>*))((::PBYTE)hIl2Cpp + BFJKBHAJDOL__CTOR_OFFSET))(this, KPDNJEDICCM);
	}

	::System::Boolean FCFOEJGPDNO(::MELDNFKKBME* HLFFCMIFFIB, ::NHBJLCIHMIH* GGNCOAPMEDN)
	{
		return ((::System::Boolean(*)(::PVOID, ::MELDNFKKBME*, ::NHBJLCIHMIH*))((::PBYTE)hIl2Cpp + BFJKBHAJDOL_FCFOEJGPDNO_OFFSET))(this, HLFFCMIFFIB, GGNCOAPMEDN);
	}
};
