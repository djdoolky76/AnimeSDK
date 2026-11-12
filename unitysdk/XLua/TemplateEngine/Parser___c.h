#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Text::RegularExpressions { class Capture; }
namespace XLua::TemplateEngine { class Chunk; }

#define XLUA_TEMPLATEENGINE_PARSER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x162F5CB0)
#define XLUA_TEMPLATEENGINE_PARSER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x162F5CF0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_0_OFFSET UNITYSDK_OFFSET(0x162F5D00)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_1_OFFSET UNITYSDK_OFFSET(0x162F5D80)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_2_OFFSET UNITYSDK_OFFSET(0x162F5E20)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_3_OFFSET UNITYSDK_OFFSET(0x162F5EA0)
#define XLUA_TEMPLATEENGINE_PARSER___C__PARSE_B__7_4_OFFSET UNITYSDK_OFFSET(0x162F5EC0)

namespace XLua::TemplateEngine
{
	inline static constexpr unsigned int Parser___c_TypeDefinitionIndex = 51340;

	class Parser___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_1()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69C80);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69C88);
		}

		static ::System::Func_2<::System::Object*, ::XLua::TemplateEngine::Chunk*>** StaticGet___9__7_4()
		{
			return (::System::Func_2<::System::Object*, ::XLua::TemplateEngine::Chunk*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69C90);
		}

		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_2()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69C98);
		}

		static ::System::Func_2<::System::Object*, ::System::Int32>** StaticGet___9__7_3()
		{
			return (::System::Func_2<::System::Object*, ::System::Int32>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69CA0);
		}

		static ::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>** StaticGet___9__7_0()
		{
			return (::System::Func_2<::System::Text::RegularExpressions::Capture*, ::System::Object*>**)UnitySDK::FromName("XLua.TemplateEngine", "<>c")->GetStaticField(0x69CA8);
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
