#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CEEGMMCFCBG;
namespace RPG::Client { class UIDragScope; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }

#define CHOOCCKKKDD_CTOR_OFFSET UNITYSDK_OFFSET(0xCF63590)
#define CHOOCCKKKDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCF63870)
#define CHOOCCKKKDD_ILEMLGEGLCC_OFFSET UNITYSDK_OFFSET(0xCF63630)

inline static constexpr unsigned int CHOOCCKKKDD_TypeDefinitionIndex = 49848;

	class CHOOCCKKKDD : public ::System::Object
	{
	public:
		::System::Action* MBOEDFCNCJF; // 0x10
		::System::Action* EMHNPDNGJBP; // 0x18
		::CEEGMMCFCBG* MKKLHFCCCNF; // 0x20
		::System::Void _ctor(::CEEGMMCFCBG* a1, ::RPG::Client::UIDragScope* a2, ::System::Func_3<::RPG::Client::UIDragScope*, ::System::Action*, ::System::Action*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::CEEGMMCFCBG*, ::RPG::Client::UIDragScope*, ::System::Func_3<::RPG::Client::UIDragScope*, ::System::Action*, ::System::Action*>*))((::PBYTE)hIl2Cpp + CHOOCCKKKDD_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ILEMLGEGLCC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOOCCKKKDD_ILEMLGEGLCC_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CHOOCCKKKDD_DISPOSE_OFFSET))(this);
		}

	};
