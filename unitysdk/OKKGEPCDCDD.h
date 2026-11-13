#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCLPKMIIANI.h"
#include "unitysdk/RPG/Client/LittleGameSandboxCompletionResult.h"
#include "unitysdk/System/Nullable_1.h"
class IAJLHKIHBFB;
class NBJCFLPHCLB;
namespace System { class IDisposable; }
namespace System { template <typename T> class Action_1; }

#define OKKGEPCDCDD_AJIFNCHGDDB_OFFSET UNITYSDK_OFFSET(0x17886BC0)
#define OKKGEPCDCDD_APPPMCBLAIL_OFFSET UNITYSDK_OFFSET(0x17888080)
#define OKKGEPCDCDD_BKIANCKDMIA_OFFSET UNITYSDK_OFFSET(0x17888240)
#define OKKGEPCDCDD_CANSTART_OFFSET UNITYSDK_OFFSET(0x17887E90)
#define OKKGEPCDCDD_CIFGOFFDBGI_OFFSET UNITYSDK_OFFSET(0x17887180)
#define OKKGEPCDCDD_CNIHOJDHLJA_OFFSET UNITYSDK_OFFSET(0x17887B40)
#define OKKGEPCDCDD_CTOR_OFFSET UNITYSDK_OFFSET(0x17888280)
#define OKKGEPCDCDD_DFLNPPKCDLL_OFFSET UNITYSDK_OFFSET(0x17886DF0)
#define OKKGEPCDCDD_DHDGMILHELE_OFFSET UNITYSDK_OFFSET(0x178881C0)
#define OKKGEPCDCDD_EMENICBFGFE_OFFSET UNITYSDK_OFFSET(0x17887640)
#define OKKGEPCDCDD_FAABFNLCKEG_OFFSET UNITYSDK_OFFSET(0x178880E0)
#define OKKGEPCDCDD_FNLAPGGMPIN_OFFSET UNITYSDK_OFFSET(0x17887250)
#define OKKGEPCDCDD_IAEFJDDKNMC_OFFSET UNITYSDK_OFFSET(0x17887DE0)
#define OKKGEPCDCDD_JNEGDIJBOGA_OFFSET UNITYSDK_OFFSET(0x17888130)
#define OKKGEPCDCDD_KDDGNJJEGEJ_OFFSET UNITYSDK_OFFSET(0x17887D30)
#define OKKGEPCDCDD_KINGOHBOPNB_OFFSET UNITYSDK_OFFSET(0x17888200)
#define OKKGEPCDCDD_MIOANBDIOAI_OFFSET UNITYSDK_OFFSET(0x17888180)
#define OKKGEPCDCDD__NEEDWAITSTREAMING_OFFSET UNITYSDK_OFFSET(0x17887F30)
#define OKKGEPCDCDD__ONCLEAR_OFFSET UNITYSDK_OFFSET(0x178873B0)
#define OKKGEPCDCDD__ONINIT_OFFSET UNITYSDK_OFFSET(0x17886750)
#define OKKGEPCDCDD__ONSTART_OFFSET UNITYSDK_OFFSET(0x17886EC0)
#define OKKGEPCDCDD__ONSTOP_OFFSET UNITYSDK_OFFSET(0x17887300)
#define OKKGEPCDCDD__SETPOSTPROCESSONCLEAR_OFFSET UNITYSDK_OFFSET(0x17888020)
#define OKKGEPCDCDD__SETPOSTPROCESSONINIT_OFFSET UNITYSDK_OFFSET(0x17887FC0)

inline static constexpr unsigned int OKKGEPCDCDD_TypeDefinitionIndex = 61914;

	class OKKGEPCDCDD : public ::HCLPKMIIANI
	{
	public:
		::NBJCFLPHCLB* INBNLOCPGPC; // 0x78
		::System::IDisposable* GDGLFCBIFPE; // 0x80
		::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* DDOOGMHMOMJ; // 0x88
		::System::Nullable_1<::RPG::Client::LittleGameSandboxCompletionResult> LMMJBHOEGED; // 0x90
		::System::Boolean HENLFMHDNPG; // 0x98
		::System::Boolean GBJJAOEAHKM; // 0x99
		::System::Boolean OJCNJIIPGOA; // 0x9A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_CTOR_OFFSET))(this);
		}

		::System::Void _OnInit(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__ONINIT_OFFSET))(this, a1);
		}

		::System::Void AJIFNCHGDDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_AJIFNCHGDDB_OFFSET))(this);
		}

		::System::Void _OnStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__ONSTART_OFFSET))(this);
		}

		::System::Void FNLAPGGMPIN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_FNLAPGGMPIN_OFFSET))(this);
		}

		::System::Void _OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__ONSTOP_OFFSET))(this);
		}

		::System::Void _OnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__ONCLEAR_OFFSET))(this);
		}

		::System::IDisposable* CNIHOJDHLJA(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_CNIHOJDHLJA_OFFSET))(this, a1);
		}

		::System::IDisposable* IAEFJDDKNMC(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1)
		{
			return ((::System::IDisposable*(*)(::PVOID, ::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_IAEFJDDKNMC_OFFSET))(this, a1);
		}

		::System::Boolean CanStart()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_CANSTART_OFFSET))(this);
		}

		::System::Boolean _NeedWaitStreaming()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__NEEDWAITSTREAMING_OFFSET))(this);
		}

		::System::Void _SetPostProcessOnInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__SETPOSTPROCESSONINIT_OFFSET))(this);
		}

		::System::Void _SetPostProcessOnClear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD__SETPOSTPROCESSONCLEAR_OFFSET))(this);
		}

		::System::Boolean APPPMCBLAIL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_APPPMCBLAIL_OFFSET))(this);
		}

		::System::Void EMENICBFGFE(::RPG::Client::LittleGameSandboxCompletionResult a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_EMENICBFGFE_OFFSET))(this, a1);
		}

		static ::System::Void KDDGNJJEGEJ(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>* a1, ::RPG::Client::LittleGameSandboxCompletionResult a2)
		{
			return ((::System::Void(*)(::System::Action_1<::RPG::Client::LittleGameSandboxCompletionResult>*, ::RPG::Client::LittleGameSandboxCompletionResult))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_KDDGNJJEGEJ_OFFSET))(a1, a2);
		}

		::System::Void CIFGOFFDBGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_CIFGOFFDBGI_OFFSET))(this);
		}

		::System::Void DFLNPPKCDLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_DFLNPPKCDLL_OFFSET))(this);
		}

		::System::Void FAABFNLCKEG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_FAABFNLCKEG_OFFSET))(this);
		}

		::System::Void JNEGDIJBOGA(::IAJLHKIHBFB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IAJLHKIHBFB*))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_JNEGDIJBOGA_OFFSET))(this, a1);
		}

		::System::Void MIOANBDIOAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_MIOANBDIOAI_OFFSET))(this);
		}

		::System::Void DHDGMILHELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_DHDGMILHELE_OFFSET))(this);
		}

		::System::Void KINGOHBOPNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_KINGOHBOPNB_OFFSET))(this);
		}

		::System::Void BKIANCKDMIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKKGEPCDCDD_BKIANCKDMIA_OFFSET))(this);
		}

	};
