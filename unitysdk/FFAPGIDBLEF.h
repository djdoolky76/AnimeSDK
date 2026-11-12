#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/GamePlayLockTarget.h"
#include "unitysdk/RPG/Client/LockSource.h"
#include "unitysdk/System/Object.h"
class DLNGPHPNPAN;
namespace RPG::Client { class GameplayLockModuleConfigList; }
namespace RPG::Client { class LockTargetParam; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FFAPGIDBLEF_CTOR_OFFSET UNITYSDK_OFFSET(0x1664AFF0)
#define FFAPGIDBLEF_HCFINLKPIHL_OFFSET UNITYSDK_OFFSET(0x1664AA20)
#define FFAPGIDBLEF_IGBFHCJEHNK_OFFSET UNITYSDK_OFFSET(0x1664AAC0)
#define FFAPGIDBLEF_KCNHENJKGPA_OFFSET UNITYSDK_OFFSET(0x1664ADB0)
#define FFAPGIDBLEF_NMCIPJEIEKA_OFFSET UNITYSDK_OFFSET(0x1664AF50)
#define FFAPGIDBLEF_ODINLOEGGGL_OFFSET UNITYSDK_OFFSET(0x1664AC70)
#define FFAPGIDBLEF_PHBDIHNDMDA_OFFSET UNITYSDK_OFFSET(0x1664AB10)

inline static constexpr unsigned int FFAPGIDBLEF_TypeDefinitionIndex = 48733;

	class FFAPGIDBLEF : public ::System::Object
	{
	public:
		static ::RPG::Client::GameplayLockModuleConfigList** StaticGet_NMNNCKMPHFI()
		{
			return (::RPG::Client::GameplayLockModuleConfigList**)UnitySDK::FromName("", "FFAPGIDBLEF")->GetStaticField(0x549F0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFAPGIDBLEF_CTOR_OFFSET))(this);
		}

		static ::System::Void HCFINLKPIHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFAPGIDBLEF_HCFINLKPIHL_OFFSET))();
		}

		static ::System::Void IGBFHCJEHNK()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FFAPGIDBLEF_IGBFHCJEHNK_OFFSET))();
		}

		static ::DLNGPHPNPAN* PHBDIHNDMDA(::RPG::Client::LockSource a1)
		{
			return ((::DLNGPHPNPAN*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + FFAPGIDBLEF_PHBDIHNDMDA_OFFSET))(a1);
		}

		static ::System::Collections::Generic::List_1<::DLNGPHPNPAN*>* ODINLOEGGGL()
		{
			return ((::System::Collections::Generic::List_1<::DLNGPHPNPAN*>*(*)())((::PBYTE)hIl2Cpp + FFAPGIDBLEF_ODINLOEGGGL_OFFSET))();
		}

		static ::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>* KCNHENJKGPA(::RPG::Client::LockSource a1)
		{
			return ((::System::Collections::Generic::List_1<::RPG::Client::GamePlayLockTarget>*(*)(::RPG::Client::LockSource))((::PBYTE)hIl2Cpp + FFAPGIDBLEF_KCNHENJKGPA_OFFSET))(a1);
		}

		static ::RPG::Client::LockTargetParam* NMCIPJEIEKA(::RPG::Client::GamePlayLockTarget a1)
		{
			return ((::RPG::Client::LockTargetParam*(*)(::RPG::Client::GamePlayLockTarget))((::PBYTE)hIl2Cpp + FFAPGIDBLEF_NMCIPJEIEKA_OFFSET))(a1);
		}

	};
