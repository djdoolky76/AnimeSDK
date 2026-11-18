#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/CodeDom/CodeTypeDeclaration.h"

namespace System { class String; }
namespace System::CodeDom { class CodeParameterDeclarationExpressionCollection; }
namespace System::CodeDom { class CodeTypeReference; }

#define SYSTEM_CODEDOM_CODETYPEDELEGATE_GET_PARAMETERS_OFFSET UNITYSDK_OFFSET(0x1CFA3D70)
#define SYSTEM_CODEDOM_CODETYPEDELEGATE_GET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1CFA3DB0)
#define SYSTEM_CODEDOM_CODETYPEDELEGATE_SET_RETURNTYPE_OFFSET UNITYSDK_OFFSET(0x1CFA3DF0)
#define SYSTEM_CODEDOM_CODETYPEDELEGATE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1CFA3D30)
#define SYSTEM_CODEDOM_CODETYPEDELEGATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFA3CF0)

namespace System::CodeDom
{
	inline static constexpr unsigned int CodeTypeDelegate_TypeDefinitionIndex = 4282;

	class CodeTypeDelegate : public ::System::CodeDom::CodeTypeDeclaration
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDELEGATE__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDELEGATE__CTOR_1_OFFSET))(this, name);
		}

		::System::CodeDom::CodeParameterDeclarationExpressionCollection* get_Parameters()
		{
			return ((::System::CodeDom::CodeParameterDeclarationExpressionCollection*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDELEGATE_GET_PARAMETERS_OFFSET))(this);
		}

		::System::CodeDom::CodeTypeReference* get_ReturnType()
		{
			return ((::System::CodeDom::CodeTypeReference*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDELEGATE_GET_RETURNTYPE_OFFSET))(this);
		}

		::System::Void set_ReturnType(::System::CodeDom::CodeTypeReference* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::CodeDom::CodeTypeReference*))((::PBYTE)hIl2Cpp + SYSTEM_CODEDOM_CODETYPEDELEGATE_SET_RETURNTYPE_OFFSET))(this, value);
		}
	};
}
