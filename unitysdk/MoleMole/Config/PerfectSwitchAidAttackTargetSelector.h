#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTargetSelector.h"

namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_FLBFIEKHKME_OFFSET UNITYSDK_OFFSET(0x1A770320)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_OMHONDGJJGN_OFFSET UNITYSDK_OFFSET(0x1A770130)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A7703C0)
#define MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A7703B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int PerfectSwitchAidAttackTargetSelector_TypeDefinitionIndex = 57788;

	class PerfectSwitchAidAttackTargetSelector : public ::MoleMole::Config::ConfigTargetSelector
	{
	public:
		static ::System::String** StaticGet_PerfectSwitchForceLockConfigTag()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PerfectSwitchAidAttackTargetSelector_TypeDefinitionIndex)->GetStaticField(0x3E920);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR__CCTOR_OFFSET))();
		}

		::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* OMHONDGJJGN(::MoleMole::Battle::Entity* AMNIHACKELI)
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_OMHONDGJJGN_OFFSET))(this, AMNIHACKELI);
		}

		::System::String* FLBFIEKHKME()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_PERFECTSWITCHAIDATTACKTARGETSELECTOR_FLBFIEKHKME_OFFSET))(this);
		}
	};
}
