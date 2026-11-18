#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Object.h"

class EMADFJAKIBG;
class IANDOOLAALI_DLAAJNDJPLO;
class IANDOOLAALI_NGKHGAPPFDA;
class OAEFGCLEHHO;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define IBCBGJOFEOI_JHPGIEGNEMH_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x16F57290)
#define IBCBGJOFEOI_JHPGIEGNEMH_CKEMNJODHCH_OFFSET UNITYSDK_OFFSET(0x16F57570)
#define IBCBGJOFEOI_JHPGIEGNEMH_ENIBJMMCAMJ_OFFSET UNITYSDK_OFFSET(0x16F57740)
#define IBCBGJOFEOI_JHPGIEGNEMH_FAFMBNKFGEK_OFFSET UNITYSDK_OFFSET(0x16F574C0)
#define IBCBGJOFEOI_JHPGIEGNEMH_GHOCALKLJCD_OFFSET UNITYSDK_OFFSET(0x16F57770)
#define IBCBGJOFEOI_JHPGIEGNEMH_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x16F57330)
#define IBCBGJOFEOI_JHPGIEGNEMH_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x16F57420)
#define IBCBGJOFEOI_JHPGIEGNEMH_PGAMJMJCGBL_OFFSET UNITYSDK_OFFSET(0x16F577A0)
#define IBCBGJOFEOI_JHPGIEGNEMH__CTOR_OFFSET UNITYSDK_OFFSET(0x16F57280)

inline static constexpr unsigned int IBCBGJOFEOI_JHPGIEGNEMH_TypeDefinitionIndex = 68432;

class IBCBGJOFEOI_JHPGIEGNEMH : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10
	::System::Action* OLDCEOGKOAE; // 0x40
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x48
	::System::Func_2<::System::Threading::CancellationToken, ::Cysharp::Threading::Tasks::UniTask>* MNMDKBDFAFE; // 0x78
	::IANDOOLAALI_NGKHGAPPFDA* HOMJMCDKGON; // 0x80
	::System::Action* KAKAEMACNPB; // 0x88
	::IANDOOLAALI_DLAAJNDJPLO* AEPKIFBFCOD; // 0x90
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* BOIBONJOJKH; // 0x98
	::System::Boolean DOFCLPCLHOJ; // 0xA0
	::System::Byte _padding0[0x3];
	::System::UInt32 LEHABHCOMGH; // 0xA4

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_AAHMACBDCPN_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void HOFIFAEOLBM(::EMADFJAKIBG* PJMOJNFEHLF)
	{
		return ((::System::Void(*)(::PVOID, ::EMADFJAKIBG*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_HOFIFAEOLBM_OFFSET))(this, PJMOJNFEHLF);
	}

	::System::Void LIDNPLMPHAL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_LIDNPLMPHAL_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void FAFMBNKFGEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_FAFMBNKFGEK_OFFSET))(this);
	}

	::System::Void CKEMNJODHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_CKEMNJODHCH_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ENIBJMMCAMJ(::System::Threading::CancellationToken OMMEALOOOOD)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_ENIBJMMCAMJ_OFFSET))(this, OMMEALOOOOD);
	}

	::System::Void GHOCALKLJCD(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_GHOCALKLJCD_OFFSET))(this, PIIPCLCCOIG);
	}

	::System::Void PGAMJMJCGBL(::OAEFGCLEHHO* PIIPCLCCOIG)
	{
		return ((::System::Void(*)(::PVOID, ::OAEFGCLEHHO*))((::PBYTE)hIl2Cpp + IBCBGJOFEOI_JHPGIEGNEMH_PGAMJMJCGBL_OFFSET))(this, PIIPCLCCOIG);
	}
};
