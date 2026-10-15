#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ECDNGOHAPMA;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define JKOKCNGJHDG_AHFBNFMCJLI_OFFSET UNITYSDK_OFFSET(0xB227920)
#define JKOKCNGJHDG_AIIHKLABCEB_OFFSET UNITYSDK_OFFSET(0xB227CE0)
#define JKOKCNGJHDG_CCTOR_OFFSET UNITYSDK_OFFSET(0xB227EB0)
#define JKOKCNGJHDG_JCBPOLPGLAD_OFFSET UNITYSDK_OFFSET(0xB227430)
#define JKOKCNGJHDG_LAJBOHBDPGJ_OFFSET UNITYSDK_OFFSET(0xB227B40)
#define JKOKCNGJHDG_LICIJLKPAFG_OFFSET UNITYSDK_OFFSET(0xB227820)
#define JKOKCNGJHDG_LKGMKFJEFGM_OFFSET UNITYSDK_OFFSET(0xB2278A0)

inline static constexpr unsigned int JKOKCNGJHDG_TypeDefinitionIndex = 73186;

	class JKOKCNGJHDG : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::ECDNGOHAPMA*>** StaticGet_LHCOKJKHOBH()
		{
			return (::System::Collections::Generic::List_1<::ECDNGOHAPMA*>**)UnitySDK::FromName("", "JKOKCNGJHDG")->GetStaticField(0x1A7F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JKOKCNGJHDG_CCTOR_OFFSET))();
		}

		static ::System::Int32 JCBPOLPGLAD(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_JCBPOLPGLAD_OFFSET))(a1, a2);
		}

		static ::System::Int32 LICIJLKPAFG(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_LICIJLKPAFG_OFFSET))(a1, a2);
		}

		static ::System::Int32 LKGMKFJEFGM(::UnityEngine::Transform* a1)
		{
			return ((::System::Int32(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_LKGMKFJEFGM_OFFSET))(a1);
		}

		static ::System::Int32 AHFBNFMCJLI(::ECDNGOHAPMA* a1, ::ECDNGOHAPMA* a2)
		{
			return ((::System::Int32(*)(::ECDNGOHAPMA*, ::ECDNGOHAPMA*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_AHFBNFMCJLI_OFFSET))(a1, a2);
		}

		static ::System::String* LAJBOHBDPGJ(::UnityEngine::Transform* a1)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_LAJBOHBDPGJ_OFFSET))(a1);
		}

		static ::System::String* AIIHKLABCEB(::UnityEngine::Transform* a1, ::UnityEngine::Transform* a2)
		{
			return ((::System::String*(*)(::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JKOKCNGJHDG_AIIHKLABCEB_OFFSET))(a1, a2);
		}

	};
