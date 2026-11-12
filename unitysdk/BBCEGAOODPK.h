#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BBCEGAOODPK_CTOR_OFFSET UNITYSDK_OFFSET(0x16D07620)
#define BBCEGAOODPK_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x16D074A0)
#define BBCEGAOODPK_LMEAHGFFMIB_OFFSET UNITYSDK_OFFSET(0x16D075D0)

inline static constexpr unsigned int BBCEGAOODPK_TypeDefinitionIndex = 57725;

	class BBCEGAOODPK : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBCEGAOODPK_CTOR_OFFSET))(this);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBCEGAOODPK_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void LMEAHGFFMIB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBCEGAOODPK_LMEAHGFFMIB_OFFSET))();
		}

	};
