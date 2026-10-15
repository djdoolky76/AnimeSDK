#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
class EPMNMBHHEGL;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace UnityEngine::UI { class Image; }

#define IDDFICCDOMI_CTOR_OFFSET UNITYSDK_OFFSET(0x15EB5910)
#define IDDFICCDOMI_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x15EB54B0)
#define IDDFICCDOMI_MDOFPEBJCKA_OFFSET UNITYSDK_OFFSET(0x15EB5820)
#define IDDFICCDOMI_NKPPGDENJAE_OFFSET UNITYSDK_OFFSET(0x15EB55A0)
#define IDDFICCDOMI__ONBIND_OFFSET UNITYSDK_OFFSET(0x15EB53F0)

inline static constexpr unsigned int IDDFICCDOMI_TypeDefinitionIndex = 71599;

	class IDDFICCDOMI : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* EEOBJAOPJIM; // 0x60
		::UnityEngine::UI::Image* JLHDCKNHDJH; // 0x68
		::RPG::Client::UIValueChangeAnimation* CGJKPIEFBKB; // 0x70
		::System::Boolean IDBEBIDMHME; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDFICCDOMI_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDFICCDOMI__ONBIND_OFFSET))(this);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IDDFICCDOMI_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void NKPPGDENJAE(::EPMNMBHHEGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EPMNMBHHEGL*))((::PBYTE)hIl2Cpp + IDDFICCDOMI_NKPPGDENJAE_OFFSET))(this, a1);
		}

		::System::Void MDOFPEBJCKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IDDFICCDOMI_MDOFPEBJCKA_OFFSET))(this, a1);
		}

	};
