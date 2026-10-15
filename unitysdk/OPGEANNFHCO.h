#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLEHLBPAAKM;

#define OPGEANNFHCO_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7E5F70)
#define OPGEANNFHCO_FEHOCMLLMEB_OFFSET UNITYSDK_OFFSET(0x1C7E5FD0)
#define OPGEANNFHCO_MDFBIBCHPPC_OFFSET UNITYSDK_OFFSET(0x1C7E5F80)

inline static constexpr unsigned int OPGEANNFHCO_TypeDefinitionIndex = 36512;

	class OPGEANNFHCO : public ::System::Object
	{
	public:
		::MLEHLBPAAKM* IBPBJBOKKMF; // 0x10
		::System::Void _ctor(::MLEHLBPAAKM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MLEHLBPAAKM*))((::PBYTE)hIl2Cpp + OPGEANNFHCO_CTOR_OFFSET))(this, a1);
		}

		::System::UInt32 MDFBIBCHPPC()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEANNFHCO_MDFBIBCHPPC_OFFSET))(this);
		}

		::System::UInt32 FEHOCMLLMEB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGEANNFHCO_FEHOCMLLMEB_OFFSET))(this);
		}

	};
