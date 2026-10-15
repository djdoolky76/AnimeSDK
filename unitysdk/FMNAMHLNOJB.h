#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define FMNAMHLNOJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA714B0)
#define FMNAMHLNOJB_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x1CA71420)
#define FMNAMHLNOJB_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0x1CA71470)

inline static constexpr unsigned int FMNAMHLNOJB_TypeDefinitionIndex = 43711;

	class FMNAMHLNOJB : public ::System::Object
	{
	public:
		::System::Single BJMAMHMCOEL; // 0x10
		::RPG::MVector3 IJHDBLGLCMN; // 0x14
		::System::Int32 LGFPMEBOHFH; // 0x20
		::System::Int32 OGCHEHDHPHE; // 0x24
		::RPG::MVector3 DLKMKNFJLIK; // 0x28
		::System::Boolean ELLNLDDDJLO; // 0x34
		::System::Boolean BNJEPENKKKJ; // 0x35
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNAMHLNOJB_CTOR_OFFSET))(this);
		}

		::System::Void LPFBANCOMPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNAMHLNOJB_LPFBANCOMPE_OFFSET))(this);
		}

		::System::Void OOCHJEEPBHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMNAMHLNOJB_OOCHJEEPBHL_OFFSET))(this);
		}

	};
