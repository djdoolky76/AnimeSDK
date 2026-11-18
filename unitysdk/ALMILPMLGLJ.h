#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define ALMILPMLGLJ_DKCCELBNBLM_1_OFFSET UNITYSDK_OFFSET(0x14375160)
#define ALMILPMLGLJ_DKCCELBNBLM_OFFSET UNITYSDK_OFFSET(0x14375030)
#define ALMILPMLGLJ_PLJOGPIBEIA_OFFSET UNITYSDK_OFFSET(0x143750B0)
#define ALMILPMLGLJ__CTOR_OFFSET UNITYSDK_OFFSET(0x14375020)

inline static constexpr unsigned int ALMILPMLGLJ_TypeDefinitionIndex = 43980;

class ALMILPMLGLJ : public ::System::Object
{
public:
	::System::Action* PLGLKDMLBLE; // 0x10
	::System::Int32 OGFPEPEEHLP; // 0x18

	::System::Void _ctor(::System::Int32 JHFKDGBCOBA, ::System::Action* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + ALMILPMLGLJ__CTOR_OFFSET))(this, JHFKDGBCOBA, EJGDHCIBCJH);
	}

	static ::ALMILPMLGLJ* DKCCELBNBLM(::System::Action* EJGDHCIBCJH)
	{
		return ((::ALMILPMLGLJ*(*)(::System::Action*))((::PBYTE)hIl2Cpp + ALMILPMLGLJ_DKCCELBNBLM_OFFSET))(EJGDHCIBCJH);
	}

	::System::Void PLJOGPIBEIA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMILPMLGLJ_PLJOGPIBEIA_OFFSET))(this);
	}

	::System::Void DKCCELBNBLM_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALMILPMLGLJ_DKCCELBNBLM_1_OFFSET))(this);
	}
};
