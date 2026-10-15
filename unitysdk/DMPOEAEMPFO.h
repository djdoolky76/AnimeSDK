#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DMPOEAEMPFO;
class FCOEMCEDLNL;

#define DMPOEAEMPFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD49320)
#define DMPOEAEMPFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD49330)
#define DMPOEAEMPFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD492E0)

inline static constexpr unsigned int DMPOEAEMPFO_TypeDefinitionIndex = 10229;

	class DMPOEAEMPFO : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 LEAPPNPBINI; // 0x18
		::System::Boolean DMKJAJLNEBK; // 0x1C
		::System::Byte _padding0[0x3];
		::System::UInt32 DGLJLJEHNNB; // 0x20
		::System::UInt32 IHALCLABNOJ; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPOEAEMPFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMPOEAEMPFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMPOEAEMPFO*))((::PBYTE)hIl2Cpp + DMPOEAEMPFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DMPOEAEMPFO* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMPOEAEMPFO*))((::PBYTE)hIl2Cpp + DMPOEAEMPFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
