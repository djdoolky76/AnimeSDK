#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNGDGMPKJIF;
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNLAIADPCFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1879A5E0)
#define GNLAIADPCFM_HGHCGAENJDJ_OFFSET UNITYSDK_OFFSET(0x18799EE0)
#define GNLAIADPCFM_NEIMPLFMLAL_OFFSET UNITYSDK_OFFSET(0x1879A050)

inline static constexpr unsigned int GNLAIADPCFM_TypeDefinitionIndex = 83314;

	class GNLAIADPCFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>** StaticGet_NPIPNPBCKGF()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>**)UnitySDK::FromName("", "GNLAIADPCFM")->GetStaticField(0x71A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLAIADPCFM_CCTOR_OFFSET))();
		}

		static ::KNGDGMPKJIF* HGHCGAENJDJ()
		{
			return ((::KNGDGMPKJIF*(*)())((::PBYTE)hIl2Cpp + GNLAIADPCFM_HGHCGAENJDJ_OFFSET))();
		}

		static ::System::Void NEIMPLFMLAL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GNLAIADPCFM_NEIMPLFMLAL_OFFSET))();
		}

	};
