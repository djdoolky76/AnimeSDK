#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameplayGuideDataConfigRow; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IJGJFGFLCLJ_AFOPHADPEDA_OFFSET UNITYSDK_OFFSET(0x18056BB0)
#define IJGJFGFLCLJ_EJOOFHGFDLO_OFFSET UNITYSDK_OFFSET(0x18057E40)
#define IJGJFGFLCLJ_FOJIKMCMHBD_OFFSET UNITYSDK_OFFSET(0x18056350)
#define IJGJFGFLCLJ_IEIHINOKPHI_OFFSET UNITYSDK_OFFSET(0x180578E0)
#define IJGJFGFLCLJ_IFAICPNPODH_OFFSET UNITYSDK_OFFSET(0x18057320)
#define IJGJFGFLCLJ_MPDOBFAAJNL_OFFSET UNITYSDK_OFFSET(0x180568D0)
#define IJGJFGFLCLJ_OJAFAPEJJII_OFFSET UNITYSDK_OFFSET(0x18056CB0)

inline static constexpr unsigned int IJGJFGFLCLJ_TypeDefinitionIndex = 65430;

	class IJGJFGFLCLJ : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::System::UInt32>* FOJIKMCMHBD(::System::UInt32 a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_FOJIKMCMHBD_OFFSET))(a1);
		}

		static ::System::UInt32 OJAFAPEJJII(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>* a1)
		{
			return ((::System::UInt32(*)(::System::Collections::Generic::IReadOnlyList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_OJAFAPEJJII_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::System::UInt32>* IFAICPNPODH()
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)())((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_IFAICPNPODH_OFFSET))();
		}

		static ::System::Boolean IEIHINOKPHI(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::System::UInt32))((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_IEIHINOKPHI_OFFSET))(a1);
		}

		static ::System::Boolean EJOOFHGFDLO(::RPG::GameCore::GameplayGuideDataConfigRow* a1)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_EJOOFHGFDLO_OFFSET))(a1);
		}

		static ::System::UInt32 AFOPHADPEDA(::RPG::GameCore::GameplayGuideDataConfigRow* a1)
		{
			return ((::System::UInt32(*)(::RPG::GameCore::GameplayGuideDataConfigRow*))((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_AFOPHADPEDA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameplayGuideDataConfigRow*>* MPDOBFAAJNL()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::GameCore::GameplayGuideDataConfigRow*>*(*)())((::PBYTE)hIl2Cpp + IJGJFGFLCLJ_MPDOBFAAJNL_OFFSET))();
		}

	};
