#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/ValueTuple_2.h"

class FJCBDKKEMMD;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JIOLKHEFCBC_JGFGIPAKEKB_GEPAKPDIFEF_OFFSET UNITYSDK_OFFSET(0x1B635260)
#define JIOLKHEFCBC_JGFGIPAKEKB_GMKMJGHEMEP_OFFSET UNITYSDK_OFFSET(0x1B6353C0)
#define JIOLKHEFCBC_JGFGIPAKEKB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6351E0)

inline static constexpr unsigned int JIOLKHEFCBC_JGFGIPAKEKB_TypeDefinitionIndex = 9590;

class JIOLKHEFCBC_JGFGIPAKEKB : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::FJCBDKKEMMD*>* POIPBCHBICL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIOLKHEFCBC_JGFGIPAKEKB__CTOR_OFFSET))(this);
	}

	::System::ValueTuple_2<::FJCBDKKEMMD*, ::System::Int32> GEPAKPDIFEF(::System::DateTime ALLNOLHHJMD)
	{
		return ((::System::ValueTuple_2<::FJCBDKKEMMD*, ::System::Int32>(*)(::PVOID, ::System::DateTime))((::PBYTE)hIl2Cpp + JIOLKHEFCBC_JGFGIPAKEKB_GEPAKPDIFEF_OFFSET))(this, ALLNOLHHJMD);
	}

	::System::ValueTuple_2<::FJCBDKKEMMD*, ::System::Int32> GMKMJGHEMEP(::System::Int32 FJHBHALGCKO)
	{
		return ((::System::ValueTuple_2<::FJCBDKKEMMD*, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JIOLKHEFCBC_JGFGIPAKEKB_GMKMJGHEMEP_OFFSET))(this, FJHBHALGCKO);
	}
};
