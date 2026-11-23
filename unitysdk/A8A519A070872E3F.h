#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EA09AFA74AA87071.h"

class F85E9E1EC79218CF;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define A8A519A070872E3F_A24CD79521AAD3C9_OFFSET UNITYSDK_OFFSET(0x2422390)
#define A8A519A070872E3F_F364512DE797F561_OFFSET UNITYSDK_OFFSET(0x2422480)
#define A8A519A070872E3F_F913121EC9876042_OFFSET UNITYSDK_OFFSET(0x24223E0)
#define A8A519A070872E3F_FC746C2FC2DBAD0F_OFFSET UNITYSDK_OFFSET(0x2422430)
#define A8A519A070872E3F__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

inline static constexpr unsigned int A8A519A070872E3F_TypeDefinitionIndex = 4166;

class A8A519A070872E3F : public ::EA09AFA74AA87071
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A519A070872E3F__CTOR_OFFSET))(this);
	}

	::System::Boolean A24CD79521AAD3C9()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A519A070872E3F_A24CD79521AAD3C9_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::F85E9E1EC79218CF*>* F364512DE797F561()
	{
		return ((::System::Collections::Generic::List_1<::F85E9E1EC79218CF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A519A070872E3F_F364512DE797F561_OFFSET))(this);
	}

	::System::String* FC746C2FC2DBAD0F()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A519A070872E3F_FC746C2FC2DBAD0F_OFFSET))(this);
	}

	::System::String* F913121EC9876042()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + A8A519A070872E3F_F913121EC9876042_OFFSET))(this);
	}
};
