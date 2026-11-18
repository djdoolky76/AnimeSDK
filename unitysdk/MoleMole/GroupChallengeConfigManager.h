#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class GIEDOGIBIMC;
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_DCMPBIJMDJM_OFFSET UNITYSDK_OFFSET(0x12B49A10)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_IKMENOAKDFD_OFFSET UNITYSDK_OFFSET(0x12B4A2C0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_ILOIJGCLNBL_OFFSET UNITYSDK_OFFSET(0x12B49AE0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_JHGGINBEFPK_OFFSET UNITYSDK_OFFSET(0x12B4A020)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_NBJFMOLDOHK_OFFSET UNITYSDK_OFFSET(0x12B4A2D0)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_NKLNCMGDCJO_OFFSET UNITYSDK_OFFSET(0x12B49530)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_OBCMFBAHHGA_OFFSET UNITYSDK_OFFSET(0x12B49F10)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_PEAFFJIJFMO_OFFSET UNITYSDK_OFFSET(0x12B49F90)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_PMGBGAHFOOF_OFFSET UNITYSDK_OFFSET(0x12B49A00)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x12B49380)
#define MOLEMOLE_GROUPCHALLENGECONFIGMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x12B49490)

namespace MoleMole
{
	inline static constexpr unsigned int GroupChallengeConfigManager_TypeDefinitionIndex = 51486;

	class GroupChallengeConfigManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>** StaticGet_DONBLIIMPPI()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::Int32, ::GIEDOGIBIMC*>**)Il2CppClass::FromTypeDefinitionIndex(GroupChallengeConfigManager_TypeDefinitionIndex)->GetStaticField(0x46CA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_RESET_OFFSET))();
		}

		static ::System::Boolean NKLNCMGDCJO(::Foundation::AssetPath CJBJONJDOLI, ::Foundation::AssetRequestHandle& FCEIKAIDHPM)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_NKLNCMGDCJO_OFFSET))(CJBJONJDOLI, FCEIKAIDHPM);
		}

		static ::System::String* PMGBGAHFOOF()
		{
			return ((::System::String*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_PMGBGAHFOOF_OFFSET))();
		}

		static ::Il2CppArray<::Foundation::AssetPath>* DCMPBIJMDJM()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_DCMPBIJMDJM_OFFSET))();
		}

		static ::System::Void ILOIJGCLNBL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_ILOIJGCLNBL_OFFSET))();
		}

		static ::System::Collections::IEnumerator* PEAFFJIJFMO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_PEAFFJIJFMO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
		}

		static ::GIEDOGIBIMC* JHGGINBEFPK(::System::Int32 AEIAFDJOACK)
		{
			return ((::GIEDOGIBIMC*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_JHGGINBEFPK_OFFSET))(AEIAFDJOACK);
		}

		static ::System::Boolean IKMENOAKDFD()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_IKMENOAKDFD_OFFSET))();
		}

		static ::System::Boolean NBJFMOLDOHK(::System::Int32 AEIAFDJOACK, ::GIEDOGIBIMC*& DFMKILICPFB)
		{
			return ((::System::Boolean(*)(::System::Int32, ::GIEDOGIBIMC*&))((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_NBJFMOLDOHK_OFFSET))(AEIAFDJOACK, DFMKILICPFB);
		}

		static ::Il2CppArray<::Foundation::AssetPath>* OBCMFBAHHGA()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_GROUPCHALLENGECONFIGMANAGER_OBCMFBAHHGA_OFFSET))();
		}
	};
}
