#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNCBDAMADO;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define MIGHCMCOCJN_AJNJNIIMBPF_OFFSET UNITYSDK_OFFSET(0xC209C60)
#define MIGHCMCOCJN_CTOR_OFFSET UNITYSDK_OFFSET(0xC209200)
#define MIGHCMCOCJN_DMFLNAOCENC_OFFSET UNITYSDK_OFFSET(0xC20A070)
#define MIGHCMCOCJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0xC209370)
#define MIGHCMCOCJN_FMAGBEOAHEH_OFFSET UNITYSDK_OFFSET(0xC20A3C0)
#define MIGHCMCOCJN_HFIHFIJGFIO_OFFSET UNITYSDK_OFFSET(0xC209900)
#define MIGHCMCOCJN_HMGOMCJGMPP_OFFSET UNITYSDK_OFFSET(0xC20A5F0)
#define MIGHCMCOCJN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0xC2098B0)
#define MIGHCMCOCJN_JFJDAGCDCLE_OFFSET UNITYSDK_OFFSET(0xC2093C0)
#define MIGHCMCOCJN_MBHFHEKIDEE_OFFSET UNITYSDK_OFFSET(0xC209620)
#define MIGHCMCOCJN_NCLKPHMFMAI_OFFSET UNITYSDK_OFFSET(0xC20A350)
#define MIGHCMCOCJN_OIIBCFGCJHI_OFFSET UNITYSDK_OFFSET(0xC20A0F0)
#define MIGHCMCOCJN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0xC209B10)

inline static constexpr unsigned int MIGHCMCOCJN_TypeDefinitionIndex = 79484;

	class MIGHCMCOCJN : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MNBKAECECKC; // 0x10
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LEMDGKGHHGH; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::NDDFLGNNMDK* FKINCGODJEP; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_EXECUTE_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_TEARDOWN_OFFSET))(this);
		}

		::System::Void HFIHFIJGFIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_HFIHFIJGFIO_OFFSET))(this);
		}

		::System::Void JFJDAGCDCLE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_JFJDAGCDCLE_OFFSET))(this);
		}

		::System::Void MBHFHEKIDEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_MBHFHEKIDEE_OFFSET))(this);
		}

		::System::Void OIIBCFGCJHI(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_OIIBCFGCJHI_OFFSET))(this, a1);
		}

		::System::Void FMAGBEOAHEH(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_FMAGBEOAHEH_OFFSET))(this, a1);
		}

		::System::Boolean DMFLNAOCENC(::ACNCBDAMADO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNCBDAMADO*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_DMFLNAOCENC_OFFSET))(this, a1);
		}

		::System::Boolean NCLKPHMFMAI(::ACNCBDAMADO* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ACNCBDAMADO*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_NCLKPHMFMAI_OFFSET))(this, a1);
		}

		::System::Void AJNJNIIMBPF(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_AJNJNIIMBPF_OFFSET))(this, a1);
		}

		::System::Void HMGOMCJGMPP(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + MIGHCMCOCJN_HMGOMCJGMPP_OFFSET))(this, a1);
		}

	};
