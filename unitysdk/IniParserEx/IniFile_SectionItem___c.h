#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { class KeyValuePair; }

#define INIPARSEREX_INIFILE_SECTIONITEM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3C8650)
#define INIPARSEREX_INIFILE_SECTIONITEM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C8690)
#define INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_0_OFFSET UNITYSDK_OFFSET(0x1F3C86A0)
#define INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_1_OFFSET UNITYSDK_OFFSET(0x1F3C86C0)

namespace IniParserEx
{
	class IniFile_SectionItem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>** StaticGet___9__30_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair*, ::System::String*>**)UnitySDK::FromName("IniParserEx", "<>c")->GetStaticField(0xDAB0);
		}

		static ::System::Func_2<::System::Object*, ::System::String*>** StaticGet___9__30_0()
		{
			return (::System::Func_2<::System::Object*, ::System::String*>**)UnitySDK::FromName("IniParserEx", "<>c")->GetStaticField(0xDAB8);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("IniParserEx", "<>c")->GetStaticField(0xDAC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C_CTOR_OFFSET))(this);
		}

		::System::String* _ToString_b__30_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_0_OFFSET))(this, a1);
		}

		::System::String* _ToString_b__30_1(::System::Collections::Generic::KeyValuePair* a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair*))((::PBYTE)hIl2Cpp + INIPARSEREX_INIFILE_SECTIONITEM___C__TOSTRING_B__30_1_OFFSET))(this, a1);
		}

	};
}
