#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MHMFINLCNFN.h"
#include "unitysdk/LGCNEDCMPKM.h"

class INapLevel_CommonStateChangeEffect;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
template <typename T> class KCMIFNGABDC_1;

#define CLOJNICEJGC_ALHHNOIENBA_OFFSET UNITYSDK_OFFSET(0x159E3C30)
#define CLOJNICEJGC_BGLCOGGMAHC_OFFSET UNITYSDK_OFFSET(0x159E4670)
#define CLOJNICEJGC_ELMEFBBHCEG_OFFSET UNITYSDK_OFFSET(0x159E3B80)
#define CLOJNICEJGC_FEDNEKFMGNF_OFFSET UNITYSDK_OFFSET(0x159E3970)
#define CLOJNICEJGC_GDEOPIBNOIN_OFFSET UNITYSDK_OFFSET(0x159E48F0)
#define CLOJNICEJGC__CCTOR_OFFSET UNITYSDK_OFFSET(0x159E45E0)
#define CLOJNICEJGC__CTOR_OFFSET UNITYSDK_OFFSET(0x159E4440)

inline static constexpr unsigned int CLOJNICEJGC_TypeDefinitionIndex = 72294;

class CLOJNICEJGC : public ::MHMFINLCNFN
{
public:
	static ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>** StaticGet_GNADGMBBOBB()
	{
		return (::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>**)Il2CppClass::FromTypeDefinitionIndex(CLOJNICEJGC_TypeDefinitionIndex)->GetStaticField(0x51D10);
	}
	::KCMIFNGABDC_1<::System::String*>* EBOJDHGIMAO; // 0x28
	::KCMIFNGABDC_1<::System::Int32>* BGHDOKBLKNN; // 0x30
	::KCMIFNGABDC_1<::System::Boolean>* MPIJIAIPBHN; // 0x38
	::KCMIFNGABDC_1<::Foundation::ViewObject::ViewObjectHandle>* OHONJDBDNFB; // 0x40
	::KCMIFNGABDC_1<::System::Boolean>* BELEIPIDPGM; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOJNICEJGC__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLOJNICEJGC__CCTOR_OFFSET))();
	}

	::System::Void FEDNEKFMGNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOJNICEJGC_FEDNEKFMGNF_OFFSET))(this);
	}

	::System::Void ELMEFBBHCEG(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CLOJNICEJGC_ELMEFBBHCEG_OFFSET))(this, BKBGPKNGNMF);
	}

	static ::System::Void BGLCOGGMAHC(::UnityEngine::Transform* IAPKABMDJNF, ::System::Int32 OFDGPKABGHF, ::System::Int32 NAAODNDPKGI, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>* PILELGPBCLL)
	{
		return ((::System::Void(*)(::UnityEngine::Transform*, ::System::Int32, ::System::Int32, ::System::Collections::Generic::List_1<::INapLevel_CommonStateChangeEffect*>*))((::PBYTE)hIl2Cpp + CLOJNICEJGC_BGLCOGGMAHC_OFFSET))(IAPKABMDJNF, OFDGPKABGHF, NAAODNDPKGI, PILELGPBCLL);
	}

	::System::Void GDEOPIBNOIN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLOJNICEJGC_GDEOPIBNOIN_OFFSET))(this);
	}

	::System::Void ALHHNOIENBA(::LGCNEDCMPKM& BKBGPKNGNMF)
	{
		return ((::System::Void(*)(::PVOID, ::LGCNEDCMPKM&))((::PBYTE)hIl2Cpp + CLOJNICEJGC_ALHHNOIENBA_OFFSET))(this, BKBGPKNGNMF);
	}
};
