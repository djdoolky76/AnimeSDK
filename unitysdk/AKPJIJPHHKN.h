#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class AKPJIJPHHKN;
class FCOEMCEDLNL;

#define AKPJIJPHHKN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DE80040)
#define AKPJIJPHHKN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DE80090)
#define AKPJIJPHHKN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DE7FFD0)

inline static constexpr unsigned int AKPJIJPHHKN_TypeDefinitionIndex = 21874;

	class AKPJIJPHHKN : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::MVector3 LFNEECHDFFC; // 0x18
		::RPG::MVector3 FJFNEEJBAFK; // 0x24
		::RPG::MVector3 HKLHHMLDKHJ; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKPJIJPHHKN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::AKPJIJPHHKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKPJIJPHHKN*))((::PBYTE)hIl2Cpp + AKPJIJPHHKN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::AKPJIJPHHKN* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::AKPJIJPHHKN*))((::PBYTE)hIl2Cpp + AKPJIJPHHKN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
