#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraModuleType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class CameraModuleConfigBase; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define LIKIAJGIOJH_BFCEEPHAGIF_OFFSET UNITYSDK_OFFSET(0xB6D60A0)
#define LIKIAJGIOJH_BFMLFOOHFAC_OFFSET UNITYSDK_OFFSET(0xB6D65D0)
#define LIKIAJGIOJH_CTOR_OFFSET UNITYSDK_OFFSET(0xB6D5DC0)
#define LIKIAJGIOJH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB6D5ED0)
#define LIKIAJGIOJH_DJGDFMEEADH_OFFSET UNITYSDK_OFFSET(0xB6D6310)
#define LIKIAJGIOJH_FMNIBBINBIO_OFFSET UNITYSDK_OFFSET(0xB6D6660)
#define LIKIAJGIOJH_NAHLPAHLBLG_OFFSET UNITYSDK_OFFSET(0xB6D6250)

inline static constexpr unsigned int LIKIAJGIOJH_TypeDefinitionIndex = 69671;

	class LIKIAJGIOJH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::RPG::Client::CameraModuleType, ::System::Object*>* GCBIMJCNFOJ; // 0x10
		::System::Collections::Generic::HashSet_1<::RPG::Client::CameraModuleType>* KPNAPJBCDCJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_DISPOSE_OFFSET))(this);
		}

		::System::Void BFCEEPHAGIF(::RPG::Client::CameraModuleType a1, ::RPG::Client::CameraModuleConfigBase* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraModuleType, ::RPG::Client::CameraModuleConfigBase*, ::System::Boolean))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_BFCEEPHAGIF_OFFSET))(this, a1, a2, a3);
		}

		::RPG::Client::CameraModuleConfigBase* NAHLPAHLBLG(::RPG::Client::CameraModuleType a1)
		{
			return ((::RPG::Client::CameraModuleConfigBase*(*)(::PVOID, ::RPG::Client::CameraModuleType))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_NAHLPAHLBLG_OFFSET))(this, a1);
		}

		::System::Void DJGDFMEEADH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_DJGDFMEEADH_OFFSET))(this);
		}

		::System::Void FMNIBBINBIO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_FMNIBBINBIO_OFFSET))(this);
		}

		::System::Void BFMLFOOHFAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LIKIAJGIOJH_BFMLFOOHFAC_OFFSET))(this);
		}

	};
