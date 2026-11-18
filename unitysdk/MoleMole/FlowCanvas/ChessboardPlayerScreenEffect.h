#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"

namespace MoleMole::Config { class ChessboardEffectConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_GETEFFECTCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0832E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1A082F80)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A0835E0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_PROCESSSCREENEFFECT_OFFSET UNITYSDK_OFFSET(0x1A083380)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A083620)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT___BASE_ONGRAPHSTOPED_OFFSET UNITYSDK_OFFSET(0x1A0836B0)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardPlayerScreenEffect_TypeDefinitionIndex = 71065;

	class ChessboardPlayerScreenEffect
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* a)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_INVOKE_OFFSET))(this, a);
		}

		::System::Void ProcessScreenEffect(::MoleMole::Config::ScreenEffectType itemItem1, ::System::String* itemItem2)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ScreenEffectType, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_PROCESSSCREENEFFECT_OFFSET))(this, itemItem1, itemItem2);
		}

		::MoleMole::Config::ChessboardEffectConfig* GetEffectConfig(::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>* data)
		{
			return ((::MoleMole::Config::ChessboardEffectConfig*(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ChessboardEffectConfig*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_GETEFFECTCONFIG_OFFSET))(this, data);
		}

		::System::Void OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT_ONGRAPHSTOPED_OFFSET))(this);
		}

		::System::Void __base_OnGraphStoped()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDPLAYERSCREENEFFECT___BASE_ONGRAPHSTOPED_OFFSET))(this);
		}
	};
}
