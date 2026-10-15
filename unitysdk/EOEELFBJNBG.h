#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EOEELFBJNBG;
class FCOEMCEDLNL;

#define EOEELFBJNBG_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDB2CC0)
#define EOEELFBJNBG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDB2C00)

inline static constexpr unsigned int EOEELFBJNBG_TypeDefinitionIndex = 13502;

	class EOEELFBJNBG : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EOEELFBJNBG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::EOEELFBJNBG* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::EOEELFBJNBG*))((::PBYTE)hIl2Cpp + EOEELFBJNBG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
