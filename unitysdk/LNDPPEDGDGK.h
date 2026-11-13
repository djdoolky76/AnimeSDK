#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LNDPPEDGDGK_LMAKDHLPAMP;
namespace RPG::Client::Promises { class IPromise; }

#define LNDPPEDGDGK_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFE1620)
#define LNDPPEDGDGK_DMKJAJLNEBK_OFFSET UNITYSDK_OFFSET(0x1AFE0DF0)
#define LNDPPEDGDGK_EHADKENNBNN_OFFSET UNITYSDK_OFFSET(0x1AFE13E0)
#define LNDPPEDGDGK_KGJAMKFPOAB_OFFSET UNITYSDK_OFFSET(0x1AFE1540)
#define LNDPPEDGDGK_LACCNHPILGH_OFFSET UNITYSDK_OFFSET(0x1AFE14B0)
#define LNDPPEDGDGK_LGLHEBBDLJF_OFFSET UNITYSDK_OFFSET(0x1AFE15A0)
#define LNDPPEDGDGK__SHOWUNTILCOVERED_B__1_0_OFFSET UNITYSDK_OFFSET(0x1AFE1630)

inline static constexpr unsigned int LNDPPEDGDGK_TypeDefinitionIndex = 77114;

	class LNDPPEDGDGK : public ::System::Object
	{
	public:
		::LNDPPEDGDGK_LMAKDHLPAMP* HBDGFLPGFJE; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* DMKJAJLNEBK()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_DMKJAJLNEBK_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* EHADKENNBNN()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_EHADKENNBNN_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* LACCNHPILGH()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_LACCNHPILGH_OFFSET))(this);
		}

		::System::Void KGJAMKFPOAB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_KGJAMKFPOAB_OFFSET))(this);
		}

		::System::Boolean LGLHEBBDLJF(::LNDPPEDGDGK_LMAKDHLPAMP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::LNDPPEDGDGK_LMAKDHLPAMP*))((::PBYTE)hIl2Cpp + LNDPPEDGDGK_LGLHEBBDLJF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* _ShowUntilCovered_b__1_0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNDPPEDGDGK__SHOWUNTILCOVERED_B__1_0_OFFSET))(this);
		}

	};
