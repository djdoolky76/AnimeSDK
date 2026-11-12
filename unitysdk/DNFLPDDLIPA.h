#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJGCILDAOEP.h"
#include "unitysdk/System/Object.h"
class DNFLPDDLIPA;
class FCOEMCEDLNL;
namespace System { class String; }

#define DNFLPDDLIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF194A0)
#define DNFLPDDLIPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DF19320)

inline static constexpr unsigned int DNFLPDDLIPA_TypeDefinitionIndex = 12078;

	class DNFLPDDLIPA : public ::System::Object
	{
	public:
		::System::String* OJFFBFCEMKL; // 0x10
		::System::UInt32 EHLMAJICIGJ; // 0x18
		::LJGCILDAOEP OAPONHEHCOJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFLPDDLIPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNFLPDDLIPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNFLPDDLIPA*))((::PBYTE)hIl2Cpp + DNFLPDDLIPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
