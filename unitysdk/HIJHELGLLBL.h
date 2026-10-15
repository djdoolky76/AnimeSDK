#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class HIJHELGLLBL;

#define HIJHELGLLBL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CEAF3B0)
#define HIJHELGLLBL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CEAF3C0)
#define HIJHELGLLBL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CEAF380)

inline static constexpr unsigned int HIJHELGLLBL_TypeDefinitionIndex = 10221;

	class HIJHELGLLBL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 IHBOPLBJGGB; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIJHELGLLBL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::HIJHELGLLBL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HIJHELGLLBL*))((::PBYTE)hIl2Cpp + HIJHELGLLBL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::HIJHELGLLBL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::HIJHELGLLBL*))((::PBYTE)hIl2Cpp + HIJHELGLLBL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
