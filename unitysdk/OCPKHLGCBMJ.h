#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMAPDEEEBC.h"
class MDHABEDMBPM;
class MJCABDDEGOE_ECLGEDENJDJ;

#define OCPKHLGCBMJ_CTOR_OFFSET UNITYSDK_OFFSET(0xBD75DF0)
#define OCPKHLGCBMJ_FEDODODLKHI_OFFSET UNITYSDK_OFFSET(0xBD75B60)

inline static constexpr unsigned int OCPKHLGCBMJ_TypeDefinitionIndex = 62382;

	class OCPKHLGCBMJ : public ::OBMAPDEEEBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCPKHLGCBMJ_CTOR_OFFSET))(this);
		}

		::System::Void FEDODODLKHI(::MDHABEDMBPM* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDHABEDMBPM*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + OCPKHLGCBMJ_FEDODODLKHI_OFFSET))(this, a1, a2);
		}

	};
