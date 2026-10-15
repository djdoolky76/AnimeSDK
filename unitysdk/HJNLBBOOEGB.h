#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define HJNLBBOOEGB_ABGHEODMDOK_OFFSET UNITYSDK_OFFSET(0x15D24070)
#define HJNLBBOOEGB_AFEPIMHBGJD_OFFSET UNITYSDK_OFFSET(0x15D242C0)
#define HJNLBBOOEGB_AGKIMCLLAEP_OFFSET UNITYSDK_OFFSET(0x15D24FF0)
#define HJNLBBOOEGB_CTOR_OFFSET UNITYSDK_OFFSET(0x15D23320)
#define HJNLBBOOEGB_DOEHINFPILO_OFFSET UNITYSDK_OFFSET(0x15D24640)
#define HJNLBBOOEGB_ECEFLBPMFKJ_OFFSET UNITYSDK_OFFSET(0x15D24A80)
#define HJNLBBOOEGB_EKMHEABCPMD_OFFSET UNITYSDK_OFFSET(0x15D266D0)
#define HJNLBBOOEGB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x15D23910)
#define HJNLBBOOEGB_FDFIFBHGELK_OFFSET UNITYSDK_OFFSET(0x15D236A0)
#define HJNLBBOOEGB_GFKMKCOEGGN_OFFSET UNITYSDK_OFFSET(0x15D23CD0)
#define HJNLBBOOEGB_HHHNKDCHEOL_OFFSET UNITYSDK_OFFSET(0x15D24F20)
#define HJNLBBOOEGB_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x15D23490)
#define HJNLBBOOEGB_KDPKDAOEHAO_OFFSET UNITYSDK_OFFSET(0x15D23960)
#define HJNLBBOOEGB_LFMLEKPJMIL_OFFSET UNITYSDK_OFFSET(0x15D26300)
#define HJNLBBOOEGB_MCBEFKJBLCO_OFFSET UNITYSDK_OFFSET(0x15D26530)
#define HJNLBBOOEGB_OCKPLEKOKKF_OFFSET UNITYSDK_OFFSET(0x15D26750)
#define HJNLBBOOEGB_ONABFJDEBAM_OFFSET UNITYSDK_OFFSET(0x15D26450)
#define HJNLBBOOEGB_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x15D23F30)

inline static constexpr unsigned int HJNLBBOOEGB_TypeDefinitionIndex = 77113;

	class HJNLBBOOEGB : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* PIALGKPMJIJ; // 0x10
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* JMJPLJKEHNP; // 0x28
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
