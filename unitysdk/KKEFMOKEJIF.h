#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FJNBODHINDM;
namespace RPG::GameCore { class GameEntity; }

#define KKEFMOKEJIF_CDMEJGCCDOA_OFFSET UNITYSDK_OFFSET(0x173414D0)
#define KKEFMOKEJIF_CLEAR_OFFSET UNITYSDK_OFFSET(0x17341210)
#define KKEFMOKEJIF_CTOR_OFFSET UNITYSDK_OFFSET(0x173414E0)
#define KKEFMOKEJIF_DAMDMJJKLON_OFFSET UNITYSDK_OFFSET(0x17341400)
#define KKEFMOKEJIF_FIIIDGBIHNB_OFFSET UNITYSDK_OFFSET(0x17341480)
#define KKEFMOKEJIF_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x17341310)
#define KKEFMOKEJIF_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x17341250)
#define KKEFMOKEJIF_NLBNJGKAMII_OFFSET UNITYSDK_OFFSET(0x17341440)

inline static constexpr unsigned int KKEFMOKEJIF_TypeDefinitionIndex = 55128;

	class KKEFMOKEJIF : public ::System::Object
	{
	public:
		::FJNBODHINDM* CPIIOIPAAKK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_CLEAR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::FJNBODHINDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FJNBODHINDM*))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_KPJGDHLENIP_OFFSET))(this, a1);
		}

		::System::Void JKCPLEJCBML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_JKCPLEJCBML_OFFSET))(this);
		}

		::System::Void DAMDMJJKLON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_DAMDMJJKLON_OFFSET))(this);
		}

		::System::Void NLBNJGKAMII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_NLBNJGKAMII_OFFSET))(this);
		}

		::RPG::GameCore::GameEntity* FIIIDGBIHNB()
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_FIIIDGBIHNB_OFFSET))(this);
		}

		::FJNBODHINDM* CDMEJGCCDOA()
		{
			return ((::FJNBODHINDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + KKEFMOKEJIF_CDMEJGCCDOA_OFFSET))(this);
		}

	};
