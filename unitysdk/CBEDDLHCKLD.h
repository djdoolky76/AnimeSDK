#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CBEDDLHCKLD;
class FCOEMCEDLNL;
namespace System { class String; }

#define CBEDDLHCKLD_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA02740)
#define CBEDDLHCKLD_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA02750)
#define CBEDDLHCKLD_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA02710)

	class CBEDDLHCKLD : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* HCDEOKNIGKG; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBEDDLHCKLD_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CBEDDLHCKLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBEDDLHCKLD*))((::PBYTE)hIl2Cpp + CBEDDLHCKLD_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CBEDDLHCKLD* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CBEDDLHCKLD*))((::PBYTE)hIl2Cpp + CBEDDLHCKLD_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
