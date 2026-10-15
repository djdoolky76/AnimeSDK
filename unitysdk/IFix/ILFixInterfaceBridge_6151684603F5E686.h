#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFix/Core/AnonymousStorey.h"
namespace IFix::Core { class VirtualMachine; }
namespace System { class Object; }

#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_CTOR_OFFSET UNITYSDK_OFFSET(0x1C536910)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C536000)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_REFASYNCBUILDERSTARTMETHOD_OFFSET UNITYSDK_OFFSET(0x1C536A30)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C5365B0)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C536130)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C536760)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C536400)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C5362E0)
#define IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C535EE0)

namespace IFix
{
	inline static constexpr unsigned int ILFixInterfaceBridge_6151684603F5E686_TypeDefinitionIndex = 41630;

	class ILFixInterfaceBridge_6151684603F5E686 : public ::IFix::Core::AnonymousStorey
	{
	public:
		::System::Int32 methodId_3; // 0x40
		::System::Int32 methodId_5; // 0x44
		::System::Int32 methodId_0; // 0x48
		::System::Int32 methodId_6; // 0x4C
		::System::Int32 methodId_2; // 0x50
		::System::Int32 methodId_4; // 0x54
		::System::Int32 methodId_1; // 0x58
		::System::Void _ctor(::System::Int32 a1, ::Il2CppArray<::System::Int32>* a2, ::System::Int32 a3, ::Il2CppArray<::System::Int32>* a4, ::Il2CppArray<::System::Int32>* a5, ::IFix::Core::VirtualMachine* a6)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::System::Int32, ::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*, ::IFix::Core::VirtualMachine*))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_RPG_Client_CompilerFramework_Syntax_SyntaxNode__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerable_RPG_Client_CompilerFramework_Syntax_SyntaxNode__GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

		::System::Void RefAsyncBuilderStartMethod()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFIX_ILFIXINTERFACEBRIDGE_6151684603F5E686_REFASYNCBUILDERSTARTMETHOD_OFFSET))(this);
		}

	};
}
