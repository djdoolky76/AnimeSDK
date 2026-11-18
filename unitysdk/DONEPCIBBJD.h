#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJBPFFLIECG.h"

class GGFGEIILGFO;
class HPMBBDGJECD;
class LIDIOBNBEKJ;
class NOBHNPJIENI;
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DONEPCIBBJD_AJHGJGCJAFA_OFFSET UNITYSDK_OFFSET(0x1697C790)
#define DONEPCIBBJD_BJBKNHNKMJF_OFFSET UNITYSDK_OFFSET(0x1697C9E0)
#define DONEPCIBBJD_GLFLMDMJAOL_OFFSET UNITYSDK_OFFSET(0x1697C580)
#define DONEPCIBBJD_KIMJCGJHJAC_OFFSET UNITYSDK_OFFSET(0x1697C530)
#define DONEPCIBBJD_ONSTART_OFFSET UNITYSDK_OFFSET(0x1697C4F0)
#define DONEPCIBBJD__CTOR_OFFSET UNITYSDK_OFFSET(0x1697C570)

inline static constexpr unsigned int DONEPCIBBJD_TypeDefinitionIndex = 40182;

class DONEPCIBBJD : public ::DJBPFFLIECG
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONEPCIBBJD__CTOR_OFFSET))(this);
	}

	::System::Void OnStart()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONEPCIBBJD_ONSTART_OFFSET))(this);
	}

	::System::Void KIMJCGJHJAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DONEPCIBBJD_KIMJCGJHJAC_OFFSET))(this);
	}

	::System::Void GLFLMDMJAOL(::System::UInt32 LDMLDJEOJHE, ::System::Collections::Generic::List_1<::GGFGEIILGFO*>* FIDIGPNAFGB, ::System::Action_1<::LIDIOBNBEKJ*>* DMPEOJCCCLO, ::System::Action_1<::LIDIOBNBEKJ*>* LJFKEJMODMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Collections::Generic::List_1<::GGFGEIILGFO*>*, ::System::Action_1<::LIDIOBNBEKJ*>*, ::System::Action_1<::LIDIOBNBEKJ*>*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_GLFLMDMJAOL_OFFSET))(this, LDMLDJEOJHE, FIDIGPNAFGB, DMPEOJCCCLO, LJFKEJMODMK);
	}

	::System::Void AJHGJGCJAFA(::System::UInt32 LDMLDJEOJHE, ::System::UInt32 BHFMGOJHOEA, ::System::Action_1<::NOBHNPJIENI*>* DMPEOJCCCLO, ::System::Action_1<::NOBHNPJIENI*>* LJFKEJMODMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::Action_1<::NOBHNPJIENI*>*, ::System::Action_1<::NOBHNPJIENI*>*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_AJHGJGCJAFA_OFFSET))(this, LDMLDJEOJHE, BHFMGOJHOEA, DMPEOJCCCLO, LJFKEJMODMK);
	}

	::System::Void BJBKNHNKMJF(::System::Int32 INEPJABHIIG, ::System::Action_1<::HPMBBDGJECD*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::HPMBBDGJECD*>*))((::PBYTE)hIl2Cpp + DONEPCIBBJD_BJBKNHNKMJF_OFFSET))(this, INEPJABHIIG, EJGDHCIBCJH);
	}
};
