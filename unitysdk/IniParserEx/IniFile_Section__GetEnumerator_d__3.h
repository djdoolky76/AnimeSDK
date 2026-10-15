#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"
namespace IniParserEx { class IniFile_Section; }
namespace System { class Object; }
namespace System { class String; }

#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_CTOR_OFFSET UNITYSDK_OFFSET(0x1F399BE0)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F399C80)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTIONITEM___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F399DF0)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F399E50)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F399E00)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F399C60)
#define INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F399C70)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_Section__GetEnumerator_d__3_TypeDefinitionIndex = 3933;

	template <typename T1, typename T2, typename T3>
	class IniFile_Section__GetEnumerator_d__3 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> __2__current; // 0x18
		::System::Byte _padding1[0x8];
		::IniParserEx::IniFile_Section* __4__this; // 0x28
		::System::Object* __s__1; // 0x30
		::System::Byte _padding2[0x20];
		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> _keyValuePair_5__2; // 0x58
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3___M__FINALLY1_OFFSET))(this);
		}

		::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_IniParserEx_IniFile_SectionItem___get_Current()
		{
			return ((::System::Collections::Generic::KeyValuePair_2<::System::String*, ::System::Object*>(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_COLLECTIONS_GENERIC_KEYVALUEPAIR_SYSTEM_STRING_INIPARSEREX_INIFILE_SECTIONITEM___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTION__GETENUMERATOR_D__3_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
