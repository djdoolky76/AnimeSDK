#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KNGDGMPKJIF;
namespace System { class Object; }
namespace System { template <typename T> class WeakReference_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KLEGPKKGFMN_BBJNNAEEOLO_OFFSET UNITYSDK_OFFSET(0xBD70020)
#define KLEGPKKGFMN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD707C0)
#define KLEGPKKGFMN_CEKCDHGFDAO_OFFSET UNITYSDK_OFFSET(0xBD70380)
#define KLEGPKKGFMN_HGHCGAENJDJ_OFFSET UNITYSDK_OFFSET(0xBD6FEB0)
#define KLEGPKKGFMN_KNHPNCLMKMD_OFFSET UNITYSDK_OFFSET(0xBD703E0)

inline static constexpr unsigned int KLEGPKKGFMN_TypeDefinitionIndex = 62518;

	class KLEGPKKGFMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>** StaticGet_NPIPNPBCKGF()
		{
			return (::System::Collections::Generic::List_1<::System::WeakReference_1<::System::Object*>*>**)UnitySDK::FromName("", "KLEGPKKGFMN")->GetStaticField(0x55090);
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
