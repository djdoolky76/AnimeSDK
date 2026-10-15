#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBMAPDEEEBC.h"
class MDHABEDMBPM;
class MJCABDDEGOE_ECLGEDENJDJ;

#define MMMNAHEPGHD_CTOR_OFFSET UNITYSDK_OFFSET(0xB9DA520)
#define MMMNAHEPGHD_FEDODODLKHI_OFFSET UNITYSDK_OFFSET(0xB9DA3B0)

inline static constexpr unsigned int MMMNAHEPGHD_TypeDefinitionIndex = 62383;

	class MMMNAHEPGHD : public ::OBMAPDEEEBC
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMMNAHEPGHD_CTOR_OFFSET))(this);
		}

		::System::Void FEDODODLKHI(::MDHABEDMBPM* a1, ::MJCABDDEGOE_ECLGEDENJDJ* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MDHABEDMBPM*, ::MJCABDDEGOE_ECLGEDENJDJ*))((::PBYTE)hIl2Cpp + MMMNAHEPGHD_FEDODODLKHI_OFFSET))(this, a1, a2);
		}

	};
