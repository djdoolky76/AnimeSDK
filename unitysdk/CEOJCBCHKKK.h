#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/PhysicMaterialCombine.h"
#include "unitysdk/CEOJCBCHKKK_ADGKFFBOFEF.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Collider; }
namespace UnityEngine { class PhysicMaterial; }

#define CEOJCBCHKKK_BDMPFHKILCB_OFFSET UNITYSDK_OFFSET(0x13255510)
#define CEOJCBCHKKK_BOACCIACFEM_OFFSET UNITYSDK_OFFSET(0x13255E70)
#define CEOJCBCHKKK_DJAFEBBMKFB_OFFSET UNITYSDK_OFFSET(0x13255DA0)
#define CEOJCBCHKKK_DOFKEGBCMLJ_OFFSET UNITYSDK_OFFSET(0x13255300)
#define CEOJCBCHKKK_EMCPPBMEKKK_OFFSET UNITYSDK_OFFSET(0x13256220)
#define CEOJCBCHKKK_HHNMFDEPAEI_OFFSET UNITYSDK_OFFSET(0x13255B40)
#define CEOJCBCHKKK_INGFNBAFJMH_OFFSET UNITYSDK_OFFSET(0x132553D0)
#define CEOJCBCHKKK_PDKBBJHGHJO_OFFSET UNITYSDK_OFFSET(0x132558E0)
#define CEOJCBCHKKK__CTOR_OFFSET UNITYSDK_OFFSET(0x13255150)

inline static constexpr unsigned int CEOJCBCHKKK_TypeDefinitionIndex = 49124;

class CEOJCBCHKKK : public ::System::Object
{
public:
	::UnityEngine::PhysicMaterial* MHHBHFHBOHB; // 0x10
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* CIHNKMHJIMO; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* LFNNOLGGJNL; // 0x20
	::UnityEngine::PhysicMaterial* BEMDJFOFICN; // 0x28
	::System::Collections::Generic::List_1<::System::String*>* LAGFNGKDCJP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* POEJKHOAKOO; // 0x38
	::UnityEngine::PhysicMaterialCombine IPPCALICBBI; // 0x40
	::System::Single KIIOIFGMGCH; // 0x44
	::System::Single DLCHCBDKDNH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJCBCHKKK__CTOR_OFFSET))(this);
	}

	::System::Void DOFKEGBCMLJ(::System::String* AELLPLBJELA, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_DOFKEGBCMLJ_OFFSET))(this, AELLPLBJELA, EHHHMFKHNAI);
	}

	::System::Void BDMPFHKILCB(::CEOJCBCHKKK_ADGKFFBOFEF LJBPECKCCEA, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::CEOJCBCHKKK_ADGKFFBOFEF, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_BDMPFHKILCB_OFFSET))(this, LJBPECKCCEA, EHHHMFKHNAI);
	}

	::System::Void PDKBBJHGHJO(::System::Single KIIOIFGMGCH, ::System::Single DLCHCBDKDNH, ::System::Boolean PPCBANDFGBL, ::UnityEngine::PhysicMaterialCombine IPPCALICBBI, ::System::String* AELLPLBJELA, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::PhysicMaterialCombine, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_PDKBBJHGHJO_OFFSET))(this, KIIOIFGMGCH, DLCHCBDKDNH, PPCBANDFGBL, IPPCALICBBI, AELLPLBJELA, EHHHMFKHNAI);
	}

	::System::Void HHNMFDEPAEI(::System::Single KIIOIFGMGCH, ::System::Single DLCHCBDKDNH, ::System::Boolean PPCBANDFGBL, ::UnityEngine::PhysicMaterialCombine IPPCALICBBI, ::System::String* AELLPLBJELA, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::PhysicMaterialCombine, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_HHNMFDEPAEI_OFFSET))(this, KIIOIFGMGCH, DLCHCBDKDNH, PPCBANDFGBL, IPPCALICBBI, AELLPLBJELA, EHHHMFKHNAI);
	}

	::System::Void DJAFEBBMKFB(::System::String* AELLPLBJELA, ::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_DJAFEBBMKFB_OFFSET))(this, AELLPLBJELA, EHHHMFKHNAI);
	}

	::System::Void INGFNBAFJMH(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_INGFNBAFJMH_OFFSET))(this, EHHHMFKHNAI);
	}

	::System::Void BOACCIACFEM(::UnityEngine::Collider* EHHHMFKHNAI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Collider*))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_BOACCIACFEM_OFFSET))(this, EHHHMFKHNAI);
	}

	::System::Void EMCPPBMEKKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CEOJCBCHKKK_EMCPPBMEKKK_OFFSET))(this);
	}
};
