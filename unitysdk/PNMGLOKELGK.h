#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHBHBFEDD;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define PNMGLOKELGK_CTOR_OFFSET UNITYSDK_OFFSET(0xC346960)
#define PNMGLOKELGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC346910)

inline static constexpr unsigned int PNMGLOKELGK_TypeDefinitionIndex = 55867;

	class PNMGLOKELGK : public ::System::Object
	{
	public:
		::System::String* AOFHKOFDKDP; // 0x10
		::MKDHBHBFEDD* NGEALADFOOA; // 0x18
		::RPG::GameCore::AnimParamRangeEntry* OPNIHKDKFAB; // 0x20
		::System::Int32 PEKCBOAHBBK; // 0x28
		::System::Boolean IOBJFEJFLJP; // 0x2C
		::System::Boolean LBKPCHOICLE; // 0x2D
		::System::Boolean LKEOOOCDJOK; // 0x2E
		::System::Boolean ACIFMOBGGBF; // 0x2F
		::System::Int32 IFLMLBNGHHE; // 0x30
		::System::Single GFCFHLJEHMC; // 0x34
		::System::Boolean ANGACHKEMLG; // 0x38
		::System::Boolean FMCDBCBAAEF; // 0x39
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_DISPOSE_OFFSET))(this);
		}

	};
