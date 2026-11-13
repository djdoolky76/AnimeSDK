#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HGCPKGBMMPH;
class HLFEDPHBLBE;

#define HGCPKGBMMPH___C__DISPLAYCLASS23_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1C439D30)
#define HGCPKGBMMPH___C__DISPLAYCLASS23_0__SETPROGRESSINFO_B__0_OFFSET UNITYSDK_OFFSET(0x1C43A350)

inline static constexpr unsigned int HGCPKGBMMPH___c__DisplayClass23_0_TypeDefinitionIndex = 73697;

	class HGCPKGBMMPH___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::HLFEDPHBLBE* info; // 0x10
		::HGCPKGBMMPH* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH___C__DISPLAYCLASS23_0_CTOR_OFFSET))(this);
		}

		::System::Void _SetProgressInfo_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HGCPKGBMMPH___C__DISPLAYCLASS23_0__SETPROGRESSINFO_B__0_OFFSET))(this);
		}

	};
