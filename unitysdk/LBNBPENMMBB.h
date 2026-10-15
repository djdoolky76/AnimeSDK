#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMAPDEEEBC.h"
class MDHABEDMBPM;
class MJCABDDEGOE_ECLGEDENJDJ;

#define LBNBPENMMBB_CTOR_OFFSET UNITYSDK_OFFSET(0xB60D450)
#define LBNBPENMMBB_FEDODODLKHI_OFFSET UNITYSDK_OFFSET(0xB60D2B0)

inline static constexpr unsigned int LBNBPENMMBB_TypeDefinitionIndex = 62381;

	class LBNBPENMMBB : public ::OBMAPDEEEBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LBNBPENMMBB_CTOR_OFFSET))(this);
		}

		::System::Void FEDODODLKHI(::MDHABEDMBPM* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDHABEDMBPM*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + LBNBPENMMBB_FEDODODLKHI_OFFSET))(this, a1, a2);
		}

	};
