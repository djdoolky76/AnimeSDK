#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IILAKNBLGBD.h"
#include "unitysdk/UnityEngine/Color.h"
namespace UnityEngine { class Cubemap; }
namespace UnityEngine { class Texture; }

#define HNFAPJIKBEJ_CTOR_OFFSET UNITYSDK_OFFSET(0x15D92C60)
#define HNFAPJIKBEJ_ENMMCCNFDGC_OFFSET UNITYSDK_OFFSET(0x15D92970)
#define HNFAPJIKBEJ_ICLGCHLMJHC_OFFSET UNITYSDK_OFFSET(0x15D92810)
#define HNFAPJIKBEJ_KODNOFIPEOH_OFFSET UNITYSDK_OFFSET(0x15D928F0)
#define HNFAPJIKBEJ_NJGKMOFAONL_OFFSET UNITYSDK_OFFSET(0x15D92A40)
#define HNFAPJIKBEJ_PCDLKLNDNKO_OFFSET UNITYSDK_OFFSET(0x15D92880)

	class HNFAPJIKBEJ : public ::IILAKNBLGBD
	{
	public:
		::System::Int32 OCBAAJJBPIP; // 0x68
		static ::UnityEngine::Texture** StaticGet_LPOEMAMIKMC()
		{
			return (::UnityEngine::Texture**)UnitySDK::FromName("", "HNFAPJIKBEJ")->GetStaticField(0x31680);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture* ICLGCHLMJHC(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_ICLGCHLMJHC_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Texture* PCDLKLNDNKO(::UnityEngine::Texture* a1, ::UnityEngine::Texture* a2, ::System::Single a3)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::UnityEngine::Texture*, ::UnityEngine::Texture*, ::System::Single))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_PCDLKLNDNKO_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Texture* KODNOFIPEOH()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_KODNOFIPEOH_OFFSET))(this);
		}

		::UnityEngine::Texture* ENMMCCNFDGC()
		{
			return ((::UnityEngine::Texture*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_ENMMCCNFDGC_OFFSET))(this);
		}

		::System::Void NJGKMOFAONL(::UnityEngine::Cubemap* a1, ::UnityEngine::Color a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Cubemap*, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + HNFAPJIKBEJ_NJGKMOFAONL_OFFSET))(this, a1, a2);
		}

	};
