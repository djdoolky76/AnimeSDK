#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMAPDEEEBC.h"
class LFJGAJCHEOK;
class MDHABEDMBPM;
class MJCABDDEGOE_ECLGEDENJDJ;

#define LFJGAJCHEOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB679DC0)
#define LFJGAJCHEOK_CTOR_OFFSET UNITYSDK_OFFSET(0xB679E30)
#define LFJGAJCHEOK_FEDODODLKHI_OFFSET UNITYSDK_OFFSET(0xB679E40)

inline static constexpr unsigned int LFJGAJCHEOK_TypeDefinitionIndex = 62385;

	class LFJGAJCHEOK : public ::OBMAPDEEEBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFJGAJCHEOK_CTOR_OFFSET))(this);
		}

		static ::LFJGAJCHEOK* BPLPBPMEODA()
		{
			return ((::LFJGAJCHEOK*(*)())((::PBYTE)hIl2Cpp + LFJGAJCHEOK_BPLPBPMEODA_OFFSET))();
		}

		::System::Void FEDODODLKHI(::MDHABEDMBPM* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDHABEDMBPM*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + LFJGAJCHEOK_FEDODODLKHI_OFFSET))(this, a1, a2);
		}

	};
