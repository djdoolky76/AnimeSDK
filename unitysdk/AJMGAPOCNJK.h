#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJMGAPOCNJK;
class FCOEMCEDLNL;

#define AJMGAPOCNJK_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCD0A70)
#define AJMGAPOCNJK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCD0980)

inline static constexpr unsigned int AJMGAPOCNJK_TypeDefinitionIndex = 14830;

	class AJMGAPOCNJK : public ::System::Object
	{
	public:
		::System::UInt32 FDOELDMEBPE; // 0x10
		::System::UInt32 FIJLEDEKBJP; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMGAPOCNJK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AJMGAPOCNJK* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AJMGAPOCNJK*))((::PBYTE)hIl2Cpp + AJMGAPOCNJK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
