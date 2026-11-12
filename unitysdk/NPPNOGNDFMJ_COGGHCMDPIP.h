#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JPFJJLEPGBC;
class KPMAOLIGPAP;
class MCFDMCPGEBD;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LittleGameSandboxWorldEntityConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPPNOGNDFMJ_COGGHCMDPIP_CTOR_OFFSET UNITYSDK_OFFSET(0xC612B90)

inline static constexpr unsigned int NPPNOGNDFMJ_COGGHCMDPIP_TypeDefinitionIndex = 61864;

	class NPPNOGNDFMJ_COGGHCMDPIP : public ::System::Object
	{
	public:
		::RPG::GameCore::LittleGameSandboxWorldEntityConfig* EABKOHGCHFP; // 0x10
		::MCFDMCPGEBD* EBHBCCMBIOC; // 0x18
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::GameEntity*, ::KPMAOLIGPAP*>* BODBLNNLMPF; // 0x20
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::GameEntity*>* NFMKLAHFAIP; // 0x28
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* NFCPFBFAPML; // 0x30
		::JPFJJLEPGBC* BKIFMPHBIAK; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPPNOGNDFMJ_COGGHCMDPIP_CTOR_OFFSET))(this);
		}

	};
