#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class PamAnchorRow; }
namespace System { class Object; }

#define OJFPIAPCFPF__FOREACHANCHOR_D__71_CTOR_OFFSET UNITYSDK_OFFSET(0xBEB3F00)
#define OJFPIAPCFPF__FOREACHANCHOR_D__71_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xBEB41A0)
#define OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PAMANCHORROW__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBEB4390)
#define OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xBEB43F0)
#define OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xBEB43A0)
#define OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBEB4180)

inline static constexpr unsigned int OJFPIAPCFPF__ForEachAnchor_d__71_TypeDefinitionIndex = 66426;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28, typename T29, typename T30, typename T31, typename T32, typename T33, typename T34, typename T35, typename T36, typename T37, typename T38, typename T39, typename T40, typename T41, typename T42, typename T43, typename T44, typename T45, typename T46, typename T47, typename T48, typename T49, typename T50, typename T51, typename T52, typename T53, typename T54, typename T55, typename T56, typename T57, typename T58, typename T59, typename T60, typename T61, typename T62, typename T63, typename T64, typename T65, typename T66, typename T67, typename T68, typename T69, typename T70, typename T71>
	class OJFPIAPCFPF__ForEachAnchor_d__71 : public ::System::Object
	{
	public:
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::RPG::GameCore::PamAnchorRow*> _e_5__3; // 0x10
		::System::Byte _padding0[0x38];
		::RPG::GameCore::PamAnchorRow* __2__current; // 0x50
		::System::UInt32 _floorID_5__2; // 0x58
		::System::Int32 __1__state; // 0x5C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_MOVENEXT_OFFSET))(this);
		}

		::RPG::GameCore::PamAnchorRow* System_Collections_Generic_IEnumerator_RPG_GameCore_PamAnchorRow__get_Current()
		{
			return ((::RPG::GameCore::PamAnchorRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_GAMECORE_PAMANCHORROW__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + OJFPIAPCFPF__FOREACHANCHOR_D__71_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
