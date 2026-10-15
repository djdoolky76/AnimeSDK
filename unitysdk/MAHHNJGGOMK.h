#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPMNMMGLHI.h"
#include "unitysdk/OIPMNNAHIFP.h"
class EMJFBPNNALC;
class NGHMPPEHAIL;
namespace RPG::Client::Promises { class IPromise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MAHHNJGGOMK_CTOR_OFFSET UNITYSDK_OFFSET(0xB84DD80)
#define MAHHNJGGOMK_EFEHPJBKGOK_OFFSET UNITYSDK_OFFSET(0xB84DE00)
#define MAHHNJGGOMK_FIFHPGPOKOF_OFFSET UNITYSDK_OFFSET(0xB84E1E0)
#define MAHHNJGGOMK_FOPDADLKMJF_OFFSET UNITYSDK_OFFSET(0xB84DFA0)
#define MAHHNJGGOMK_KNECLAAKDCP_OFFSET UNITYSDK_OFFSET(0xB84E710)
#define MAHHNJGGOMK_OJNKDPOPLFP_OFFSET UNITYSDK_OFFSET(0xB84E6C0)
#define MAHHNJGGOMK__UNLOCKAVATARPATH_B__3_0_OFFSET UNITYSDK_OFFSET(0xB84E760)

inline static constexpr unsigned int MAHHNJGGOMK_TypeDefinitionIndex = 62769;

	class MAHHNJGGOMK : public ::BHPMNMMGLHI
	{
	public:
		::EMJFBPNNALC* BABONNPNLIP; // 0x20
		::System::Void _ctor(::EMJFBPNNALC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EMJFBPNNALC*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* EFEHPJBKGOK(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_EFEHPJBKGOK_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FOPDADLKMJF(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_FOPDADLKMJF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* FIFHPGPOKOF(::System::Collections::Generic::List_1<::OIPMNNAHIFP>* a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Collections::Generic::List_1<::OIPMNNAHIFP>*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_FIFHPGPOKOF_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* OJNKDPOPLFP(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_OJNKDPOPLFP_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* KNECLAAKDCP(::OIPMNNAHIFP a1)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::OIPMNNAHIFP))((::PBYTE)hIl2Cpp + MAHHNJGGOMK_KNECLAAKDCP_OFFSET))(this, a1);
		}

		::System::Void _UnlockAvatarPath_b__3_0(::NGHMPPEHAIL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::NGHMPPEHAIL*))((::PBYTE)hIl2Cpp + MAHHNJGGOMK__UNLOCKAVATARPATH_B__3_0_OFFSET))(this, a1);
		}

	};
