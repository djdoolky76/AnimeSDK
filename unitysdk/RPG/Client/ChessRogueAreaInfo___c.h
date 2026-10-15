#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class ChessRogueAreaDataItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_CHESSROGUEAREAINFO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xCAE85A0)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C_CTOR_OFFSET UNITYSDK_OFFSET(0xCAE85E0)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET UNITYSDK_OFFSET(0xCAE8630)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET UNITYSDK_OFFSET(0xCAE8670)
#define RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET UNITYSDK_OFFSET(0xCAE85F0)

namespace RPG::Client
{
	class ChessRogueAreaInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__18_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D30);
		}

		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__16_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D38);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D40);
		}

		static ::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>** StaticGet___9__23_0()
		{
			return (::System::Func_2<::RPG::Client::ChessRogueAreaDataItem*, ::System::Boolean>**)UnitySDK::FromName("RPG.Client", "<>c")->GetStaticField(0x2D48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _GetRogueNousAccessibleAreaDataList_b__16_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETROGUENOUSACCESSIBLEAREADATALIST_B__16_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormalChessRogueAreaDataItem_b__18_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUEAREADATAITEM_B__18_0_OFFSET))(this, a1);
		}

		::System::Boolean _GetFormalChessRogueNousAreaDataItem_b__23_0(::RPG::Client::ChessRogueAreaDataItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::ChessRogueAreaDataItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHESSROGUEAREAINFO___C__GETFORMALCHESSROGUENOUSAREADATAITEM_B__23_0_OFFSET))(this, a1);
		}

	};
}
