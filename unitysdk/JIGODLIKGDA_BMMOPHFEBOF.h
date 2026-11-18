#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"

class FBAMLABJMKF;
class JIGODLIKGDA_EPAHFCJLIEO;
class JIGODLIKGDA_MGLEGEKPNIN;
class JIGODLIKGDA_OJDOCHKAADE;
namespace Cysharp::Threading::Tasks { class UniTaskCompletionSource; }
namespace System { class String; }

#define JIGODLIKGDA_BMMOPHFEBOF_ALMMBGHEEPO_OFFSET UNITYSDK_OFFSET(0x14FBA650)
#define JIGODLIKGDA_BMMOPHFEBOF_CDJELPDCMNL_OFFSET UNITYSDK_OFFSET(0x14FBA1C0)
#define JIGODLIKGDA_BMMOPHFEBOF_CHKCHLFGBMD_OFFSET UNITYSDK_OFFSET(0x14FBA450)
#define JIGODLIKGDA_BMMOPHFEBOF_NNHGIBJFPMM_OFFSET UNITYSDK_OFFSET(0x14FBA0C0)
#define JIGODLIKGDA_BMMOPHFEBOF_ODCOIDDAGOA_OFFSET UNITYSDK_OFFSET(0x14FBA1F0)
#define JIGODLIKGDA_BMMOPHFEBOF__CTOR_OFFSET UNITYSDK_OFFSET(0x14FBA0B0)

inline static constexpr unsigned int JIGODLIKGDA_BMMOPHFEBOF_TypeDefinitionIndex = 58734;

class JIGODLIKGDA_BMMOPHFEBOF : public ::System::Object
{
public:
	::FBAMLABJMKF* GFFCBBDKCGC; // 0x10
	::Cysharp::Threading::Tasks::UniTaskCompletionSource* DIEENKCHCOE; // 0x18

	::System::Void _ctor(::FBAMLABJMKF* KLIELDACCHH)
	{
		return ((::System::Void(*)(::PVOID, ::FBAMLABJMKF*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF__CTOR_OFFSET))(this, KLIELDACCHH);
	}

	::Cysharp::Threading::Tasks::UniTask NNHGIBJFPMM(::System::String* BLNLGNHFPDM)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_NNHGIBJFPMM_OFFSET))(this, BLNLGNHFPDM);
	}

	::System::Void CDJELPDCMNL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_CDJELPDCMNL_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask ODCOIDDAGOA(::JIGODLIKGDA_MGLEGEKPNIN* NEGKAKCFCNH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::JIGODLIKGDA_MGLEGEKPNIN*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_ODCOIDDAGOA_OFFSET))(this, NEGKAKCFCNH);
	}

	::Cysharp::Threading::Tasks::UniTask CHKCHLFGBMD(::JIGODLIKGDA_OJDOCHKAADE* NEGKAKCFCNH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::JIGODLIKGDA_OJDOCHKAADE*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_CHKCHLFGBMD_OFFSET))(this, NEGKAKCFCNH);
	}

	::Cysharp::Threading::Tasks::UniTask ALMMBGHEEPO(::JIGODLIKGDA_EPAHFCJLIEO* NEGKAKCFCNH)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::JIGODLIKGDA_EPAHFCJLIEO*))((::PBYTE)hIl2Cpp + JIGODLIKGDA_BMMOPHFEBOF_ALMMBGHEEPO_OFFSET))(this, NEGKAKCFCNH);
	}
};
