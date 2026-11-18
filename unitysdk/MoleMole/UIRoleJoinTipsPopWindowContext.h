#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"
#include "unitysdk/NCBAAPCKMBD.h"

#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ID_OFFSET UNITYSDK_OFFSET(0x18892BE0)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ROLEJOINTIPSTYPE_OFFSET UNITYSDK_OFFSET(0x18892BC0)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ID_OFFSET UNITYSDK_OFFSET(0x18892BF0)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ROLEJOINTIPSTYPE_OFFSET UNITYSDK_OFFSET(0x18892BD0)
#define MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18892C00)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleJoinTipsPopWindowContext_TypeDefinitionIndex = 82070;

	class UIRoleJoinTipsPopWindowContext : public ::MoleMole::UIControllerContextBase
	{
	public:
		::NCBAAPCKMBD _RoleJoinTipsType_k__BackingField; // 0x28
		::System::Boolean ShowCancelBtn; // 0x2C
		::System::Boolean ShowGoBtn; // 0x2D
		::System::Boolean ShowOKBtn; // 0x2E
		::System::Byte _padding0[0x1];
		::System::Int32 _ID_k__BackingField; // 0x30

		::System::Void _ctor(::NCBAAPCKMBD type, ::System::Int32 id, ::System::Boolean showOK, ::System::Boolean showCancel, ::System::Boolean showGo)
		{
			return ((::System::Void(*)(::PVOID, ::NCBAAPCKMBD, ::System::Int32, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT__CTOR_OFFSET))(this, type, id, showOK, showCancel, showGo);
		}

		::NCBAAPCKMBD get_RoleJoinTipsType()
		{
			return ((::NCBAAPCKMBD(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ROLEJOINTIPSTYPE_OFFSET))(this);
		}

		::System::Void set_RoleJoinTipsType(::NCBAAPCKMBD value)
		{
			return ((::System::Void(*)(::PVOID, ::NCBAAPCKMBD))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ROLEJOINTIPSTYPE_OFFSET))(this, value);
		}

		::System::Int32 get_ID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEJOINTIPSPOPWINDOWCONTEXT_SET_ID_OFFSET))(this, value);
		}
	};
}
