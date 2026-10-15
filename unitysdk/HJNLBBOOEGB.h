#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class ICollector; }
namespace Entitas { class IGroup; }
namespace System { class String; }

#define HJNLBBOOEGB_ABGHEODMDOK_OFFSET UNITYSDK_OFFSET(0x15D30B90)
#define HJNLBBOOEGB_AFEPIMHBGJD_OFFSET UNITYSDK_OFFSET(0x15D30DE0)
#define HJNLBBOOEGB_AGKIMCLLAEP_OFFSET UNITYSDK_OFFSET(0x15D31B10)
#define HJNLBBOOEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D2FE40)
#define HJNLBBOOEGB_DOEHINFPILO_OFFSET UNITYSDK_OFFSET(0x15D31160)
#define HJNLBBOOEGB_ECEFLBPMFKJ_OFFSET UNITYSDK_OFFSET(0x15D315A0)
#define HJNLBBOOEGB_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0x15D33210)
#define HJNLBBOOEGB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D30430)
#define HJNLBBOOEGB_FDFIFBHGELK_OFFSET UNITYSDK_OFFSET(0x15D301C0)
#define HJNLBBOOEGB_GFKMKCOEGGN_OFFSET UNITYSDK_OFFSET(0x15D307F0)
#define HJNLBBOOEGB_HHHNKDCHEOL_OFFSET UNITYSDK_OFFSET(0x15D31A40)
#define HJNLBBOOEGB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15D2FFB0)
#define HJNLBBOOEGB_KDPKDAOEHAO_OFFSET UNITYSDK_OFFSET(0x15D30480)
#define HJNLBBOOEGB_LFMLEKPJMIL_OFFSET UNITYSDK_OFFSET(0x15D32E40)
#define HJNLBBOOEGB_MCBEFKJBLCO_OFFSET UNITYSDK_OFFSET(0x15D33070)
#define HJNLBBOOEGB_OCKPLEKOKKF_OFFSET UNITYSDK_OFFSET(0x15D33290)
#define HJNLBBOOEGB_ONABFJDEBAM_OFFSET UNITYSDK_OFFSET(0x15D32F90)
#define HJNLBBOOEGB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15D30A50)

	class HJNLBBOOEGB : public ::System::Object
	{
	public:
		::Entitas::ICollector* JMJPLJKEHNP; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::Entitas::IGroup* PIALGKPMJIJ; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_TEARDOWN_OFFSET))(this);
		}

		::System::Void FDFIFBHGELK(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_FDFIFBHGELK_OFFSET))(this, a1);
		}

		::System::Void KDPKDAOEHAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_KDPKDAOEHAO_OFFSET))(this);
		}

		::System::Void GFKMKCOEGGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_GFKMKCOEGGN_OFFSET))(this);
		}

		::System::Void ABGHEODMDOK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_ABGHEODMDOK_OFFSET))(this);
		}

		::System::Void DOEHINFPILO(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_DOEHINFPILO_OFFSET))(this, a1);
		}

		::System::Void AGKIMCLLAEP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_AGKIMCLLAEP_OFFSET))(this, a1);
		}

		::System::Void AFEPIMHBGJD(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_AFEPIMHBGJD_OFFSET))(this, a1);
		}

		::System::Boolean LFMLEKPJMIL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_LFMLEKPJMIL_OFFSET))(this, a1, a2);
		}

		::System::Void ECEFLBPMFKJ(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_ECEFLBPMFKJ_OFFSET))(this, a1, a2);
		}

		::System::Void HHHNKDCHEOL(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_HHHNKDCHEOL_OFFSET))(this, a1, a2);
		}

		::System::Void ONABFJDEBAM(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_ONABFJDEBAM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void MCBEFKJBLCO(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_MCBEFKJBLCO_OFFSET))(this, a1, a2);
		}

		::System::Void OCKPLEKOKKF(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_OCKPLEKOKKF_OFFSET))(this, a1, a2);
		}

		::System::Void EKMHEABCPMD(::HIOEAKHGILF* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::String*))((::PBYTE)hIl2Cpp + HJNLBBOOEGB_EKMHEABCPMD_OFFSET))(this, a1, a2);
		}

	};
