#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Capture; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_PARSER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x153B3950)
#define XLUA_TEMPLATEENGINE_PARSER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x153B3990)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET UNITYSDK_OFFSET(0x153B39A0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET UNITYSDK_OFFSET(0x153B3A20)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET UNITYSDK_OFFSET(0x153B3AC0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET UNITYSDK_OFFSET(0x153B3B40)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET UNITYSDK_OFFSET(0x153B3B60)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser___c_TypeDefinitionIndex = 50289;

	class Parser___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9D0);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9D8);
		}

		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9E0);
		}

		static ::System::Func_2<::System::Object*, ::XLua::TemplateEngine::Chunk*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::System::Object*, ::XLua::TemplateEngine::Chunk*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9E8);
		}

		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9F0);
		}

		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x6F9F8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C_CTOR_OFFSET))(this);
		}

		::System::Object* _Parse_b__7_0(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET))(this, a1);
		}

		::System::Object* _Parse_b__7_1(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET))(this, a1);
		}

		::System::Object* _Parse_b__7_2(::System::Text::RegularExpressions::Capture* a1)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Text::RegularExpressions::Capture*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET))(this, a1);
		}

		::System::Int32 _Parse_b__7_3(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET))(this, a1);
		}

		::XLua::TemplateEngine::Chunk* _Parse_b__7_4(::System::Object* a1)
		{
			return ((::XLua::TemplateEngine::Chunk*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET))(this, a1);
		}

	};
}
