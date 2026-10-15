#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }

#define OEHEJMNBMMK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE2DBE0)
#define OEHEJMNBMMK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE2DBD0)
#define OEHEJMNBMMK_HPEMGKPBDMB_OFFSET UNITYSDK_OFFSET(0xBE2DA30)

	class OEHEJMNBMMK : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::Renderer*>** StaticGet_HDINMFOOIEK()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::Renderer*>**)UnitySDK::FromName("", "OEHEJMNBMMK")->GetStaticField(0x64580);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>** StaticGet_AKPBPAGFPCP()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::Il2CppArray<::UnityEngine::Material*>*>**)UnitySDK::FromName("", "OEHEJMNBMMK")->GetStaticField(0x64588);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OEHEJMNBMMK_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OEHEJMNBMMK_CCTOR_OFFSET))();
		}

		static ::Il2CppArray<::UnityEngine::Material*>* HPEMGKPBDMB(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::System::Int32))((::PBYTE)hIl2Cpp + OEHEJMNBMMK_HPEMGKPBDMB_OFFSET))(a1);
		}

	};
