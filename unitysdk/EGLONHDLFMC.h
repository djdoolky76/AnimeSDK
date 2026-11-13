#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/WaitInteractionTypeMask.h"
class KFELGAIGHAP;
namespace RPG::GameCore { class AdventureCharacterController; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class WaitInteraction; }
namespace System { class Object; }
namespace System { class String; }

#define EGLONHDLFMC_BJOGPIGGCEJ_OFFSET UNITYSDK_OFFSET(0x17C18890)
#define EGLONHDLFMC_BNBANMKDOAJ_OFFSET UNITYSDK_OFFSET(0x17C18670)
#define EGLONHDLFMC_CTOR_OFFSET UNITYSDK_OFFSET(0x17C17150)
#define EGLONHDLFMC_DCKDJBBONNM_OFFSET UNITYSDK_OFFSET(0x17C186F0)
#define EGLONHDLFMC_DISPOSE_OFFSET UNITYSDK_OFFSET(0x17C17250)
#define EGLONHDLFMC_DJGIBNBAJMB_OFFSET UNITYSDK_OFFSET(0x17C17A20)
#define EGLONHDLFMC_EIIFHCFPGDN_OFFSET UNITYSDK_OFFSET(0x17C17A90)
#define EGLONHDLFMC_EPGHBPLDLFD_OFFSET UNITYSDK_OFFSET(0x17C18270)
#define EGLONHDLFMC_GKPPPGPCDFA_OFFSET UNITYSDK_OFFSET(0x17C18910)
#define EGLONHDLFMC_JEGOOILPIKE_OFFSET UNITYSDK_OFFSET(0x17C18370)
#define EGLONHDLFMC_JMAPGOOJLLD_OFFSET UNITYSDK_OFFSET(0x17C18AE0)
#define EGLONHDLFMC_LINLLPDEJDK_OFFSET UNITYSDK_OFFSET(0x17C18D50)
#define EGLONHDLFMC_LMAENDKFDLM_OFFSET UNITYSDK_OFFSET(0x17C18A40)
#define EGLONHDLFMC_MCDJCLGLDFE_OFFSET UNITYSDK_OFFSET(0x17C181F0)
#define EGLONHDLFMC_MNNDIOGNIIK_OFFSET UNITYSDK_OFFSET(0x17C18B70)
#define EGLONHDLFMC_ODCPPPNNDCC_OFFSET UNITYSDK_OFFSET(0x17C18A90)
#define EGLONHDLFMC_OFGPJPHGMCK_OFFSET UNITYSDK_OFFSET(0x17C18CC0)
#define EGLONHDLFMC_ONLBGNPAEAI_OFFSET UNITYSDK_OFFSET(0x17C18590)
#define EGLONHDLFMC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x17C17900)
#define EGLONHDLFMC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x17C18080)
#define EGLONHDLFMC_PAPLKANKKPC_OFFSET UNITYSDK_OFFSET(0x17C173C0)
#define EGLONHDLFMC_PGGJILKMHGJ_OFFSET UNITYSDK_OFFSET(0x17C18DB0)
#define EGLONHDLFMC_TICK_OFFSET UNITYSDK_OFFSET(0x17C180E0)

inline static constexpr unsigned int EGLONHDLFMC_TypeDefinitionIndex = 60172;

	class EGLONHDLFMC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::AdventureCharacterController* CFHHFINENDP; // 0x18
		::RPG::GameCore::WaitInteraction* OFKGLJOAMLD; // 0x20
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x28
		::KFELGAIGHAP* CIJGMGGGAON; // 0x30
		::KFELGAIGHAP* AAOMIIDLIKF; // 0x38
		::System::Single DKOFFPPGEFI; // 0x40
		::System::Boolean BJIMNGNKDGD; // 0x44
		::System::Byte _padding0[0x3];
		::System::Single EFKCJMFANEB; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::WaitInteraction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::WaitInteraction*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EGLONHDLFMC_TICK_OFFSET))(this, a1);
		}

		::System::Void MCDJCLGLDFE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_MCDJCLGLDFE_OFFSET))(this, a1);
		}

		::System::Void BNBANMKDOAJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_BNBANMKDOAJ_OFFSET))(this, a1);
		}

		::System::Void BJOGPIGGCEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_BJOGPIGGCEJ_OFFSET))(this, a1);
		}

		::System::Void LMAENDKFDLM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_LMAENDKFDLM_OFFSET))(this, a1);
		}

		::System::Void ODCPPPNNDCC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_ODCPPPNNDCC_OFFSET))(this, a1);
		}

		::System::Void JMAPGOOJLLD(::RPG::GameCore::AdventureCharacterController* a1, ::System::String* a2, ::RPG::GameCore::GameEntity* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AdventureCharacterController*, ::System::String*, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_JMAPGOOJLLD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OFGPJPHGMCK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_OFGPJPHGMCK_OFFSET))(this, a1);
		}

		::System::Void ONLBGNPAEAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_ONLBGNPAEAI_OFFSET))(this);
		}

		::System::Void EIIFHCFPGDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_EIIFHCFPGDN_OFFSET))(this);
		}

		::System::Void PAPLKANKKPC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_PAPLKANKKPC_OFFSET))(this);
		}

		::System::Boolean LINLLPDEJDK(::RPG::GameCore::WaitInteractionTypeMask a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::WaitInteractionTypeMask))((::PBYTE)hIl2Cpp + EGLONHDLFMC_LINLLPDEJDK_OFFSET))(this, a1);
		}

		::System::Boolean DJGIBNBAJMB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EGLONHDLFMC_DJGIBNBAJMB_OFFSET))(this);
		}

		::System::Boolean JEGOOILPIKE(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_JEGOOILPIKE_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* EPGHBPLDLFD(::System::Object* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_EPGHBPLDLFD_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* DCKDJBBONNM(::System::Object* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_DCKDJBBONNM_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* GKPPPGPCDFA(::System::Object* a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_GKPPPGPCDFA_OFFSET))(this, a1);
		}

		::System::Boolean MNNDIOGNIIK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + EGLONHDLFMC_MNNDIOGNIIK_OFFSET))(this, a1);
		}

		::RPG::GameCore::GameEntity* PGGJILKMHGJ(::System::UInt32 a1)
		{
			return ((::RPG::GameCore::GameEntity*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EGLONHDLFMC_PGGJILKMHGJ_OFFSET))(this, a1);
		}

	};
