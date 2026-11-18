#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPPPCLJMLCL.h"
#include "unitysdk/System/ValueType.h"

class LFDLDKDPFIN;
namespace System { class Object; }

#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_COMPARETO_OFFSET UNITYSDK_OFFSET(0x6FB530)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6FB5A0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6FB4C0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6FB340)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETRENDERSTATUES_OFFSET UNITYSDK_OFFSET(0x6FB460)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_INDEX_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_SERIALNUMBER_OFFSET UNITYSDK_OFFSET(0x359320)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISSET_OFFSET UNITYSDK_OFFSET(0x6FB3F0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISVALID_OFFSET UNITYSDK_OFFSET(0x6FB450)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x130E0730)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x130E07E0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CCTOR_OFFSET UNITYSDK_OFFSET(0x130E08B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x479A30)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_OFFSET UNITYSDK_OFFSET(0x6FB260)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_EQUALS_OFFSET UNITYSDK_OFFSET(0x6FB5B0)
#define MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6FB620)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataHandle_TypeDefinitionIndex = 62983;

	struct alignas(8) RenderDataHandle
	{
		static ::MoleMole::HollowChessboard::RenderDataHandle* StaticGet_Default()
		{
			return (::MoleMole::HollowChessboard::RenderDataHandle*)Il2CppClass::FromTypeDefinitionIndex(RenderDataHandle_TypeDefinitionIndex)->GetStaticField(0x322A0);
		}
		::System::Int32 _serialNumber; // 0x10
		::System::Int32 _index; // 0x14
		::LFDLDKDPFIN* _statusHolder; // 0x18

		::System::Void _ctor(::System::Int32 index, ::LFDLDKDPFIN* statusHolder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::LFDLDKDPFIN*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_OFFSET))(this, index, statusHolder);
		}

		::System::Void _ctor_1(::System::Int32 serialNumber, ::System::Int32 index, ::LFDLDKDPFIN* statusHolder)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::LFDLDKDPFIN*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CTOR_1_OFFSET))(this, serialNumber, index, statusHolder);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE__CCTOR_OFFSET))();
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETHASHCODE_OFFSET))(this);
		}

		::System::Int32 get_SerialNumber()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_SERIALNUMBER_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GET_INDEX_OFFSET))(this);
		}

		::System::Boolean IsSet()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISSET_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_ISVALID_OFFSET))(this);
		}

		::LPPPCLJMLCL GetRenderStatues()
		{
			return ((::LPPPCLJMLCL(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_GETRENDERSTATUES_OFFSET))(this);
		}

		/*
		::System::Boolean Equals(::MoleMole::HollowChessboard::RenderDataHandle other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_OFFSET))(this, other);
		}
		*/

		/*
		::System::Int32 CompareTo(::MoleMole::HollowChessboard::RenderDataHandle other)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_COMPARETO_OFFSET))(this, other);
		}
		*/

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_EQUALS_1_OFFSET))(this, obj);
		}

		/*
		static ::System::Boolean op_Equality(::MoleMole::HollowChessboard::RenderDataHandle lhs, ::MoleMole::HollowChessboard::RenderDataHandle rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_EQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		/*
		static ::System::Boolean op_Inequality(::MoleMole::HollowChessboard::RenderDataHandle lhs, ::MoleMole::HollowChessboard::RenderDataHandle rhs)
		{
			return ((::System::Boolean(*)(::MoleMole::HollowChessboard::RenderDataHandle, ::MoleMole::HollowChessboard::RenderDataHandle))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
		*/

		::System::Boolean __base_Equals(::System::Object* P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_EQUALS_OFFSET))(this, P0);
		}

		::System::Int32 __base_GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_RENDERDATAHANDLE___BASE_GETHASHCODE_OFFSET))(this);
		}
	};
}
