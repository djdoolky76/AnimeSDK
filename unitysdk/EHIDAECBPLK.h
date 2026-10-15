#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { class IGroup; }

#define EHIDAECBPLK_BAAPGAPKBCP_OFFSET UNITYSDK_OFFSET(0x154ABD00)
#define EHIDAECBPLK_CTOR_OFFSET UNITYSDK_OFFSET(0x154AA460)
#define EHIDAECBPLK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x154AAC60)
#define EHIDAECBPLK_FNPDNBFDNJF_OFFSET UNITYSDK_OFFSET(0x154AADE0)
#define EHIDAECBPLK_FPNIJNDLGOD_OFFSET UNITYSDK_OFFSET(0x154AB280)
#define EHIDAECBPLK_HBIEDPAKGBH_OFFSET UNITYSDK_OFFSET(0x154AAA90)
#define EHIDAECBPLK_IBEBGBIILCF_OFFSET UNITYSDK_OFFSET(0x154AC8E0)
#define EHIDAECBPLK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x154AA5A0)
#define EHIDAECBPLK_JIKBBNMNHDL_OFFSET UNITYSDK_OFFSET(0x154AB950)
#define EHIDAECBPLK_MJFNEKJHJBA_OFFSET UNITYSDK_OFFSET(0x154AC220)
#define EHIDAECBPLK_MPHMIDPAMKN_OFFSET UNITYSDK_OFFSET(0x154AC470)
#define EHIDAECBPLK_PKNHDELKGLA_OFFSET UNITYSDK_OFFSET(0x154AC690)
#define EHIDAECBPLK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x154AB5F0)

inline static constexpr unsigned int EHIDAECBPLK_TypeDefinitionIndex = 76946;

	class EHIDAECBPLK : public ::System::Object
	{
	public:
		::NDDFLGNNMDK* FKINCGODJEP; // 0x10
		::Entitas::IGroup* BNBKEJONPIJ; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::IGroup* HPEEINBAPAF; // 0x28
		::System::Boolean OJOEHBECBHI; // 0x30
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + EHIDAECBPLK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIDAECBPLK_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIDAECBPLK_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIDAECBPLK_TEARDOWN_OFFSET))(this);
		}

		::System::Void HBIEDPAKGBH(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHIDAECBPLK_HBIEDPAKGBH_OFFSET))(this, a1, a2);
		}

		::System::Void FNPDNBFDNJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIDAECBPLK_FNPDNBFDNJF_OFFSET))(this);
		}

		::System::Void JIKBBNMNHDL(::HIOEAKHGILF* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + EHIDAECBPLK_JIKBBNMNHDL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BAAPGAPKBCP(::HIOEAKHGILF* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Boolean))((::PBYTE)hIl2Cpp + EHIDAECBPLK_BAAPGAPKBCP_OFFSET))(this, a1, a2);
		}

		::System::Void FPNIJNDLGOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EHIDAECBPLK_FPNIJNDLGOD_OFFSET))(this);
		}

		::System::Void MJFNEKJHJBA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EHIDAECBPLK_MJFNEKJHJBA_OFFSET))(this, a1);
		}

		::System::Void MPHMIDPAMKN(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EHIDAECBPLK_MPHMIDPAMKN_OFFSET))(this, a1);
		}

		::System::Void PKNHDELKGLA(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EHIDAECBPLK_PKNHDELKGLA_OFFSET))(this, a1);
		}

		::System::Void IBEBGBIILCF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + EHIDAECBPLK_IBEBGBIILCF_OFFSET))(this, a1);
		}

	};
