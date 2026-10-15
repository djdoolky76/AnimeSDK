#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"

#define JNOKHEAMOOA_CTOR_OFFSET UNITYSDK_OFFSET(0xB28B3C0)
#define JNOKHEAMOOA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0xB28AEC0)

inline static constexpr unsigned int JNOKHEAMOOA_TypeDefinitionIndex = 64145;

	class JNOKHEAMOOA : public ::HGMMFJHJECA
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOKHEAMOOA_CTOR_OFFSET))(this);
		}

		::System::Double KFGJEKJHIMB()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + JNOKHEAMOOA_KFGJEKJHIMB_OFFSET))(this);
		}

	};
