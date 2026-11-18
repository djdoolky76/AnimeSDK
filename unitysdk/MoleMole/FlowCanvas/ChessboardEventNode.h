#pragma once
#include "unitysdk/unitysdk.h"

class FBAMLABJMKF;
namespace FlowCanvas { class FlowOutput; }
namespace ParadoxNotion { class IEventData; }
namespace ParadoxNotion::Services { class EventRouter; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CHESSPIECEDATA_OFFSET UNITYSDK_OFFSET(0x142F1AD0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x142F1940)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_ONRECEIVEEVENT_OFFSET UNITYSDK_OFFSET(0x142F1890)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x142F1810)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_SUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x142F15D0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_UNSUBSCRIBE_OFFSET UNITYSDK_OFFSET(0x142F16F0)
#define MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x142F1C60)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessboardEventNode_TypeDefinitionIndex = 70032;

	class ChessboardEventNode
	{
	public:
		::FlowCanvas::FlowOutput* _onReceived; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE__CTOR_OFFSET))(this);
		}

		::System::Void Subscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_SUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void UnSubscribe(::ParadoxNotion::Services::EventRouter* router)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::Services::EventRouter*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_UNSUBSCRIBE_OFFSET))(this, router);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void OnReceiveEvent(::System::String* eventName, ::ParadoxNotion::IEventData* msg)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_ONRECEIVEEVENT_OFFSET))(this, eventName, msg);
		}

		::FBAMLABJMKF* get_CurrentChessboard()
		{
			return ((::FBAMLABJMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>* get_ChessPieceData()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_CHESSBOARDEVENTNODE_GET_CHESSPIECEDATA_OFFSET))(this);
		}
	};
}
