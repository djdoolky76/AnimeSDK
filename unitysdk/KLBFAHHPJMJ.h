#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJGCILDAOEP.h"
#include "unitysdk/NEBMBGBIHHH.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
class KLBFAHHPJMJ;
namespace System { class String; }

#define KLBFAHHPJMJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D0A4170)
#define KLBFAHHPJMJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D0A3F90)

inline static constexpr unsigned int KLBFAHHPJMJ_TypeDefinitionIndex = 12023;

	class KLBFAHHPJMJ : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* OHILMAPCAHM; // 0x10
		::LJGCILDAOEP OAPONHEHCOJ; // 0x18
		::System::UInt32 EHLMAJICIGJ; // 0x1C
		::NEBMBGBIHHH CADLBIKGCCP; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLBFAHHPJMJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::KLBFAHHPJMJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::KLBFAHHPJMJ*))((::PBYTE)hIl2Cpp + KLBFAHHPJMJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
