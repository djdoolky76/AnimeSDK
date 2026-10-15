#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace System::Linq::Expressions { class Expression; }
namespace System::Linq::Expressions { class LambdaExpression; }

#define BPNKGIEADHA_FPKLDCGAJGP_OFFSET UNITYSDK_OFFSET(0x1EC65B30)
#define BPNKGIEADHA_JBMGIFPFHCL_OFFSET UNITYSDK_OFFSET(0x1EC65BD0)

	class BPNKGIEADHA : public ::System::Object
	{
	public:
		static ::System::String* FPKLDCGAJGP(::System::Linq::Expressions::LambdaExpression* a1)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::LambdaExpression*))((::PBYTE)hIl2Cpp + BPNKGIEADHA_FPKLDCGAJGP_OFFSET))(a1);
		}

		static ::System::String* JBMGIFPFHCL(::System::Linq::Expressions::Expression* a1)
		{
			return ((::System::String*(*)(::System::Linq::Expressions::Expression*))((::PBYTE)hIl2Cpp + BPNKGIEADHA_JBMGIFPFHCL_OFFSET))(a1);
		}

	};
