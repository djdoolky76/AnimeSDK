#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Prop/ChimeraPreparationState.h"
#include "unitysdk/System/Object.h"
class NOKCGCNICDJ;
namespace RPG::Client::Prop { class ChimeraPreparationStateControllerBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CFEFEPKIBDP_CTOR_OFFSET UNITYSDK_OFFSET(0xCA04480)
#define CFEFEPKIBDP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCA04C30)
#define CFEFEPKIBDP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xCA04B50)
#define CFEFEPKIBDP_KEAFKKMLOKE_OFFSET UNITYSDK_OFFSET(0xCA04940)
#define CFEFEPKIBDP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xCA04700)
#define CFEFEPKIBDP_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xCA048F0)

inline static constexpr unsigned int CFEFEPKIBDP_TypeDefinitionIndex = 78479;

	class CFEFEPKIBDP : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::Prop::ChimeraPreparationState, ::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* IAIHPPPOMFD; // 0x10
		::RPG::Client::Prop::ChimeraPreparationStateControllerBase* DDCEKHJGMMJ; // 0x18
		::NOKCGCNICDJ* IPLGCJPLIKH; // 0x20
		::System::Void _ctor(::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::RPG::Client::Prop::ChimeraPreparationStateControllerBase*>*))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_CTOR_OFFSET))(this, a1);
		}

		::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_KPJGDHLENIP_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::RPG::Client::Prop::ChimeraPreparationState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void KEAFKKMLOKE(::RPG::Client::Prop::ChimeraPreparationState a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Prop::ChimeraPreparationState))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_KEAFKKMLOKE_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFEFEPKIBDP_DISPOSE_OFFSET))(this);
		}

	};
