#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class NetPacket; }
namespace RPG::Client::Dev { class VirtualServerLaunchConfig; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LMJAGGOPGDD_CTOR_OFFSET UNITYSDK_OFFSET(0x1AFD04A0)
#define LMJAGGOPGDD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AFD0250)
#define LMJAGGOPGDD_DLHGEHNNCDA_OFFSET UNITYSDK_OFFSET(0x1AFD0300)
#define LMJAGGOPGDD_EDBPHODBFCP_OFFSET UNITYSDK_OFFSET(0x1AFD03A0)
#define LMJAGGOPGDD_FHKOGFMGGFM_OFFSET UNITYSDK_OFFSET(0x1AFD0420)
#define LMJAGGOPGDD_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0x1AFD03E0)
#define LMJAGGOPGDD_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0x1AFD0190)

inline static constexpr unsigned int LMJAGGOPGDD_TypeDefinitionIndex = 84991;

	class LMJAGGOPGDD : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt16, ::System::Action_1<::RPG::Client::NetPacket*>*>* PJDABCMHGNK; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_CTOR_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_NPAFMEBNFOB_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_DISPOSE_OFFSET))(this);
		}

		::System::Boolean DLHGEHNNCDA(::RPG::Client::NetPacket* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::NetPacket*))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_DLHGEHNNCDA_OFFSET))(this, a1);
		}

		::System::Void EDBPHODBFCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_EDBPHODBFCP_OFFSET))(this);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_KOHOGMCJHBH_OFFSET))(this);
		}

		::RPG::Client::Dev::VirtualServerLaunchConfig* FHKOGFMGGFM()
		{
			return ((::RPG::Client::Dev::VirtualServerLaunchConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMJAGGOPGDD_FHKOGFMGGFM_OFFSET))(this);
		}

	};
