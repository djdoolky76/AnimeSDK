#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_4.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_FRONT_OFFSET UNITYSDK_OFFSET(0x174D70F0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_PUSH_OFFSET UNITYSDK_OFFSET(0x174D6CA0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_REMOVE_OFFSET UNITYSDK_OFFSET(0x174D6F80)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK__CCTOR_OFFSET UNITYSDK_OFFSET(0x174D71F0)
#define MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK__CTOR_OFFSET UNITYSDK_OFFSET(0x174D7160)

namespace MoleMole
{
	inline static constexpr unsigned int BigSceneMiscLogicSubSystem_SceneGameObjectsSwitcherIndexStack_TypeDefinitionIndex = 39728;

	class BigSceneMiscLogicSubSystem_SceneGameObjectsSwitcherIndexStack : public ::System::Object
	{
	public:
		static ::System::UInt16* StaticGet__flag()
		{
			return (::System::UInt16*)Il2CppClass::FromTypeDefinitionIndex(BigSceneMiscLogicSubSystem_SceneGameObjectsSwitcherIndexStack_TypeDefinitionIndex)->GetStaticField(0x114B0);
		}
		::System::Collections::Generic::Stack_1<::System::Int32>* _free; // 0x10
		::System::Collections::Generic::List_1<::System::ValueTuple_4<::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32>>* _stack; // 0x18
		::System::Int32 _frontIndex; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK__CCTOR_OFFSET))();
		}

		::System::UInt32 Push(::System::Int32 index)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_PUSH_OFFSET))(this, index);
		}

		::System::Boolean Remove(::System::UInt32 pushIdx)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_REMOVE_OFFSET))(this, pushIdx);
		}

		::System::Int32 Front()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BIGSCENEMISCLOGICSUBSYSTEM_SCENEGAMEOBJECTSSWITCHERINDEXSTACK_FRONT_OFFSET))(this);
		}
	};
}
