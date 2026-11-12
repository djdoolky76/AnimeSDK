#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GameComponentBase.h"
namespace System { class Object; }

#define IOFOKNJPJHL_BEEFEKPELLK_OFFSET UNITYSDK_OFFSET(0xB834240)
#define IOFOKNJPJHL_CTOR_OFFSET UNITYSDK_OFFSET(0xB8340B0)
#define IOFOKNJPJHL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB834120)
#define IOFOKNJPJHL_RESETTODEFAULT_OFFSET UNITYSDK_OFFSET(0xB835060)

inline static constexpr unsigned int IOFOKNJPJHL_TypeDefinitionIndex = 58789;

	class IOFOKNJPJHL : public ::RPG::GameCore::GameComponentBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOKNJPJHL_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOKNJPJHL_DISPOSE_OFFSET))(this);
		}

		::System::Void BEEFEKPELLK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IOFOKNJPJHL_BEEFEKPELLK_OFFSET))(this, a1);
		}

		::System::Void ResetToDefault()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOFOKNJPJHL_RESETTODEFAULT_OFFSET))(this);
		}

	};
