#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NABOEBEOBDB;

#define NABOEBEOBDB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D1E5090)
#define NABOEBEOBDB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D1E50A0)
#define NABOEBEOBDB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D1E5060)

inline static constexpr unsigned int NABOEBEOBDB_TypeDefinitionIndex = 19975;

	class NABOEBEOBDB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 ICKGFJKAIMP; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABOEBEOBDB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NABOEBEOBDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NABOEBEOBDB*))((::PBYTE)hIl2Cpp + NABOEBEOBDB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NABOEBEOBDB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NABOEBEOBDB*))((::PBYTE)hIl2Cpp + NABOEBEOBDB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
