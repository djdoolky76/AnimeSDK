#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNGDGMPKJIF;
namespace System { class Object; }
namespace System { class WeakReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLEGPKKGFMN_BBJNNAEEOLO_OFFSET UNITYSDK_OFFSET(0xB5255D0)
#define KLEGPKKGFMN_CCTOR_OFFSET UNITYSDK_OFFSET(0xB525D70)
#define KLEGPKKGFMN_CEKCDHGFDAO_OFFSET UNITYSDK_OFFSET(0xB525930)
#define KLEGPKKGFMN_HGHCGAENJDJ_OFFSET UNITYSDK_OFFSET(0xB525460)
#define KLEGPKKGFMN_KNHPNCLMKMD_OFFSET UNITYSDK_OFFSET(0xB525990)

inline static constexpr unsigned int KLEGPKKGFMN_TypeDefinitionIndex = 61133;

	class KLEGPKKGFMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference*>** StaticGet_NPIPNPBCKGF()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference*>**)UnitySDK::FromName("", "KLEGPKKGFMN")->GetStaticField(0x5E3C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEGPKKGFMN_CCTOR_OFFSET))();
		}

		static ::KNGDGMPKJIF* HGHCGAENJDJ()
		{
			return ((::KNGDGMPKJIF*(*)())((::PBYTE)hIl2Cpp + KLEGPKKGFMN_HGHCGAENJDJ_OFFSET))();
		}

		static ::System::Void BBJNNAEEOLO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEGPKKGFMN_BBJNNAEEOLO_OFFSET))();
		}

		static ::System::Void CEKCDHGFDAO()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEGPKKGFMN_CEKCDHGFDAO_OFFSET))();
		}

		static ::System::Void KNHPNCLMKMD()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLEGPKKGFMN_KNHPNCLMKMD_OFFSET))();
		}

	};
