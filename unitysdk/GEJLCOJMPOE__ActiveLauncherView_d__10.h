#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class GEJLCOJMPOE;
class PAIJKCEOIJP;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::Client::Prop { class DestroyRootPuzzleChess; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class WaitForSeconds; }

#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_CTOR_OFFSET UNITYSDK_OFFSET(0x159DC2B0)
#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x159DCD10)
#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159DDAD0)
#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x159DDB30)
#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x159DDAE0)
#define GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x159DCCE0)

inline static constexpr unsigned int GEJLCOJMPOE__ActiveLauncherView_d__10_TypeDefinitionIndex = 78540;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10>
	class GEJLCOJMPOE__ActiveLauncherView_d__10 : public ::System::Object
	{
	public:
		::GEJLCOJMPOE* __4__this; // 0x10
		::RPG::Client::MonoEffectManager* _monoEffectManager_5__10; // 0x18
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::PAIJKCEOIJP*>*>* chessDetectInfos; // 0x20
		::RPG::Client::Prop::DestroyRootPuzzleChess* _chess_5__4; // 0x28
		::RPG::Client::Prop::DestroyRootPuzzleChess* _lastChess_5__3; // 0x30
		::System::Object* __2__current; // 0x38
		::PAIJKCEOIJP* _curDetectInfo_5__2; // 0x40
		::UnityEngine::WaitForSeconds* waitSecond; // 0x48
		::UnityEngine::Vector3 _lastChessPosition_5__8; // 0x50
		::System::Boolean result; // 0x5C
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 _lastDirection_5__5; // 0x60
		::System::Int32 _i_5__6; // 0x6C
		::System::Int32 _j_5__7; // 0x70
		::UnityEngine::Vector3 _chessPosition_5__9; // 0x74
		::System::Int32 __1__state; // 0x80
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GEJLCOJMPOE__ACTIVELAUNCHERVIEW_D__10_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
