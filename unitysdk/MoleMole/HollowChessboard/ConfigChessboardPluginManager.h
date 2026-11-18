#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"

class LLCFODKNNLB;
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_AJFJMCNBJFM_OFFSET UNITYSDK_OFFSET(0x14328AE0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x14328D90)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x14329050)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_HGIDNDOPCAO_OFFSET UNITYSDK_OFFSET(0x143289D0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_INAPNCICFAP_OFFSET UNITYSDK_OFFSET(0x14329160)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_MFNJBPJCDLI_OFFSET UNITYSDK_OFFSET(0x14329640)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_OECFMDLGAOC_OFFSET UNITYSDK_OFFSET(0x14328FC0)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_RESET_OFFSET UNITYSDK_OFFSET(0x14328820)
#define MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14328930)

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int ConfigChessboardPluginManager_TypeDefinitionIndex = 62584;

	class ConfigChessboardPluginManager : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>** StaticGet_GGBMKDKPCIE()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::String*, ::LLCFODKNNLB*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigChessboardPluginManager_TypeDefinitionIndex)->GetStaticField(0x46CC0);
		}
		// static const ::System::String* HFBBNNDOJFM; // 0x0
		// static const ::System::String* DLINKKCLCCD; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER__CCTOR_OFFSET))();
		}

		static ::System::Void Reset()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_RESET_OFFSET))();
		}

		static ::Il2CppArray<::Foundation::AssetPath>* HGIDNDOPCAO()
		{
			return ((::Il2CppArray<::Foundation::AssetPath>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_HGIDNDOPCAO_OFFSET))();
		}

		static ::LLCFODKNNLB* AJFJMCNBJFM(::System::String* HHBKGNAMDJN)
		{
			return ((::LLCFODKNNLB*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_AJFJMCNBJFM_OFFSET))(HHBKGNAMDJN);
		}

		static ::System::Void CPDFCDONECK(::System::Boolean GHOLINNCJCE, ::System::Action* IBNICCGMILF)
		{
			return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_CPDFCDONECK_OFFSET))(GHOLINNCJCE, IBNICCGMILF);
		}

		static ::System::Collections::IEnumerator* OECFMDLGAOC(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ)
		{
			return ((::System::Collections::IEnumerator*(*)(::System::Single, ::System::Action_1<::System::Single>*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_OECFMDLGAOC_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ);
		}

		static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
		{
			return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
		}

		static ::System::Boolean INAPNCICFAP(::Foundation::AssetPath IEEPOKBMJKC, ::Foundation::AssetRequestHandle& FCEIKAIDHPM)
		{
			return ((::System::Boolean(*)(::Foundation::AssetPath, ::Foundation::AssetRequestHandle&))((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_INAPNCICFAP_OFFSET))(IEEPOKBMJKC, FCEIKAIDHPM);
		}

		static ::System::Void MFNJBPJCDLI()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_HOLLOWCHESSBOARD_CONFIGCHESSBOARDPLUGINMANAGER_MFNJBPJCDLI_OFFSET))();
		}
	};
}
