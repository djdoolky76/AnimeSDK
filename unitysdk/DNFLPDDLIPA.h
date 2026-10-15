#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LJGCILDAOEP.h"
#include "unitysdk/System/Object.h"
class DNFLPDDLIPA;
class FCOEMCEDLNL;
namespace System { class String; }

#define DNFLPDDLIPA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD4A710)
#define DNFLPDDLIPA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD4A590)

inline static constexpr unsigned int DNFLPDDLIPA_TypeDefinitionIndex = 12021;

	class DNFLPDDLIPA : public ::System::Object
	{
	public:
		::System::String* OJFFBFCEMKL; // 0x10
		::LJGCILDAOEP OAPONHEHCOJ; // 0x18
		::System::UInt32 EHLMAJICIGJ; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNFLPDDLIPA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DNFLPDDLIPA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DNFLPDDLIPA*))((::PBYTE)hIl2Cpp + DNFLPDDLIPA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
