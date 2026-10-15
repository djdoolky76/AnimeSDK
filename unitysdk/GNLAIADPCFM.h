#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNGDGMPKJIF;
namespace System { class Object; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GNLAIADPCFM_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B16200)
#define GNLAIADPCFM_HGHCGAENJDJ_OFFSET UNITYSDK_OFFSET(0x15B15B00)
#define GNLAIADPCFM_NEIMPLFMLAL_OFFSET UNITYSDK_OFFSET(0x15B15C70)

inline static constexpr unsigned int GNLAIADPCFM_TypeDefinitionIndex = 80535;

	class GNLAIADPCFM : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_NPIPNPBCKGF()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)UnitySDK::FromName("", "GNLAIADPCFM")->GetStaticField(0x6C8F0);
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
