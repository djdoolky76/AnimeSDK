#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowPieceRepresentType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/UnityEngine/Vector4.h"

class DGDNKBFMHME;
class GHDCKIKJNFL;
class LJEEPGADBCD;
namespace MoleMole { class IVideoPlayer; }
namespace MoleMole::Config { class ConfigHollowChessboard; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Texture; }
namespace UnityEngine { class Transform; }

#define AFADNINMEJF_AICOEKCJONM_OFFSET UNITYSDK_OFFSET(0x16FE3050)
#define AFADNINMEJF_BHADJJFHHJA_OFFSET UNITYSDK_OFFSET(0x16FE37E0)
#define AFADNINMEJF_BKPONNHJKBP_OFFSET UNITYSDK_OFFSET(0x16FE3BA0)
#define AFADNINMEJF_CCHNKPDLFON_OFFSET UNITYSDK_OFFSET(0x16FE3100)
#define AFADNINMEJF_CICALBGFFAL_OFFSET UNITYSDK_OFFSET(0x16FE2910)
#define AFADNINMEJF_CPIILIGICCC_OFFSET UNITYSDK_OFFSET(0x16FE38D0)
#define AFADNINMEJF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16FE26D0)
#define AFADNINMEJF_DOCGMAIMGNJ_OFFSET UNITYSDK_OFFSET(0x16FE30D0)
#define AFADNINMEJF_ECDLPCHACPG_OFFSET UNITYSDK_OFFSET(0x16FE3130)
#define AFADNINMEJF_HOPPHNOHJKG_OFFSET UNITYSDK_OFFSET(0x16FE3980)
#define AFADNINMEJF_LFNHDOEDKGC_OFFSET UNITYSDK_OFFSET(0x16FE3920)
#define AFADNINMEJF_MCLGPLMLPLB_OFFSET UNITYSDK_OFFSET(0x16FE3B10)
#define AFADNINMEJF_MDCKMIMAGPL_OFFSET UNITYSDK_OFFSET(0x16FE3870)
#define AFADNINMEJF_MFKOMJHAGBF_OFFSET UNITYSDK_OFFSET(0x16FE2FA0)
#define AFADNINMEJF_MPEOALHIOIF_OFFSET UNITYSDK_OFFSET(0x16FE3200)
#define AFADNINMEJF_NOJFOOLIIGC_OFFSET UNITYSDK_OFFSET(0x16FE34B0)
#define AFADNINMEJF_OLBJBIFLOJO_OFFSET UNITYSDK_OFFSET(0x16FE31A0)
#define AFADNINMEJF_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x16FE3660)
#define AFADNINMEJF_PGHAJOMNDDJ_OFFSET UNITYSDK_OFFSET(0x16FE3BF0)
#define AFADNINMEJF_PKEGDJDIJHG_OFFSET UNITYSDK_OFFSET(0x16FE3230)
#define AFADNINMEJF__CCTOR_OFFSET UNITYSDK_OFFSET(0x16FE3030)
#define AFADNINMEJF__CTOR_OFFSET UNITYSDK_OFFSET(0x16FE2AC0)

inline static constexpr unsigned int AFADNINMEJF_TypeDefinitionIndex = 53989;

