#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CBIKMJHGEDE.h"
#include "unitysdk/UnityEngine/Vector3.h"
class MEIJGMHFPLB;
class POHNBOACDHB;

#define MPOEEGPIIPA_CLEAR_OFFSET UNITYSDK_OFFSET(0xBA43520)
#define MPOEEGPIIPA_CTOR_OFFSET UNITYSDK_OFFSET(0xBA44990)
#define MPOEEGPIIPA_EMCLIFKLNAA_OFFSET UNITYSDK_OFFSET(0xBA44030)
#define MPOEEGPIIPA_FNJCKCNKBKC_OFFSET UNITYSDK_OFFSET(0xBA436E0)
#define MPOEEGPIIPA_GBCHFFLMIIC_OFFSET UNITYSDK_OFFSET(0xBA43720)
#define MPOEEGPIIPA_GDPMAIPKJLJ_OFFSET UNITYSDK_OFFSET(0xBA437F0)
#define MPOEEGPIIPA_ICNEKGBHIHP_OFFSET UNITYSDK_OFFSET(0xBA43590)
#define MPOEEGPIIPA_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xBA43250)
#define MPOEEGPIIPA_MNMPLEEMKKN_OFFSET UNITYSDK_OFFSET(0xBA43680)

inline static constexpr unsigned int MPOEEGPIIPA_TypeDefinitionIndex = 77040;

	class MPOEEGPIIPA : public ::CBIKMJHGEDE
	{
	public:
		::System::Single FLHOEGBFPJB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::POHNBOACDHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::POHNBOACDHB*))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_CLEAR_OFFSET))(this);
		}

		::System::Void ICNEKGBHIHP(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_ICNEKGBHIHP_OFFSET))(this, a1);
		}

		::System::Void MNMPLEEMKKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_MNMPLEEMKKN_OFFSET))(this);
		}

		::System::Void FNJCKCNKBKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_FNJCKCNKBKC_OFFSET))(this);
		}

		::System::Void GBCHFFLMIIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_GBCHFFLMIIC_OFFSET))(this);
		}

		::System::Boolean GDPMAIPKJLJ(::System::Single a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_GDPMAIPKJLJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean EMCLIFKLNAA(::MEIJGMHFPLB* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::MEIJGMHFPLB*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MPOEEGPIIPA_EMCLIFKLNAA_OFFSET))(this, a1, a2);
		}

	};
