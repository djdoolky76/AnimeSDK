#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LABDAGJPPLO.h"
#include "unitysdk/MoleMole/Config/LanguageTextStyleConfig.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OHHAGPCBOKC.h"

class DGBFDMAJHJE;
namespace MoleMole::Config { class ConfigUITextStyle; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NLGBJFDJJIH_EIMHFAJLNHE_OFFSET UNITYSDK_OFFSET(0x13768910)
#define NLGBJFDJJIH_FAMKKNANKCE_OFFSET UNITYSDK_OFFSET(0x13768A40)
#define NLGBJFDJJIH__CTOR_OFFSET UNITYSDK_OFFSET(0x13768810)

inline static constexpr unsigned int NLGBJFDJJIH_TypeDefinitionIndex = 59545;

class NLGBJFDJJIH : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::LABDAGJPPLO, ::System::Object*>* ACIALOPIGAF; // 0x10
	::System::Collections::Generic::List_1<::DGBFDMAJHJE*>* MPOEFFAFBCL; // 0x18
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::LanguageTextStyleConfig>* EBNKPLGJHGF; // 0x20

	::System::Void _ctor(::MoleMole::Config::ConfigUITextStyle* DFMKILICPFB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUITextStyle*))((::PBYTE)hIl2Cpp + NLGBJFDJJIH__CTOR_OFFSET))(this, DFMKILICPFB);
	}

	::System::Boolean EIMHFAJLNHE(::System::String* ABFOABHBENH, ::MoleMole::Config::LanguageTextStyleConfig& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::LanguageTextStyleConfig&))((::PBYTE)hIl2Cpp + NLGBJFDJJIH_EIMHFAJLNHE_OFFSET))(this, ABFOABHBENH, IGAAKDOIPNN);
	}

	::System::Boolean FAMKKNANKCE(::LABDAGJPPLO& AAOCANGHBDG, ::OHHAGPCBOKC& IGAAKDOIPNN)
	{
		return ((::System::Boolean(*)(::PVOID, ::LABDAGJPPLO&, ::OHHAGPCBOKC&))((::PBYTE)hIl2Cpp + NLGBJFDJJIH_FAMKKNANKCE_OFFSET))(this, AAOCANGHBDG, IGAAKDOIPNN);
	}
};
