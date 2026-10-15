#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KLGICPNPKIC;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define KLGICPNPKIC__CHILDNODES_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x1C539A90)
#define KLGICPNPKIC__CHILDNODES_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1C539D80)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C53A0A0)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C53A030)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1C53A100)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1C53A090)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1C53A040)
#define KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1C539D70)

inline static constexpr unsigned int KLGICPNPKIC__ChildNodes_d__8_TypeDefinitionIndex = 41626;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class KLGICPNPKIC__ChildNodes_d__8 : public ::System::Object
	{
	public:
		::KLGICPNPKIC* __4__this; // 0x10
		::KLGICPNPKIC* __2__current; // 0x18
		::KLGICPNPKIC* _node_5__3; // 0x20
		::System::Int32 _i_5__2; // 0x28
		::System::Int32 __1__state; // 0x2C
		::System::Int32 __l__initialThreadId; // 0x30
		::System::Int32 _j_5__4; // 0x34
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_MOVENEXT_OFFSET))(this);
		}

		::KLGICPNPKIC* System_Collections_Generic_IEnumerator_RPG_Client_CompilerFramework_Syntax_SyntaxNode__get_Current()
		{
			return ((::KLGICPNPKIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::KLGICPNPKIC*>* System_Collections_Generic_IEnumerable_RPG_Client_CompilerFramework_Syntax_SyntaxNode__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::KLGICPNPKIC*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_COMPILERFRAMEWORK_SYNTAX_SYNTAXNODE__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + KLGICPNPKIC__CHILDNODES_D__8_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
