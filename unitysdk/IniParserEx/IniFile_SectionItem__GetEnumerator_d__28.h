#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IniParserEx/IniFile_SectionItem_SectionItemType.h"
#include "unitysdk/System/Object.h"
namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class Object; }

#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_CTOR_OFFSET UNITYSDK_OFFSET(0x1F39A460)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1F39A9B0)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_INIPARSEREX_INIFILE_SECTIONITEM__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F39ADF0)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1F39AE50)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1F39AE00)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1F39A970)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1F39A990)
#define INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1F39A9A0)

namespace IniParserEx
{
	inline static constexpr unsigned int IniFile_SectionItem__GetEnumerator_d__28_TypeDefinitionIndex = 3938;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24, typename T25, typename T26, typename T27, typename T28>
	class IniFile_SectionItem__GetEnumerator_d__28 : public ::System::Object
	{
	public:
		::System::Int32 __1__state; // 0x10
		::System::Byte _padding0[0x4];
		::IniParserEx::IniFile_SectionItem* __2__current; // 0x18
		::IniParserEx::IniFile_SectionItem* __4__this; // 0x20
		::IniParserEx::IniFile_SectionItem_SectionItemType __s__1; // 0x28
		::System::Byte _padding1[0x4];
		::System::Object* __s__2; // 0x30
		::System::Byte _padding2[0x10];
		::IniParserEx::IniFile_SectionItem* _sectionItem_5__3; // 0x48
		::System::Object* __s__4; // 0x50
		::System::Byte _padding3[0x10];
		::IniParserEx::IniFile_SectionItem* _value_5__5; // 0x68
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28___M__FINALLY2_OFFSET))(this);
		}

		::IniParserEx::IniFile_SectionItem* System_Collections_Generic_IEnumerator_IniParserEx_IniFile_SectionItem__get_Current()
		{
			return ((::IniParserEx::IniFile_SectionItem*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_INIPARSEREX_INIFILE_SECTIONITEM__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM__GETENUMERATOR_D__28_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
}
