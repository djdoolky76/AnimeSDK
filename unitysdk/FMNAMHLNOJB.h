#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"

#define FMNAMHLNOJB_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC34E40)
#define FMNAMHLNOJB_LPFBANCOMPE_OFFSET UNITYSDK_OFFSET(0x1DC34DB0)
#define FMNAMHLNOJB_OOCHJEEPBHL_OFFSET UNITYSDK_OFFSET(0x1DC34E00)

inline static constexpr unsigned int FMNAMHLNOJB_TypeDefinitionIndex = 44786;

	class FMNAMHLNOJB : public ::System::Object
	{
	public:
		::System::Int32 LGFPMEBOHFH; // 0x10
		::System::Boolean BNJEPENKKKJ; // 0x14
		::System::Boolean ELLNLDDDJLO; // 0x15
		::System::Byte _padding0[0x2];
		::System::Int32 OGCHEHDHPHE; // 0x18
		::RPG::MVector3 DLKMKNFJLIK; // 0x1C
		::RPG::MVector3 IJHDBLGLCMN; // 0x28
		::System::Single BJMAMHMCOEL; // 0x34
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
