#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }
namespace System { class String; }

#define CNJBKPBBJNL_CLNJNOAPNCB_OFFSET UNITYSDK_OFFSET(0xDA55AC0)
#define CNJBKPBBJNL_CTOR_OFFSET UNITYSDK_OFFSET(0xDA55740)
#define CNJBKPBBJNL_EJDGLHMBEBI_OFFSET UNITYSDK_OFFSET(0xDA568B0)
#define CNJBKPBBJNL_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0xDA57140)
#define CNJBKPBBJNL_EXECUTE_OFFSET UNITYSDK_OFFSET(0xDA55CE0)
#define CNJBKPBBJNL_GIPKBMNOBEM_OFFSET UNITYSDK_OFFSET(0xDA571C0)
#define CNJBKPBBJNL_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xDA558B0)
#define CNJBKPBBJNL_LFMLEKPJMIL_OFFSET UNITYSDK_OFFSET(0xDA56C70)
#define CNJBKPBBJNL_NMGDBGLNKAJ_OFFSET UNITYSDK_OFFSET(0xDA55D30)
#define CNJBKPBBJNL_NPMNHCEFAKK_OFFSET UNITYSDK_OFFSET(0xDA56480)
#define CNJBKPBBJNL_OCKPLEKOKKF_OFFSET UNITYSDK_OFFSET(0xDA56E50)
#define CNJBKPBBJNL_ONABFJDEBAM_OFFSET UNITYSDK_OFFSET(0xDA56DC0)
#define CNJBKPBBJNL_PMOJPICPCDJ_OFFSET UNITYSDK_OFFSET(0xDA56860)
#define CNJBKPBBJNL_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xDA56720)

inline static constexpr unsigned int CNJBKPBBJNL_TypeDefinitionIndex = 77106;

	class CNJBKPBBJNL : public ::System::Object
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x10
		::Entitas::IGroup* ICPNODIHNNK; // 0x18
		::Entitas::ICollector* FHCLLIKNMEN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_TEARDOWN_OFFSET))(this);
		}

		::System::Void CLNJNOAPNCB(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_CLNJNOAPNCB_OFFSET))(this, a1);
		}

		::System::Void NMGDBGLNKAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_NMGDBGLNKAJ_OFFSET))(this);
		}

		::System::Void NPMNHCEFAKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_NPMNHCEFAKK_OFFSET))(this);
		}

		::System::Void EJDGLHMBEBI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_EJDGLHMBEBI_OFFSET))(this, a1);
		}

		::System::Void PMOJPICPCDJ(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_PMOJPICPCDJ_OFFSET))(this, a1);
		}

		::System::Boolean LFMLEKPJMIL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_LFMLEKPJMIL_OFFSET))(this, a1, a2);
		}

		::System::Void ONABFJDEBAM(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_ONABFJDEBAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OCKPLEKOKKF(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_OCKPLEKOKKF_OFFSET))(this, a1, a2);
		}

		::System::Void GIPKBMNOBEM(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_GIPKBMNOBEM_OFFSET))(this, a1, a2);
		}

		::System::Void EKMHEABCPMD(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + CNJBKPBBJNL_EKMHEABCPMD_OFFSET))(this, a1, a2);
		}

	};
