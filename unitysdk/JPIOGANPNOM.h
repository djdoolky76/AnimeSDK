#pragma once
#include "unitysdk/unitysdk.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IContext; }
namespace Entitas { class IEntity; }

#define JPIOGANPNOM_AAJNAFJEDHB_OFFSET UNITYSDK_OFFSET(0xB2C48B0)
#define JPIOGANPNOM_CTOR_OFFSET UNITYSDK_OFFSET(0xB2C43B0)
#define JPIOGANPNOM__GETCUSTOMVISIBLESOURCE_OFFSET UNITYSDK_OFFSET(0xB2C4860)
#define JPIOGANPNOM__GETDELTATIME_OFFSET UNITYSDK_OFFSET(0xB2C45F0)
#define JPIOGANPNOM__GETENTITYVISIBLECOMPONENTREASON_OFFSET UNITYSDK_OFFSET(0xB2C4810)
#define JPIOGANPNOM__GETLEVELVARINVISIBLEREASON_OFFSET UNITYSDK_OFFSET(0xB2C47C0)
#define JPIOGANPNOM__ONDITHERZEROVALUECHANGE_OFFSET UNITYSDK_OFFSET(0xB2C4650)
#define JPIOGANPNOM__ONTEARDOWN_OFFSET UNITYSDK_OFFSET(0xB2C46B0)

inline static constexpr unsigned int JPIOGANPNOM_TypeDefinitionIndex = 76921;

	class JPIOGANPNOM
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x68
		::NDDFLGNNMDK* FKINCGODJEP; // 0x70
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + JPIOGANPNOM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single _GetDeltaTime(::HIOEAKHGILF* a1)
		{
			return ((::System::Single(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JPIOGANPNOM__GETDELTATIME_OFFSET))(this, a1);
		}

		::System::Void _OnDitherZeroValueChange(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + JPIOGANPNOM__ONDITHERZEROVALUECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIOGANPNOM__ONTEARDOWN_OFFSET))(this);
		}

		::System::UInt32 _GetLevelVarInvisibleReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIOGANPNOM__GETLEVELVARINVISIBLEREASON_OFFSET))(this);
		}

		::System::UInt32 _GetEntityVisibleComponentReason()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIOGANPNOM__GETENTITYVISIBLECOMPONENTREASON_OFFSET))(this);
		}

		::System::UInt32 _GetCustomVisibleSource()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + JPIOGANPNOM__GETCUSTOMVISIBLESOURCE_OFFSET))(this);
		}

		::System::Void AAJNAFJEDHB(::Entitas::IContext* a1, ::Entitas::IEntity* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Entitas::IContext*, ::Entitas::IEntity*))((::PBYTE)hIl2Cpp + JPIOGANPNOM_AAJNAFJEDHB_OFFSET))(this, a1, a2);
		}

	};
