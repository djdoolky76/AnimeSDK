#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Object; }
namespace System::Linq::Expressions { class ConstantExpression; }
namespace System::Linq::Expressions { class DefaultExpression; }

#define SYSTEM_LINQ_EXPRESSIONS_UTILS_CCTOR_OFFSET UNITYSDK_OFFSET(0x200E5F70)

namespace System::Linq::Expressions
{
	inline static constexpr unsigned int Utils_TypeDefinitionIndex = 3282;

	class Utils : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet_BoxedDefaultByte()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF60);
		}

		static ::System::Object** StaticGet_BoxedDefaultChar()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF68);
		}

		static ::System::Object** StaticGet_BoxedInt1()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF70);
		}

		static ::System::Object** StaticGet_BoxedDefaultDecimal()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF78);
		}

		static ::System::Object** StaticGet_BoxedDefaultInt64()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF80);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_2()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF88);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_1()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF90);
		}

		static ::System::Object** StaticGet_BoxedInt2()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DF98);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_3()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFA0);
		}

		static ::System::Object** StaticGet_BoxedDefaultUInt16()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFA8);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_Null()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFB0);
		}

		static ::System::Linq::Expressions::DefaultExpression** StaticGet_Empty()
		{
			return (::System::Linq::Expressions::DefaultExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFB8);
		}

		static ::System::Object** StaticGet_BoxedDefaultDouble()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFC0);
		}

		static ::System::Object** StaticGet_BoxedFalse()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFC8);
		}

		static ::System::Object** StaticGet_BoxedInt0()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFD0);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_m1()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFD8);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_true()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFE0);
		}

		static ::System::Object** StaticGet_BoxedIntM1()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFE8);
		}

		static ::System::Object** StaticGet_BoxedTrue()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFF0);
		}

		static ::System::Object** StaticGet_BoxedDefaultUInt64()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3DFF8);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_0()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E000);
		}

		static ::System::Object** StaticGet_BoxedDefaultUInt32()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E008);
		}

		static ::System::Object** StaticGet_BoxedInt3()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E010);
		}

		static ::System::Object** StaticGet_BoxedDefaultDateTime()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E018);
		}

		static ::System::Linq::Expressions::ConstantExpression** StaticGet_s_false()
		{
			return (::System::Linq::Expressions::ConstantExpression**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E020);
		}

		static ::System::Object** StaticGet_BoxedDefaultSingle()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E028);
		}

		static ::System::Object** StaticGet_BoxedDefaultInt16()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E030);
		}

		static ::System::Object** StaticGet_BoxedDefaultSByte()
		{
			return (::System::Object**)UnitySDK::FromName("System.Linq.Expressions", "Utils")->GetStaticField(0x3E038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SYSTEM_LINQ_EXPRESSIONS_UTILS_CCTOR_OFFSET))();
		}

	};
}
