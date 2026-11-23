#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AA3569C0D94DAF36.h"

class BF149C871C5E5229;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define E82D86580FADE667_B7467D1160860E69_OFFSET UNITYSDK_OFFSET(0x20F2320)
#define E82D86580FADE667_F19FEBA7109A027C_OFFSET UNITYSDK_OFFSET(0x20F23B0)
#define E82D86580FADE667__CTOR_OFFSET UNITYSDK_OFFSET(0x20F2540)

inline static constexpr unsigned int E82D86580FADE667_TypeDefinitionIndex = 8682;

class E82D86580FADE667 : public ::AA3569C0D94DAF36
{
public:
	::System::Collections::Generic::List_1<::BF149C871C5E5229*>* FD6C5B4532A23719; // 0x10

	::System::Void B7467D1160860E69(::BF149C871C5E5229* BC288918C940C7A6)
	{
		return ((::System::Void(*)(::PVOID, ::BF149C871C5E5229*))((::PBYTE)hIl2Cpp + E82D86580FADE667_B7467D1160860E69_OFFSET))(this, BC288918C940C7A6);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E82D86580FADE667__CTOR_OFFSET))(this);
	}

	::System::Boolean F19FEBA7109A027C()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + E82D86580FADE667_F19FEBA7109A027C_OFFSET))(this);
	}
};
