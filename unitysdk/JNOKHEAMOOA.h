#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HGMMFJHJECA.h"

#define JNOKHEAMOOA_CTOR_OFFSET UNITYSDK_OFFSET(0x1B4CCB60)
#define JNOKHEAMOOA_KFGJEKJHIMB_OFFSET UNITYSDK_OFFSET(0x1B4CC660)

inline static constexpr unsigned int JNOKHEAMOOA_TypeDefinitionIndex = 65590;

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
