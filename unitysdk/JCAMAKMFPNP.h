#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGJFAFONDHN.h"
class GGJFAFONDHN;
namespace EnviromentSystemV2Space { class BlendingValBase; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define JCAMAKMFPNP_ACMKLFOMPFC_OFFSET UNITYSDK_OFFSET(0x1656A270)
#define JCAMAKMFPNP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1656A920)
#define JCAMAKMFPNP_CTOR_OFFSET UNITYSDK_OFFSET(0x1656A8F0)

inline static constexpr unsigned int JCAMAKMFPNP_TypeDefinitionIndex = 49535;

	class JCAMAKMFPNP : public ::GGJFAFONDHN
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>** StaticGet_KBOHHDHCDDM()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Object*>**)UnitySDK::FromName("", "JCAMAKMFPNP")->GetStaticField(0x6B3B0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCAMAKMFPNP_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JCAMAKMFPNP_CCTOR_OFFSET))();
		}

		static ::GGJFAFONDHN* ACMKLFOMPFC(::EnviromentSystemV2Space::BlendingValBase* a1)
		{
			return ((::GGJFAFONDHN*(*)(::EnviromentSystemV2Space::BlendingValBase*))((::PBYTE)hIl2Cpp + JCAMAKMFPNP_ACMKLFOMPFC_OFFSET))(a1);
		}

	};
