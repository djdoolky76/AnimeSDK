#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
class JKHKKELCKDJ;
namespace RPG::GameCore { class DynamicFloat; }
namespace System { class String; }

#define JKHKKELCKDJ_CTOR_OFFSET UNITYSDK_OFFSET(0x1D042C20)
#define JKHKKELCKDJ_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D042C30)
#define JKHKKELCKDJ_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D042BF0)

	class JKHKKELCKDJ : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* PNDDBKCPCLC; // 0x18
		::RPG::GameCore::DynamicFloat* FMLGGKAFMKC; // 0x20
		::System::String* EHMHINHDGIA; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKHKKELCKDJ_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::JKHKKELCKDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKHKKELCKDJ*))((::PBYTE)hIl2Cpp + JKHKKELCKDJ_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::JKHKKELCKDJ* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::JKHKKELCKDJ*))((::PBYTE)hIl2Cpp + JKHKKELCKDJ_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
