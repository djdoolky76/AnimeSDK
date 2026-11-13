#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class NAELLPLNFKM;
namespace System { class String; }

#define NAELLPLNFKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1E88AEB0)
#define NAELLPLNFKM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E88AEC0)
#define NAELLPLNFKM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E88AE80)

inline static constexpr unsigned int NAELLPLNFKM_TypeDefinitionIndex = 23367;

	class NAELLPLNFKM : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* NBDLGPJPLAP; // 0x18
		::System::String* IIJCDCJEECB; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAELLPLNFKM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::NAELLPLNFKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAELLPLNFKM*))((::PBYTE)hIl2Cpp + NAELLPLNFKM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::NAELLPLNFKM* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::NAELLPLNFKM*))((::PBYTE)hIl2Cpp + NAELLPLNFKM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
