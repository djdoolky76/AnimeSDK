#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ACNCBDAMADO;
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class ICollector_1; }
namespace Entitas { template <typename T> class IGroup_1; }

#define MIGHCMCOCJN_AJNJNIIMBPF_OFFSET UNITYSDK_OFFSET(0x1A38EE30)
#define MIGHCMCOCJN_CTOR_OFFSET UNITYSDK_OFFSET(0x1A38E3D0)
#define MIGHCMCOCJN_DMFLNAOCENC_OFFSET UNITYSDK_OFFSET(0x1A38F240)
#define MIGHCMCOCJN_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A38E540)
#define MIGHCMCOCJN_FMAGBEOAHEH_OFFSET UNITYSDK_OFFSET(0x1A38F590)
#define MIGHCMCOCJN_HFIHFIJGFIO_OFFSET UNITYSDK_OFFSET(0x1A38EAD0)
#define MIGHCMCOCJN_HMGOMCJGMPP_OFFSET UNITYSDK_OFFSET(0x1A38F7C0)
#define MIGHCMCOCJN_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1A38EA80)
#define MIGHCMCOCJN_JFJDAGCDCLE_OFFSET UNITYSDK_OFFSET(0x1A38E590)
#define MIGHCMCOCJN_MBHFHEKIDEE_OFFSET UNITYSDK_OFFSET(0x1A38E7F0)
#define MIGHCMCOCJN_NCLKPHMFMAI_OFFSET UNITYSDK_OFFSET(0x1A38F520)
#define MIGHCMCOCJN_OIIBCFGCJHI_OFFSET UNITYSDK_OFFSET(0x1A38F2C0)
#define MIGHCMCOCJN_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1A38ECE0)

inline static constexpr unsigned int MIGHCMCOCJN_TypeDefinitionIndex = 79483;

	class MIGHCMCOCJN : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* MNBKAECECKC; // 0x10
		::NDDFLGNNMDK* FKINCGODJEP; // 0x18
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x20
		::Entitas::ICollector_1<::HIOEAKHGILF*>* LEMDGKGHHGH; // 0x28
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
