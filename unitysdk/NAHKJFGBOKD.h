#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class NAHKJFGBOKD;

#define NAHKJFGBOKD_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E7770)
#define NAHKJFGBOKD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E7630)

inline static constexpr unsigned int NAHKJFGBOKD_TypeDefinitionIndex = 14434;

	class NAHKJFGBOKD : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* BMCKCHLJFIE; // 0x10
		::System::UInt32 PHFMCACHFIJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAHKJFGBOKD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NAHKJFGBOKD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAHKJFGBOKD*))((::PBYTE)hIl2Cpp + NAHKJFGBOKD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
