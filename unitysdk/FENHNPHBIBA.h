#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MarbleTarget.h"
#include "unitysdk/RPG/GameCore/MarbleTaskConfig.h"
class FCOEMCEDLNL;
class FENHNPHBIBA;
namespace System { class String; }

#define FENHNPHBIBA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CDE2780)
#define FENHNPHBIBA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1CDE2790)
#define FENHNPHBIBA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1CDE2730)

	class FENHNPHBIBA : public ::RPG::GameCore::MarbleTaskConfig
	{
	public:
		::System::String* HEOANNBNGEI; // 0x10
		::System::String* BJFKIIAHHJA; // 0x18
		::System::UInt32 MAGEFLCHECM; // 0x20
		::System::Int32 IANALINIBNG; // 0x24
		::System::Int32 ICGEPEDFMAL; // 0x28
		::RPG::GameCore::MarbleTarget HILNFHCPEAD; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FENHNPHBIBA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::FENHNPHBIBA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FENHNPHBIBA*))((::PBYTE)hIl2Cpp + FENHNPHBIBA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::FENHNPHBIBA* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::FENHNPHBIBA*))((::PBYTE)hIl2Cpp + FENHNPHBIBA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
