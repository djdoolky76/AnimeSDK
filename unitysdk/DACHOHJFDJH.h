#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class DACHOHJFDJH;
class FCOEMCEDLNL;

#define DACHOHJFDJH_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9A610)
#define DACHOHJFDJH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB9A620)
#define DACHOHJFDJH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB9A5E0)

inline static constexpr unsigned int DACHOHJFDJH_TypeDefinitionIndex = 21904;

	class DACHOHJFDJH : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 MIOBMOCCOHF; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACHOHJFDJH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::DACHOHJFDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DACHOHJFDJH*))((::PBYTE)hIl2Cpp + DACHOHJFDJH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::DACHOHJFDJH* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::DACHOHJFDJH*))((::PBYTE)hIl2Cpp + DACHOHJFDJH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
