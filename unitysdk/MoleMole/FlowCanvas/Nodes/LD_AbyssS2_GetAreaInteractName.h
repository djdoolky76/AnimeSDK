#pragma once
#include "unitysdk/unitysdk.h"

class MFHGKCPFCNC;
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_GETAREANAMEBYAREAID_OFFSET UNITYSDK_OFFSET(0x1245CBD0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245C720)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME__CTOR_OFFSET UNITYSDK_OFFSET(0x1245CE50)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_GetAreaInteractName_TypeDefinitionIndex = 60995;

	class LD_AbyssS2_GetAreaInteractName
	{
	public:
		// static const ::System::String* MultiAreaNameBoard; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME__CTOR_OFFSET))(this);
		}

		::System::String* Invoke(::System::Int32 areaSelectIndex)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_INVOKE_OFFSET))(this, areaSelectIndex);
		}

		::System::String* GetAreaNameByAreaID(::MFHGKCPFCNC* rfMapArea)
		{
			return ((::System::String*(*)(::PVOID, ::MFHGKCPFCNC*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_GETAREAINTERACTNAME_GETAREANAMEBYAREAID_OFFSET))(this, rfMapArea);
		}
	};
}
