#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CKGKLNPPAKB;
class FCOEMCEDLNL;

#define CKGKLNPPAKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1ED40)
#define CKGKLNPPAKB_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC1ED50)
#define CKGKLNPPAKB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC1ED10)

inline static constexpr unsigned int CKGKLNPPAKB_TypeDefinitionIndex = 21560;

	class CKGKLNPPAKB : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* EBDLFNOELLO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKGKLNPPAKB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CKGKLNPPAKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKGKLNPPAKB*))((::PBYTE)hIl2Cpp + CKGKLNPPAKB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CKGKLNPPAKB* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CKGKLNPPAKB*))((::PBYTE)hIl2Cpp + CKGKLNPPAKB_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
