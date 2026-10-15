#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/AHHNGJGLOKA.h"
class AIKNOONFCFG;
class JCMDOLKLKEL;
class POKKCEHMFMJ;

#define NAJKJIGFPHI_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBA9B900)
#define NAJKJIGFPHI_CTOR_OFFSET UNITYSDK_OFFSET(0xBA9B870)

inline static constexpr unsigned int NAJKJIGFPHI_TypeDefinitionIndex = 62620;

	class NAJKJIGFPHI : public ::System::Object
	{
	public:
		::POKKCEHMFMJ* LBNAGLIGKIO; // 0x10
		::JCMDOLKLKEL* ONGDFCGGFDM; // 0x18
		::System::Void _ctor(::JCMDOLKLKEL* a1, ::POKKCEHMFMJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::JCMDOLKLKEL*, ::POKKCEHMFMJ*))((::PBYTE)hIl2Cpp + NAJKJIGFPHI_CTOR_OFFSET))(this, a1, a2);
		}

		::AIKNOONFCFG* BPLPBPMEODA(::AHHNGJGLOKA a1)
		{
			return ((::AIKNOONFCFG*(*)(::PVOID, ::AHHNGJGLOKA))((::PBYTE)hIl2Cpp + NAJKJIGFPHI_BPLPBPMEODA_OFFSET))(this, a1);
		}

	};
