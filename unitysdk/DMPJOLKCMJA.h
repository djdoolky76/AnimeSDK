#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DMPJOLKCMJA;
class FCOEMCEDLNL;

#define DMPJOLKCMJA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CD1B050)
#define DMPJOLKCMJA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CD1B060)
#define DMPJOLKCMJA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CD1B020)

inline static constexpr unsigned int DMPJOLKCMJA_TypeDefinitionIndex = 24314;

	class DMPJOLKCMJA : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean KDHCICFNAOC; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DMPJOLKCMJA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DMPJOLKCMJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMPJOLKCMJA*))((::PBYTE)hIl2Cpp + DMPJOLKCMJA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DMPJOLKCMJA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DMPJOLKCMJA*))((::PBYTE)hIl2Cpp + DMPJOLKCMJA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
