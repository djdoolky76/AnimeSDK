#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIHollowHollowLayerResultDialogContext.h"

class NFGHOLFKEPK;
namespace MoleMole { class UILevelResultPageContext; }

#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_EXITGAME_OFFSET UNITYSDK_OFFSET(0x13110200)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOBACK_OFFSET UNITYSDK_OFFSET(0x131106A0)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOCURRENT_OFFSET UNITYSDK_OFFSET(0x13110700)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GONEXT_OFFSET UNITYSDK_OFFSET(0x13110300)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_HANDLERESPONSE_OFFSET UNITYSDK_OFFSET(0x1310FFF0)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_INITDATA_OFFSET UNITYSDK_OFFSET(0x1310FCF0)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_REQRESTART_OFFSET UNITYSDK_OFFSET(0x1310FE40)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_RESTART_OFFSET UNITYSDK_OFFSET(0x1310FF90)
#define MOLEMOLE_MONSTERFANTASYRESULTCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1310FC10)

namespace MoleMole
{
	inline static constexpr unsigned int MonsterFantasyResultContext_TypeDefinitionIndex = 49348;

	class MonsterFantasyResultContext : public ::MoleMole::UIHollowHollowLayerResultDialogContext
	{
	public:
		::System::Boolean isWin; // 0x40
		::System::Byte _padding0[0x3];
		::System::Int32 chapterLevelId; // 0x44

		::System::Void _ctor(::MoleMole::UILevelResultPageContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UILevelResultPageContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT__CTOR_OFFSET))(this, context);
		}

		::System::Void InitData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_INITDATA_OFFSET))(this);
		}

		::System::Void ReqRestart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_REQRESTART_OFFSET))(this);
		}

		::System::Void Restart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_RESTART_OFFSET))(this);
		}

		static ::System::Void HandleResponse(::NFGHOLFKEPK* msg)
		{
			return ((::System::Void(*)(::NFGHOLFKEPK*))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_HANDLERESPONSE_OFFSET))(msg);
		}

		static ::System::Void ExitGame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_EXITGAME_OFFSET))();
		}

		::System::Void GoNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GONEXT_OFFSET))(this);
		}

		::System::Void GoBack()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOBACK_OFFSET))(this);
		}

		::System::Void GoCurrent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONSTERFANTASYRESULTCONTEXT_GOCURRENT_OFFSET))(this);
		}
	};
}
