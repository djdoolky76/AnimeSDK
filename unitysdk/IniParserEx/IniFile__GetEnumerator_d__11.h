#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IniParserEx { class IniFile; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { class KeyValuePair; }

#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C6B70)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F3C7630)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTION___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F3C77A0)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F3C7800)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F3C77B0)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F3C7610)
#define INIPARSEREX_INIFILE__GETENUMERATOR_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F3C7620)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile__GetEnumerator_d__11_TypeDefinitionIndex = 3939;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class IniFile__GetEnumerator_d__11 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::KeyValuePair* __2__current; // 0x18
		::System::Byte _padding1[0x8];
		::IniParserEx::IniFile* __4__this; // 0x28
		::System::Object* __s__1; // 0x30
		::System::Byte _padding2[0x20];
		::System::Collections::Generic::KeyValuePair* _keyValuePair_5__2; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair* System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_IniParserEx_IniFile_Section___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTION___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE__GETENUMERATOR_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
