#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NCPCKIGOAFA;

#define NCPCKIGOAFA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1F6B80)
#define NCPCKIGOAFA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E59D0)

inline static constexpr unsigned int NCPCKIGOAFA_TypeDefinitionIndex = 13883;

	class NCPCKIGOAFA : public ::System::Object
	{
	public:
		::System::Boolean BLPAFDKHEPJ; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 PHFMCACHFIJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCPCKIGOAFA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NCPCKIGOAFA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NCPCKIGOAFA*))((::PBYTE)hIl2Cpp + NCPCKIGOAFA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
