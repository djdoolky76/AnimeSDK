#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }

#define EHIDAECBPLK_BAAPGAPKBCP_OFFSET UNITYSDK_OFFSET(0x18BD0AC0)
#define EHIDAECBPLK_CTOR_OFFSET UNITYSDK_OFFSET(0x18BCF290)
#define EHIDAECBPLK_EXECUTE_OFFSET UNITYSDK_OFFSET(0x18BCFA60)
#define EHIDAECBPLK_FNPDNBFDNJF_OFFSET UNITYSDK_OFFSET(0x18BCFBE0)
#define EHIDAECBPLK_FPNIJNDLGOD_OFFSET UNITYSDK_OFFSET(0x18BD0080)
#define EHIDAECBPLK_HBIEDPAKGBH_OFFSET UNITYSDK_OFFSET(0x18BCF890)
#define EHIDAECBPLK_IBEBGBIILCF_OFFSET UNITYSDK_OFFSET(0x18BD1670)
#define EHIDAECBPLK_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x18BCF3D0)
#define EHIDAECBPLK_JIKBBNMNHDL_OFFSET UNITYSDK_OFFSET(0x18BD0720)
#define EHIDAECBPLK_MJFNEKJHJBA_OFFSET UNITYSDK_OFFSET(0x18BD0FB0)
#define EHIDAECBPLK_MPHMIDPAMKN_OFFSET UNITYSDK_OFFSET(0x18BD11F0)
#define EHIDAECBPLK_PKNHDELKGLA_OFFSET UNITYSDK_OFFSET(0x18BD1420)
#define EHIDAECBPLK_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x18BD03F0)

inline static constexpr unsigned int EHIDAECBPLK_TypeDefinitionIndex = 79279;

	class EHIDAECBPLK : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* BNBKEJONPIJ; // 0x10
		::Entitas::IGroup_1<::HIOEAKHGILF*>* HPEEINBAPAF; // 0x18
		::NDDFLGNNMDK* FKINCGODJEP; // 0x20
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x28
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
