#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class GKGCNACLFEM;

#define GKGCNACLFEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E650C40)
#define GKGCNACLFEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E650C50)
#define GKGCNACLFEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E650C10)

inline static constexpr unsigned int GKGCNACLFEM_TypeDefinitionIndex = 21897;

	class GKGCNACLFEM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 BGJMONEGGGO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKGCNACLFEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::GKGCNACLFEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GKGCNACLFEM*))((::PBYTE)hIl2Cpp + GKGCNACLFEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::GKGCNACLFEM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::GKGCNACLFEM*))((::PBYTE)hIl2Cpp + GKGCNACLFEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
