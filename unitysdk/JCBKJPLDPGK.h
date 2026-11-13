#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class FDIJOIBLFPA;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JCBKJPLDPGK_CTOR_OFFSET UNITYSDK_OFFSET(0x19A7D860)
#define JCBKJPLDPGK_JCHNLIJAPFL_OFFSET UNITYSDK_OFFSET(0x19A7D4E0)
#define JCBKJPLDPGK_KPPNNPEIMNK_OFFSET UNITYSDK_OFFSET(0x19A7D0D0)
#define JCBKJPLDPGK_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x19A7CBA0)
#define JCBKJPLDPGK_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19A7D080)
#define JCBKJPLDPGK__ONBIND_OFFSET UNITYSDK_OFFSET(0x19A7C8B0)
#define JCBKJPLDPGK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19A7CAE0)
#define JCBKJPLDPGK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19A7CC50)

inline static constexpr unsigned int JCBKJPLDPGK_TypeDefinitionIndex = 73928;

	class JCBKJPLDPGK : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::FDIJOIBLFPA*>* MLJDAEMEBFJ; // 0x60
		::RPG::GameCore::TurnBasedAbilityComponent* HFFKONIDMGL; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::System::Int32 CIAIBKIAHLB; // 0x78
		// static const ::System::String* DJCBDJMACFH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBKJPLDPGK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBKJPLDPGK__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + JCBKJPLDPGK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + JCBKJPLDPGK_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBKJPLDPGK_ONRETURN_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBKJPLDPGK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void KPPNNPEIMNK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCBKJPLDPGK_KPPNNPEIMNK_OFFSET))(this);
		}

		::System::Void JCHNLIJAPFL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JCBKJPLDPGK_JCHNLIJAPFL_OFFSET))(this, a1);
		}

	};
