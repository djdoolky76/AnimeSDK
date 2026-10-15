#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"

#define PDFGGJMMGIO_CTOR_OFFSET UNITYSDK_OFFSET(0xC009A90)
#define PDFGGJMMGIO_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC009A20)
#define PDFGGJMMGIO_LMCEDCHJKFF_OFFSET UNITYSDK_OFFSET(0xC0099E0)

inline static constexpr unsigned int PDFGGJMMGIO_TypeDefinitionIndex = 57256;

	class PDFGGJMMGIO : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFGGJMMGIO_CTOR_OFFSET))(this);
		}

		::System::Void LMCEDCHJKFF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFGGJMMGIO_LMCEDCHJKFF_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PDFGGJMMGIO_DISPOSE_OFFSET))(this);
		}

	};
