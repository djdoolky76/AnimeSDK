#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace IniParserEx { class IniFile_SectionItem; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3E6E60)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3E6EA0)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__MATCHMODELNAMEREGEX_B__5_0_OFFSET UNITYSDK_OFFSET(0x1F3E7050)
#define UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__USEFORCURRENTPLATFORM_B__1_0_OFFSET UNITYSDK_OFFSET(0x1F3E6EB0)

namespace UnityEngine
{
	class DefaultConsoleConfigReader_ConditionDetail___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("UnityEngine", "<>c")->GetStaticField(0x104D0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("UnityEngine", "<>c")->GetStaticField(0x104D8);
		}

		static ::System::Func_2<::System::Object*, ::System::Boolean>** StaticGet___9__1_0()
		{
			return (::System::Func_2<::System::Object*, ::System::Boolean>**)UnitySDK::FromName("UnityEngine", "<>c")->GetStaticField(0x104E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _UseForCurrentPlatform_b__1_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__USEFORCURRENTPLATFORM_B__1_0_OFFSET))(this, a1);
		}

		::System::Boolean _MatchModelNameRegEx_b__5_0(::IniParserEx::IniFile_SectionItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IniParserEx::IniFile_SectionItem*))((::PBYTE)hIl2Cpp + UNITYENGINE_DEFAULTCONSOLECONFIGREADER_CONDITIONDETAIL___C__MATCHMODELNAMEREGEX_B__5_0_OFFSET))(this, a1);
		}

	};
}
