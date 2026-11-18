#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KBKLCGKKIPI.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GOIKJCHFIIO;
class MIKBKMMKEML;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class MaterialPropertyBlock; }
namespace UnityEngine { class SpriteRenderer; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Transform; }

#define KLOPAALMBCK_ANFGCIMDOCC_OFFSET UNITYSDK_OFFSET(0x1FEE0E80)
#define KLOPAALMBCK_CLLPBGEFFIJ_OFFSET UNITYSDK_OFFSET(0x1FEE03E0)
#define KLOPAALMBCK_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1FEE0C30)
#define KLOPAALMBCK_EPJPPFGAGFK_OFFSET UNITYSDK_OFFSET(0x1FEE0630)
#define KLOPAALMBCK_FLHNGDLANDC_OFFSET UNITYSDK_OFFSET(0x1FEDFC40)
#define KLOPAALMBCK_HKKEAEMKFNP_1_OFFSET UNITYSDK_OFFSET(0x1FEE0CB0)
#define KLOPAALMBCK_HKKEAEMKFNP_OFFSET UNITYSDK_OFFSET(0x1FEE0210)
#define KLOPAALMBCK_JACMNCDIJMK_OFFSET UNITYSDK_OFFSET(0x1FEE0140)
#define KLOPAALMBCK_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1FEDF7B0)
#define KLOPAALMBCK_JLMEJOAMMNG_OFFSET UNITYSDK_OFFSET(0x1FEDFD90)
#define KLOPAALMBCK_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1FEE0800)
#define KLOPAALMBCK_MJFFHFPCJKN_OFFSET UNITYSDK_OFFSET(0x1FEE0850)
#define KLOPAALMBCK_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1FEDFF50)
#define KLOPAALMBCK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FEDF540)

inline static constexpr unsigned int KLOPAALMBCK_TypeDefinitionIndex = 96588;

class KLOPAALMBCK : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* HHGPGFOBLDN; // 0x10
	::System::Collections::Generic::List_1<::MIKBKMMKEML*>* CCBGBPAADIC; // 0x18
	::UnityEngine::MaterialPropertyBlock* NBOOMKCHKCL; // 0x20
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* CJFCJJLLAOE; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Transform*>* NIGDMPCPILP; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::GameObject*>* PFFLABPIKEE; // 0x38
	::GOIKJCHFIIO* BBODKEBFIOA; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>*>* OHHGBDEBKDL; // 0x48
	::System::Int32 KCMKKGMKPPP; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOPAALMBCK__CTOR_OFFSET))(this);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLOPAALMBCK_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void FLHNGDLANDC(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLOPAALMBCK_FLHNGDLANDC_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Void JLMEJOAMMNG(::System::Int32 MCOHLHMKLIP, ::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + KLOPAALMBCK_JLMEJOAMMNG_OFFSET))(this, MCOHLHMKLIP, NJOAJLDJCCJ);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KLOPAALMBCK_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::MIKBKMMKEML* JACMNCDIJMK(::UnityEngine::SpriteRenderer* MPCCAGODNJE)
	{
		return ((::MIKBKMMKEML*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + KLOPAALMBCK_JACMNCDIJMK_OFFSET))(this, MPCCAGODNJE);
	}

	::System::Void HKKEAEMKFNP(::System::Int32 AJALDBFPHMF, ::KBKLCGKKIPI PGLLJALFBJJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::KBKLCGKKIPI))((::PBYTE)hIl2Cpp + KLOPAALMBCK_HKKEAEMKFNP_OFFSET))(this, AJALDBFPHMF, PGLLJALFBJJ);
	}

	::KLOPAALMBCK* CLLPBGEFFIJ(::System::Int32 MCOHLHMKLIP, ::UnityEngine::GameObject* DEKJDEPKKLH, ::UnityEngine::Transform* IAPKABMDJNF)
	{
		return ((::KLOPAALMBCK*(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KLOPAALMBCK_CLLPBGEFFIJ_OFFSET))(this, MCOHLHMKLIP, DEKJDEPKKLH, IAPKABMDJNF);
	}

	::UnityEngine::GameObject* EPJPPFGAGFK(::System::Int32 MCOHLHMKLIP)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KLOPAALMBCK_EPJPPFGAGFK_OFFSET))(this, MCOHLHMKLIP);
	}

	static ::System::Void LJMIPGJJELP(::KLOPAALMBCK* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::KLOPAALMBCK*))((::PBYTE)hIl2Cpp + KLOPAALMBCK_LJMIPGJJELP_OFFSET))(EIFONLCJOPG);
	}

	::System::Int32 MJFFHFPCJKN(::System::Int32 MCOHLHMKLIP, ::System::String* HIAIKHDFCLN, ::KBKLCGKKIPI PGLLJALFBJJ, ::System::Single MDPPNMIPDMP)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::String*, ::KBKLCGKKIPI, ::System::Single))((::PBYTE)hIl2Cpp + KLOPAALMBCK_MJFFHFPCJKN_OFFSET))(this, MCOHLHMKLIP, HIAIKHDFCLN, PGLLJALFBJJ, MDPPNMIPDMP);
	}

	static ::KLOPAALMBCK* COKNIICCODC()
	{
		return ((::KLOPAALMBCK*(*)())((::PBYTE)hIl2Cpp + KLOPAALMBCK_COKNIICCODC_OFFSET))();
	}

	::System::Void HKKEAEMKFNP_1(::System::Int32 AJALDBFPHMF, ::UnityEngine::Vector3 PGLLJALFBJJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KLOPAALMBCK_HKKEAEMKFNP_1_OFFSET))(this, AJALDBFPHMF, PGLLJALFBJJ);
	}

	::KLOPAALMBCK* ANFGCIMDOCC(::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* PFMCHNNHDDG)
	{
		return ((::KLOPAALMBCK*(*)(::PVOID, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + KLOPAALMBCK_ANFGCIMDOCC_OFFSET))(this, PFMCHNNHDDG);
	}
};
