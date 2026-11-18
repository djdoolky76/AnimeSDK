#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EONBHFFHOHK.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/OGAFJMNAAIM_LBLMFJACLIE.h"
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

#define OGAFJMNAAIM_AFPPPODAPLI_OFFSET UNITYSDK_OFFSET(0x1F040650)
#define OGAFJMNAAIM_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x1F040F90)
#define OGAFJMNAAIM_HCKJPHDJNHJ_OFFSET UNITYSDK_OFFSET(0x1F0409A0)
#define OGAFJMNAAIM_JACMNCDIJMK_OFFSET UNITYSDK_OFFSET(0x1F0404D0)
#define OGAFJMNAAIM_JJEJHGOJOII_OFFSET UNITYSDK_OFFSET(0x1F0406F0)
#define OGAFJMNAAIM_JJNNMBHDEJI_OFFSET UNITYSDK_OFFSET(0x1F040BC0)
#define OGAFJMNAAIM_LJMIPGJJELP_OFFSET UNITYSDK_OFFSET(0x1F040F40)
#define OGAFJMNAAIM_LKHHCNNOCOH_OFFSET UNITYSDK_OFFSET(0x1F041070)
#define OGAFJMNAAIM_MJFFHFPCJKN_OFFSET UNITYSDK_OFFSET(0x1F0405A0)
#define OGAFJMNAAIM_NMBJIKEJKCK_OFFSET UNITYSDK_OFFSET(0x1F0410E0)
#define OGAFJMNAAIM_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x1F0412A0)
#define OGAFJMNAAIM_PNKEAGFOJHA_OFFSET UNITYSDK_OFFSET(0x1F041250)
#define OGAFJMNAAIM__CTOR_OFFSET UNITYSDK_OFFSET(0x1F0402C0)

inline static constexpr unsigned int OGAFJMNAAIM_TypeDefinitionIndex = 96662;

class OGAFJMNAAIM : public ::System::Object
{
public:
	static ::System::Int32* StaticGet_AJALDBFPHMF()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(OGAFJMNAAIM_TypeDefinitionIndex)->GetStaticField(0x141F0);
	}
	::UnityEngine::MaterialPropertyBlock* NBOOMKCHKCL; // 0x10
	::UnityEngine::GameObject* DEKJDEPKKLH; // 0x18
	::System::Collections::Generic::List_1<::System::UInt32>* BGOJBPKOLGH; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* MHLGKKLAHAP; // 0x28
	::GOIKJCHFIIO* BBODKEBFIOA; // 0x30
	::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* AMGDAOLGPAK; // 0x38
	::System::Collections::Generic::Queue_1<::UnityEngine::GameObject*>* AIBLPKLIGNK; // 0x40
	::UnityEngine::Transform* IAPKABMDJNF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFJMNAAIM__CTOR_OFFSET))(this);
	}

	::MIKBKMMKEML* JACMNCDIJMK(::UnityEngine::SpriteRenderer* MPCCAGODNJE)
	{
		return ((::MIKBKMMKEML*(*)(::PVOID, ::UnityEngine::SpriteRenderer*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_JACMNCDIJMK_OFFSET))(this, MPCCAGODNJE);
	}

	::MIKBKMMKEML* MJFFHFPCJKN(::UnityEngine::SpriteRenderer* MPCCAGODNJE, ::MoleMole::TextureSheetType GANEOPMENCL, ::System::String* HIAIKHDFCLN)
	{
		return ((::MIKBKMMKEML*(*)(::PVOID, ::UnityEngine::SpriteRenderer*, ::MoleMole::TextureSheetType, ::System::String*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_MJFFHFPCJKN_OFFSET))(this, MPCCAGODNJE, GANEOPMENCL, HIAIKHDFCLN);
	}

	::System::Void AFPPPODAPLI(::UnityEngine::GameObject* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_AFPPPODAPLI_OFFSET))(this, EIFONLCJOPG);
	}

	::System::Void JJEJHGOJOII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_JJEJHGOJOII_OFFSET))(this);
	}

	::System::Void HCKJPHDJNHJ(::System::UInt32 BKLGNCBNEGM, ::System::Int32 JHFKDGBCOBA, ::UnityEngine::Vector3 PAHNIAIOIAF, ::EONBHFFHOHK PFCBGFGLDNP, ::System::Int32 EOGLMAEPALE, ::System::Int32 GGAKKFJDIFE)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::EONBHFFHOHK, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_HCKJPHDJNHJ_OFFSET))(this, BKLGNCBNEGM, JHFKDGBCOBA, PAHNIAIOIAF, PFCBGFGLDNP, EOGLMAEPALE, GGAKKFJDIFE);
	}

	static ::System::Void LJMIPGJJELP(::OGAFJMNAAIM* EIFONLCJOPG)
	{
		return ((::System::Void(*)(::OGAFJMNAAIM*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_LJMIPGJJELP_OFFSET))(EIFONLCJOPG);
	}

	static ::OGAFJMNAAIM* COKNIICCODC(::UnityEngine::GameObject* DEKJDEPKKLH, ::UnityEngine::Transform* IAPKABMDJNF, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* AMGDAOLGPAK)
	{
		return ((::OGAFJMNAAIM*(*)(::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_COKNIICCODC_OFFSET))(DEKJDEPKKLH, IAPKABMDJNF, AMGDAOLGPAK);
	}

	::UnityEngine::GameObject* NMBJIKEJKCK()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_NMBJIKEJKCK_OFFSET))(this);
	}

	::OGAFJMNAAIM* LKHHCNNOCOH(::UnityEngine::GameObject* DEKJDEPKKLH, ::UnityEngine::Transform* IAPKABMDJNF, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>* AMGDAOLGPAK)
	{
		return ((::OGAFJMNAAIM*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*, ::System::Func_2<::System::String*, ::UnityEngine::Texture2D*>*))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_LKHHCNNOCOH_OFFSET))(this, DEKJDEPKKLH, IAPKABMDJNF, AMGDAOLGPAK);
	}

	static ::System::Int32 PNKEAGFOJHA()
	{
		return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + OGAFJMNAAIM_PNKEAGFOJHA_OFFSET))();
	}

	::System::Void JJNNMBHDEJI(::UnityEngine::Vector3 PAHNIAIOIAF, ::OGAFJMNAAIM_LBLMFJACLIE& HCAMMDEEJIH)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::OGAFJMNAAIM_LBLMFJACLIE&))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_JJNNMBHDEJI_OFFSET))(this, PAHNIAIOIAF, HCAMMDEEJIH);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OGAFJMNAAIM_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}
};
