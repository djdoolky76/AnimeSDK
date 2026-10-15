#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class FHKDJADCDBL;

#define FHKDJADCDBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDF1370)
#define FHKDJADCDBL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDF12D0)

inline static constexpr unsigned int FHKDJADCDBL_TypeDefinitionIndex = 14974;

	class FHKDJADCDBL : public ::System::Object
	{
	public:
		::System::UInt32 PHFMCACHFIJ; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHKDJADCDBL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FHKDJADCDBL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FHKDJADCDBL*))((::PBYTE)hIl2Cpp + FHKDJADCDBL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
