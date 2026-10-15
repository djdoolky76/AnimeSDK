#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class BIEHLNBOMFL;
class CEJIKJKEBDL;
class FCOEMCEDLNL;

#define CEJIKJKEBDL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA14410)
#define CEJIKJKEBDL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA14420)
#define CEJIKJKEBDL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA143E0)

inline static constexpr unsigned int CEJIKJKEBDL_TypeDefinitionIndex = 19882;

	class CEJIKJKEBDL : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::BIEHLNBOMFL*>* IHONBNCCFLL; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEJIKJKEBDL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CEJIKJKEBDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CEJIKJKEBDL*))((::PBYTE)hIl2Cpp + CEJIKJKEBDL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CEJIKJKEBDL* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CEJIKJKEBDL*))((::PBYTE)hIl2Cpp + CEJIKJKEBDL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
