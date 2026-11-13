#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKDHBHBFEDD;
namespace RPG::GameCore { class AnimParamRangeEntry; }
namespace System { class String; }

#define PNMGLOKELGK_CTOR_OFFSET UNITYSDK_OFFSET(0x184C5300)
#define PNMGLOKELGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0x184C52B0)

inline static constexpr unsigned int PNMGLOKELGK_TypeDefinitionIndex = 57070;

	class PNMGLOKELGK : public ::System::Object
	{
	public:
		::RPG::GameCore::AnimParamRangeEntry* OPNIHKDKFAB; // 0x10
		::System::String* AOFHKOFDKDP; // 0x18
		::MKDHBHBFEDD* NGEALADFOOA; // 0x20
		::System::Int32 IFLMLBNGHHE; // 0x28
		::System::Boolean ANGACHKEMLG; // 0x2C
		::System::Boolean LKEOOOCDJOK; // 0x2D
		::System::Boolean FMCDBCBAAEF; // 0x2E
		::System::Boolean LBKPCHOICLE; // 0x2F
		::System::Boolean ACIFMOBGGBF; // 0x30
		::System::Boolean IOBJFEJFLJP; // 0x31
		::System::Byte _padding0[0x2];
		::System::Single GFCFHLJEHMC; // 0x34
		::System::Int32 PEKCBOAHBBK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNMGLOKELGK_DISPOSE_OFFSET))(this);
		}

	};
