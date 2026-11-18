#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Flow.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"

class FBAMLABJMKF;
namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }
namespace FlowCanvas { template <typename T> class ValueOutput_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GETTIME_OFFSET UNITYSDK_OFFSET(0x104014E0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET UNITYSDK_OFFSET(0x10400C90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DELAY_OFFSET UNITYSDK_OFFSET(0x10400A30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DISCRETEMODE_OFFSET UNITYSDK_OFFSET(0x10400B80)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x10400C80)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISPAUSED_OFFSET UNITYSDK_OFFSET(0x10400C00)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXX_OFFSET UNITYSDK_OFFSET(0x104008B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXY_OFFSET UNITYSDK_OFFSET(0x104009B0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINX_OFFSET UNITYSDK_OFFSET(0x10400830)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINY_OFFSET UNITYSDK_OFFSET(0x10400930)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_INVOKE_OFFSET UNITYSDK_OFFSET(0x10401580)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10400D90)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x10401AD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_START_OFFSET UNITYSDK_OFFSET(0x104019C0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_STOP_OFFSET UNITYSDK_OFFSET(0x104018A0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_UPDATE_OFFSET UNITYSDK_OFFSET(0x10401080)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x10401B30)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_0_OFFSET UNITYSDK_OFFSET(0x10401BD0)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_1_OFFSET UNITYSDK_OFFSET(0x10401C00)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_2_OFFSET UNITYSDK_OFFSET(0x10401C10)
#define MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_3_OFFSET UNITYSDK_OFFSET(0x10401C20)

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int HackerGameWaveActionNode_TypeDefinitionIndex = 59645;

	class HackerGameWaveActionNode : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::Flow _flow; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* _maxX; // 0xD0
		::FlowCanvas::ValueOutput_1<::System::Int32>* _yOutput; // 0xD8
		::FlowCanvas::ValueInput_1<::System::Int32>* _maxY; // 0xE0
		::FlowCanvas::ValueInput_1<::System::Int32>* _minY; // 0xE8
		::FlowCanvas::FlowOutput* _invokeColumn; // 0xF0
		::FlowCanvas::FlowInput* _start; // 0xF8
		::FlowCanvas::ValueInput_1<::System::Boolean>* _discreteMode; // 0x100
		::FlowCanvas::FlowOutput* _invokeCell; // 0x108
		::FlowCanvas::ValueInput_1<::System::Int32>* _minX; // 0x110
		::FlowCanvas::FlowOutput* _invokeFinish; // 0x118
		::FlowCanvas::FlowOutput* _output; // 0x120
		::FlowCanvas::ValueInput_1<::System::Boolean>* _isPaused; // 0x128
		::FlowCanvas::ValueOutput_1<::System::Int32>* _xOutput; // 0x130
		::FlowCanvas::ValueInput_1<::System::Collections::Generic::List_1<::System::Single>*>* _delay; // 0x138
		::FlowCanvas::ValueOutput_1<::MoleMole::HollowChessboard::HollowCell>* _cellOutput; // 0x140
		::System::Int32 _x; // 0x148
		::System::Int32 _y; // 0x14C
		::System::Single _timer; // 0x150
		::MoleMole::HollowChessboard::HollowCell _cell; // 0x154
		::System::Boolean _isActive; // 0x160
		::System::Byte _padding0[0x3];
		::System::Int32 _indexCache; // 0x164

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__CTOR_OFFSET))(this);
		}

		::System::Int32 get_MinX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINX_OFFSET))(this);
		}

		::System::Int32 get_MaxX()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXX_OFFSET))(this);
		}

		::System::Int32 get_MinY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MINY_OFFSET))(this);
		}

		::System::Int32 get_MaxY()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_MAXY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::System::Single>* get_Delay()
		{
			return ((::System::Collections::Generic::List_1<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DELAY_OFFSET))(this);
		}

		::System::Boolean get_DiscreteMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_DISCRETEMODE_OFFSET))(this);
		}

		::System::Boolean get_IsPaused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISPAUSED_OFFSET))(this);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_ISACTIVE_OFFSET))(this);
		}

		::FBAMLABJMKF* get_CurrentChessboard()
		{
			return ((::FBAMLABJMKF*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GET_CURRENTCHESSBOARD_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_UPDATE_OFFSET))(this);
		}

		::System::Single GetTime(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_GETTIME_OFFSET))(this, index);
		}

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_INVOKE_OFFSET))(this, index);
		}

		::System::Void Start(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_START_OFFSET))(this, flow);
		}

		::System::Void Stop(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_STOP_OFFSET))(this, flow);
		}

		::System::Void SetActive(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE_SETACTIVE_OFFSET))(this, value);
		}

		::System::Void _RegisterPorts_b__40_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_0_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__40_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_1_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__40_2()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_2_OFFSET))(this);
		}

		::MoleMole::HollowChessboard::HollowCell _RegisterPorts_b__40_3()
		{
			return ((::MoleMole::HollowChessboard::HollowCell(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_HACKERGAMEWAVEACTIONNODE__REGISTERPORTS_B__40_3_OFFSET))(this);
		}
	};
}
