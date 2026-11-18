#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/Nodes/ChessboardCoordinateTransform_TransformType.h"

#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM_INVOKE_OFFSET UNITYSDK_OFFSET(0x12447540)
#define MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM__CTOR_OFFSET UNITYSDK_OFFSET(0x12447590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int ChessboardCoordinateTransform_TypeDefinitionIndex = 85974;

	class ChessboardCoordinateTransform
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM__CTOR_OFFSET))(this);
		}

		::System::Int32 Invoke(::System::Int32 sourceIndex, ::MoleMole::FlowCanvas::Nodes::ChessboardCoordinateTransform_TransformType transformType)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::MoleMole::FlowCanvas::Nodes::ChessboardCoordinateTransform_TransformType))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_CHESSBOARDCOORDINATETRANSFORM_INVOKE_OFFSET))(this, sourceIndex, transformType);
		}
	};
}