class AFADNINMEJF : public ::System::Object
{
public:
	static ::UnityEngine::Vector3* StaticGet_KCOAALJPAOD()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AFADNINMEJF_TypeDefinitionIndex)->GetStaticField(0xF6A0);
	}
	static ::UnityEngine::Vector3* StaticGet_NHJCBPCHBLF()
	{
		return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(AFADNINMEJF_TypeDefinitionIndex)->GetStaticField(0xF6AC);
	}
	::MoleMole::Config::ConfigHollowChessboard* CEJENBBHBBG; // 0x10
	::LJEEPGADBCD* FHKNKOMFGCC; // 0x18
	::UnityEngine::Transform* GPAIAOMIEDF; // 0x20
	::GHDCKIKJNFL* BPPANMOLNNI; // 0x28
	::DGDNKBFMHME* COIPFDJKPEA; // 0x30
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* IEKHFDLDBNM; // 0x38
	::MoleMole::IVideoPlayer* GJLGBDGEEDK; // 0x40
	::System::String* CFLGJFLGKPG; // 0x48
	::UnityEngine::Material* KKKAGJCHPMF; // 0x50
	::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* LDBBLFFLGHC; // 0x58
	::System::Action* PHOADBJGFBE; // 0x60

	::System::Void _ctor(::MoleMole::HollowPieceRepresentType JNPLGGHGBNB)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowPieceRepresentType))((::PBYTE)hIl2Cpp + AFADNINMEJF__CTOR_OFFSET))(this, JNPLGGHGBNB);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AFADNINMEJF__CCTOR_OFFSET))();
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_DISPOSE_OFFSET))(this);
	}

	::System::Boolean AICOEKCJONM()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_AICOEKCJONM_OFFSET))(this);
	}

	::System::Int64 ECDLPCHACPG()
	{
		return ((::System::Int64(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_ECDLPCHACPG_OFFSET))(this);
	}

	::System::Void OLBJBIFLOJO(::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* JFIPJPEKAFC, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* JHMNFFBCHGJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AFADNINMEJF_OLBJBIFLOJO_OFFSET))(this, JFIPJPEKAFC, JHMNFFBCHGJ);
	}

	::System::Boolean MPEOALHIOIF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_MPEOALHIOIF_OFFSET))(this);
	}

	::System::Void PKEGDJDIJHG(::MoleMole::IVideoPlayer* CEHEDIJEJFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + AFADNINMEJF_PKEGDJDIJHG_OFFSET))(this, CEHEDIJEJFG);
	}

	::Cysharp::Threading::Tasks::UniTask NOJFOOLIIGC(::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::DGDNKBFMHME*>* EJNNKEEJENG, ::System::Action_1<::DGDNKBFMHME*>* PABLEDCGDGM, ::System::Action_1<::DGDNKBFMHME*>* AJFPKBOMMIA, ::System::Action* MDNHGALDDKA, ::System::Threading::CancellationToken CBJFKEAGLGD, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* JFIPJPEKAFC, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* KMJALCAPOFP)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AFADNINMEJF_NOJFOOLIIGC_OFFSET))(this, CJBJONJDOLI, HAFDIMGJBHC, EJNNKEEJENG, PABLEDCGDGM, AJFPKBOMMIA, MDNHGALDDKA, CBJFKEAGLGD, JFIPJPEKAFC, KMJALCAPOFP);
	}

	::System::Void PEDANHBGIGE(::System::Boolean HFMHOELKCAJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFADNINMEJF_PEDANHBGIGE_OFFSET))(this, HFMHOELKCAJ);
	}

	::UnityEngine::Vector4 BHADJJFHHJA()
	{
		return ((::UnityEngine::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_BHADJJFHHJA_OFFSET))(this);
	}

	::System::Void MDCKMIMAGPL(::System::Action* PABLEDCGDGM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + AFADNINMEJF_MDCKMIMAGPL_OFFSET))(this, PABLEDCGDGM);
	}

	::System::Int32 CPIILIGICCC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_CPIILIGICCC_OFFSET))(this);
	}

	::System::Void CICALBGFFAL(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AFADNINMEJF_CICALBGFFAL_OFFSET))(this, NJOAJLDJCCJ);
	}

	::System::Void LFNHDOEDKGC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_LFNHDOEDKGC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask HOPPHNOHJKG(::System::String* CJBJONJDOLI, ::System::Boolean HAFDIMGJBHC, ::System::Action_1<::DGDNKBFMHME*>* EJNNKEEJENG, ::System::Action_1<::DGDNKBFMHME*>* PABLEDCGDGM, ::System::Action_1<::DGDNKBFMHME*>* AJFPKBOMMIA, ::System::Action* MDNHGALDDKA, ::System::Threading::CancellationToken CBJFKEAGLGD, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* JFIPJPEKAFC, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>* KMJALCAPOFP)
	{
		return ((::Cysharp::Threading::Tasks::UniTask(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action_1<::DGDNKBFMHME*>*, ::System::Action*, ::System::Threading::CancellationToken, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*, ::System::Action_2<::UnityEngine::Texture*, ::System::Int32>*))((::PBYTE)hIl2Cpp + AFADNINMEJF_HOPPHNOHJKG_OFFSET))(this, CJBJONJDOLI, HAFDIMGJBHC, EJNNKEEJENG, PABLEDCGDGM, AJFPKBOMMIA, MDNHGALDDKA, CBJFKEAGLGD, JFIPJPEKAFC, KMJALCAPOFP);
	}

	::UnityEngine::GameObject* MFKOMJHAGBF(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AFADNINMEJF_MFKOMJHAGBF_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void MCLGPLMLPLB(::MoleMole::IVideoPlayer* CEHEDIJEJFG)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::IVideoPlayer*))((::PBYTE)hIl2Cpp + AFADNINMEJF_MCLGPLMLPLB_OFFSET))(this, CEHEDIJEJFG);
	}

	::System::Boolean CCHNKPDLFON()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_CCHNKPDLFON_OFFSET))(this);
	}

	::System::Int32 BKPONNHJKBP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_BKPONNHJKBP_OFFSET))(this);
	}

	::System::Boolean DOCGMAIMGNJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_DOCGMAIMGNJ_OFFSET))(this);
	}

	::System::Void PGHAJOMNDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFADNINMEJF_PGHAJOMNDDJ_OFFSET))(this);
	}
};
