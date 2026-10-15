#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JENCIPCOCGL;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }

#define JENCIPCOCGL_BJMNKLGEMPM_1_OFFSET UNITYSDK_OFFSET(0x16641A60)
#define JENCIPCOCGL_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x16641340)
#define JENCIPCOCGL_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x16641110)
#define JENCIPCOCGL_CTOR_OFFSET UNITYSDK_OFFSET(0x16641260)
#define JENCIPCOCGL_DISPOSE_OFFSET UNITYSDK_OFFSET(0x166413A0)
#define JENCIPCOCGL_EBHNJMPEILL_OFFSET UNITYSDK_OFFSET(0x16641B10)
#define JENCIPCOCGL_GGBLHEHJBDO_OFFSET UNITYSDK_OFFSET(0x16641100)

	class JENCIPCOCGL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::UnityEngine::Object*>* NDDIONPOBHK; // 0x10
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Object*, ::System::Collections::Generic::List_1<::UnityEngine::Object*>*>* MFJBNMLBBCF; // 0x18
		::UnityEngine::Transform* GKNBCPMJHMN; // 0x20
		static ::JENCIPCOCGL** StaticGet_FLMODBLFAGD()
		{
			return (::JENCIPCOCGL**)UnitySDK::FromName("", "JENCIPCOCGL")->GetStaticField(0xB440);
		}

		// static const ::System::Object ONGMFGCACEH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENCIPCOCGL_CTOR_OFFSET))(this);
		}

		static ::JENCIPCOCGL* GGBLHEHJBDO()
		{
			return ((::JENCIPCOCGL*(*)())((::PBYTE)hIl2Cpp + JENCIPCOCGL_GGBLHEHJBDO_OFFSET))();
		}

		static ::System::Void BPLPBPMEODA()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENCIPCOCGL_BPLPBPMEODA_OFFSET))();
		}

		static ::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JENCIPCOCGL_BJMNKLGEMPM_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JENCIPCOCGL_DISPOSE_OFFSET))(this);
		}

		static ::System::Void BJMNKLGEMPM_1(::UnityEngine::Object* a1)
		{
			return ((::System::Void(*)(::UnityEngine::Object*))((::PBYTE)hIl2Cpp + JENCIPCOCGL_BJMNKLGEMPM_1_OFFSET))(a1);
		}

		::UnityEngine::Transform* EBHNJMPEILL()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JENCIPCOCGL_EBHNJMPEILL_OFFSET))(this);
		}

	};
