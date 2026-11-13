#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AkVertex;

#define AKVERTEX_CLEAR_OFFSET UNITYSDK_OFFSET(0x1EBC4CD0)
#define AKVERTEX_CLONE_OFFSET UNITYSDK_OFFSET(0x1EBC4D60)
#define AKVERTEX_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1EBC4CC0)
#define AKVERTEX_CTOR_OFFSET UNITYSDK_OFFSET(0x1EBC4CA0)
#define AKVERTEX_GETSIZEOF_OFFSET UNITYSDK_OFFSET(0x1EBC4D20)
#define AKVERTEX_GET_X_OFFSET UNITYSDK_OFFSET(0x1EBC4A80)
#define AKVERTEX_GET_Y_OFFSET UNITYSDK_OFFSET(0x1EBC4B30)
#define AKVERTEX_GET_Z_OFFSET UNITYSDK_OFFSET(0x1EBC4BE0)
#define AKVERTEX_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1EBC4C30)
#define AKVERTEX_SET_X_OFFSET UNITYSDK_OFFSET(0x1EBC4A20)
#define AKVERTEX_SET_Y_OFFSET UNITYSDK_OFFSET(0x1EBC4AD0)
#define AKVERTEX_SET_Z_OFFSET UNITYSDK_OFFSET(0x1EBC4B80)
#define AKVERTEX_ZERO_OFFSET UNITYSDK_OFFSET(0x1EBC49D0)

inline static constexpr unsigned int AkVertex_TypeDefinitionIndex = 45930;

	class AkVertex : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Vector; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_CTOR_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Zero()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_ZERO_OFFSET))(this);
		}

		::System::Void set_X(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_X_OFFSET))(this, a1);
		}

		::System::Single get_X()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_X_OFFSET))(this);
		}

		::System::Void set_Y(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_Y_OFFSET))(this, a1);
		}

		::System::Single get_Y()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_Y_OFFSET))(this);
		}

		::System::Void set_Z(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AKVERTEX_SET_Z_OFFSET))(this, a1);
		}

		::System::Single get_Z()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_GET_Z_OFFSET))(this);
		}

		static ::UnityEngine::Vector3 op_Implicit(::AkVertex* a1)
		{
			return ((::UnityEngine::Vector3(*)(::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEX_OP_IMPLICIT_OFFSET))(a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKVERTEX_CLEAR_OFFSET))(this);
		}

		static ::System::Int32 GetSizeOf()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + AKVERTEX_GETSIZEOF_OFFSET))();
		}

		::System::Void Clone(::AkVertex* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AkVertex*))((::PBYTE)hIl2Cpp + AKVERTEX_CLONE_OFFSET))(this, a1);
		}

	};
