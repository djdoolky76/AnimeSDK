#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class BJJNEGIJGNN;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System { template <typename T> class WeakReference_1; }

#define NPGBGLGJGCF_EJAKELHLACA_ABPLKLGPIBG_OFFSET UNITYSDK_OFFSET(0x15FB5CB0)
#define NPGBGLGJGCF_EJAKELHLACA_DMGFJNDBAOJ_OFFSET UNITYSDK_OFFSET(0x15FB6080)
#define NPGBGLGJGCF_EJAKELHLACA_GET_ISINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x15FB59D0)
#define NPGBGLGJGCF_EJAKELHLACA_GET_SHOULDCONTINUE_OFFSET UNITYSDK_OFFSET(0x15FB59C0)
#define NPGBGLGJGCF_EJAKELHLACA_ISBINDTOTHISENTITY_OFFSET UNITYSDK_OFFSET(0x15FB6400)
#define NPGBGLGJGCF_EJAKELHLACA_UPDATEINCAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x15FB59E0)
#define NPGBGLGJGCF_EJAKELHLACA_UPDATETARGETENTITYID_OFFSET UNITYSDK_OFFSET(0x15FB6460)
#define NPGBGLGJGCF_EJAKELHLACA__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB64B0)

inline static constexpr unsigned int NPGBGLGJGCF_EJAKELHLACA_TypeDefinitionIndex = 59324;

class NPGBGLGJGCF_EJAKELHLACA : public ::System::Object
{
public:
	// static const ::System::Single LPBMABGMFKG; // 0x0
	::System::WeakReference_1<::BJJNEGIJGNN*>* PJMAJCGBJMJ; // 0x10
	::System::String* NBBEKEFNKMH; // 0x18
	::System::UInt32 BNFBAPPNHKB; // 0x20
	::System::Single AGEMIBLEKJA; // 0x24
	::System::Int32 LKDEAPGIMPB; // 0x28
	::System::Boolean EOLFEMPGKPJ; // 0x2C
	::System::Boolean NLAEJKNHIML; // 0x2D
	::System::Boolean GNICCLFDELE; // 0x2E

	::System::Void _ctor(::BJJNEGIJGNN* HNOPAJLDCFB, ::System::String* IJPIEBFJBGI, ::System::Int32 DFPEIIMPJCA, ::System::UInt32 DKBGLBIECBN)
	{
		return ((::System::Void(*)(::PVOID, ::BJJNEGIJGNN*, ::System::String*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA__CTOR_OFFSET))(this, HNOPAJLDCFB, IJPIEBFJBGI, DFPEIIMPJCA, DKBGLBIECBN);
	}

	::System::Boolean get_ShouldContinue()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_GET_SHOULDCONTINUE_OFFSET))(this);
	}

	::System::Boolean get_IsInCameraView()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_GET_ISINCAMERAVIEW_OFFSET))(this);
	}

	::System::Void UpdateInCameraView()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_UPDATEINCAMERAVIEW_OFFSET))(this);
	}

	::System::Boolean IsBindToThisEntity(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_ISBINDTOTHISENTITY_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void UpdateTargetEntityID(::System::UInt32 KFOHIEABIBD)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_UPDATETARGETENTITYID_OFFSET))(this, KFOHIEABIBD);
	}

	::System::Boolean ABPLKLGPIBG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_ABPLKLGPIBG_OFFSET))(this);
	}

	::System::Boolean DMGFJNDBAOJ(::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPGBGLGJGCF_EJAKELHLACA_DMGFJNDBAOJ_OFFSET))(this, IACKHFCLPJI);
	}
};
