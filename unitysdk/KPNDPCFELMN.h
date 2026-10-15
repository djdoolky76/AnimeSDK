#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/LogType.h"
class JNLPFBDFNIJ;
class KPNDPCFELMN_IDGMFOKGLAO;
namespace System { class String; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPNDPCFELMN_AMNHHBMIOCP_OFFSET UNITYSDK_OFFSET(0xB5BC480)
#define KPNDPCFELMN_AOHGNELBJOB_OFFSET UNITYSDK_OFFSET(0xB5BC650)
#define KPNDPCFELMN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB5BE990)
#define KPNDPCFELMN_CPEOBNEKNLJ_OFFSET UNITYSDK_OFFSET(0xB5BE3C0)
#define KPNDPCFELMN_FFOEODHPHNB_OFFSET UNITYSDK_OFFSET(0xB5BDE50)
#define KPNDPCFELMN_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0xB5BD150)
#define KPNDPCFELMN_NBIDLMOCPNF_OFFSET UNITYSDK_OFFSET(0xB5BD760)
#define KPNDPCFELMN_OGBLIEJNNPJ_OFFSET UNITYSDK_OFFSET(0xB5BD280)
#define KPNDPCFELMN_OLFHAEHKEKG_OFFSET UNITYSDK_OFFSET(0xB5BC500)

inline static constexpr unsigned int KPNDPCFELMN_TypeDefinitionIndex = 69486;

	class KPNDPCFELMN : public ::System::Object
	{
	public:
		static ::KPNDPCFELMN_IDGMFOKGLAO** StaticGet_LKGHPDODGDI()
		{
			return (::KPNDPCFELMN_IDGMFOKGLAO**)UnitySDK::FromName("", "KPNDPCFELMN")->GetStaticField(0x637A0);
		}

		static ::System::String** StaticGet_LGFBAECDFID()
		{
			return (::System::String**)UnitySDK::FromName("", "KPNDPCFELMN")->GetStaticField(0x637A8);
		}

		static ::System::String** StaticGet_FGIHAOPOACK()
		{
			return (::System::String**)UnitySDK::FromName("", "KPNDPCFELMN")->GetStaticField(0x637B0);
		}

		static ::System::String** StaticGet_DHICLHDHNDN()
		{
			return (::System::String**)UnitySDK::FromName("", "KPNDPCFELMN")->GetStaticField(0x637B8);
		}

		static ::System::Collections::Generic::HashSet_1<::System::Int32>** StaticGet_EHNDHPCDNEH()
		{
			return (::System::Collections::Generic::HashSet_1<::System::Int32>**)UnitySDK::FromName("", "KPNDPCFELMN")->GetStaticField(0x637C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNDPCFELMN_CCTOR_OFFSET))();
		}

		static ::System::Collections::IEnumerator* AMNHHBMIOCP()
		{
			return ((::System::Collections::IEnumerator*(*)())((::PBYTE)hIl2Cpp + KPNDPCFELMN_AMNHHBMIOCP_OFFSET))();
		}

		static ::JNLPFBDFNIJ* OLFHAEHKEKG()
		{
			return ((::JNLPFBDFNIJ*(*)())((::PBYTE)hIl2Cpp + KPNDPCFELMN_OLFHAEHKEKG_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::System::Int32>* AOHGNELBJOB(::JNLPFBDFNIJ* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::JNLPFBDFNIJ*))((::PBYTE)hIl2Cpp + KPNDPCFELMN_AOHGNELBJOB_OFFSET))(a1);
		}

		static ::System::Void KPJGDHLENIP()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KPNDPCFELMN_KPJGDHLENIP_OFFSET))();
		}

		static ::System::Void OGBLIEJNNPJ(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + KPNDPCFELMN_OGBLIEJNNPJ_OFFSET))(a1, a2, a3);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FFOEODHPHNB(::System::String* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>*(*)(::System::String*))((::PBYTE)hIl2Cpp + KPNDPCFELMN_FFOEODHPHNB_OFFSET))(a1);
		}

		static ::System::Void NBIDLMOCPNF(::System::String* a1, ::System::String* a2, ::UnityEngine::LogType a3)
		{
			return ((::System::Void(*)(::System::String*, ::System::String*, ::UnityEngine::LogType))((::PBYTE)hIl2Cpp + KPNDPCFELMN_NBIDLMOCPNF_OFFSET))(a1, a2, a3);
		}

		static ::System::Void CPEOBNEKNLJ(::System::String* a1)
		{
			return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + KPNDPCFELMN_CPEOBNEKNLJ_OFFSET))(a1);
		}

	};
