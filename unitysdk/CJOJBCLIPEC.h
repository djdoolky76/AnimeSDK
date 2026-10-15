#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class CJOJBCLIPEC;
class FCOEMCEDLNL;
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define CJOJBCLIPEC_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC1C280)
#define CJOJBCLIPEC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC1C290)
#define CJOJBCLIPEC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC1C250)

	class CJOJBCLIPEC : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* IHMDPDINEFL; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* GAILDDCMCHP; // 0x20
		::System::Boolean JHLNDMMBMJP; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJOJBCLIPEC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::CJOJBCLIPEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CJOJBCLIPEC*))((::PBYTE)hIl2Cpp + CJOJBCLIPEC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::CJOJBCLIPEC* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::CJOJBCLIPEC*))((::PBYTE)hIl2Cpp + CJOJBCLIPEC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
