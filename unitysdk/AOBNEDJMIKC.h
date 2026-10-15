#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AOBNEDJMIKC;
class FCOEMCEDLNL;

#define AOBNEDJMIKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CCB9960)
#define AOBNEDJMIKC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CCB9820)

inline static constexpr unsigned int AOBNEDJMIKC_TypeDefinitionIndex = 12485;

	class AOBNEDJMIKC : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DEMJCAMBEDN; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBNEDJMIKC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AOBNEDJMIKC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AOBNEDJMIKC*))((::PBYTE)hIl2Cpp + AOBNEDJMIKC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
