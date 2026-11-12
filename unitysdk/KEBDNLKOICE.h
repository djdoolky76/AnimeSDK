#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KIDPCOMKMKJ.h"
class BOGCBDLBHFK;

#define KEBDNLKOICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA69D10)
#define KEBDNLKOICE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DA69D30)
#define KEBDNLKOICE_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1DA69E30)
#define KEBDNLKOICE_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0x1DA6A4F0)

inline static constexpr unsigned int KEBDNLKOICE_TypeDefinitionIndex = 43451;

	class KEBDNLKOICE : public ::KIDPCOMKMKJ
	{
	public:
		::BOGCBDLBHFK* GMFGOGHADKD; // 0x18
		::System::Single PGMIOKKLHIE; // 0x20
		::System::Single HBDJCFFDGDD; // 0x24
		::System::Void _ctor(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEBDNLKOICE_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBDNLKOICE_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEBDNLKOICE_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KEBDNLKOICE_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
