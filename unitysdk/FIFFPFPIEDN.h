#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TimelineType.h"
#include "unitysdk/System/Object.h"
class HIIFJAIAHJN;
class KLKMCNOECAL;
namespace RPG::Client { class CutsceneCacheInitParams; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class Transform; }

#define FIFFPFPIEDN_ALGNPCKIMGJ_OFFSET UNITYSDK_OFFSET(0x157A5260)
#define FIFFPFPIEDN_BIGBNEGFJKJ_OFFSET UNITYSDK_OFFSET(0x157A5360)
#define FIFFPFPIEDN_CTOR_OFFSET UNITYSDK_OFFSET(0x157A4EA0)
#define FIFFPFPIEDN_DISPOSE_OFFSET UNITYSDK_OFFSET(0x157A5000)
#define FIFFPFPIEDN_EKMOIJILMOJ_OFFSET UNITYSDK_OFFSET(0x157A4FB0)
#define FIFFPFPIEDN_JGCCMICAGNF_OFFSET UNITYSDK_OFFSET(0x157A5050)
#define FIFFPFPIEDN_KNGEOFEKNNM_OFFSET UNITYSDK_OFFSET(0x157A5310)
#define FIFFPFPIEDN_LHBJCHNCKIA_OFFSET UNITYSDK_OFFSET(0x157A4EB0)
#define FIFFPFPIEDN_LPELJOBODDF_OFFSET UNITYSDK_OFFSET(0x157A5440)
#define FIFFPFPIEDN_MADEODJIOAH_OFFSET UNITYSDK_OFFSET(0x157A4F40)
#define FIFFPFPIEDN_MHJCIKKCMOL_OFFSET UNITYSDK_OFFSET(0x157A56E0)

	class FIFFPFPIEDN : public ::System::Object
	{
	public:
		::System::String* MDHKIELHDHF; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::HIIFJAIAHJN*>* JPLJDJNNIKP; // 0x18
		::UnityEngine::Transform* BKNEMOMOHNC; // 0x20
		::RPG::GameCore::TimelineType BAMCGLNJOAK; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_CTOR_OFFSET))(this);
		}

		::KLKMCNOECAL* LHBJCHNCKIA(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_LHBJCHNCKIA_OFFSET))(this, a1);
		}

		::System::Void EKMOIJILMOJ(::RPG::GameCore::TimelineType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TimelineType))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_EKMOIJILMOJ_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_DISPOSE_OFFSET))(this);
		}

		::UnityEngine::Transform* ALGNPCKIMGJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_ALGNPCKIMGJ_OFFSET))(this);
		}

		::System::Void KNGEOFEKNNM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_KNGEOFEKNNM_OFFSET))(this, a1);
		}

		::HIIFJAIAHJN* BIGBNEGFJKJ()
		{
			return ((::HIIFJAIAHJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_BIGBNEGFJKJ_OFFSET))(this);
		}

		::HIIFJAIAHJN* LPELJOBODDF(::RPG::Client::CutsceneCacheInitParams* a1)
		{
			return ((::HIIFJAIAHJN*(*)(::PVOID, ::RPG::Client::CutsceneCacheInitParams*))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_LPELJOBODDF_OFFSET))(this, a1);
		}

		::System::Void MHJCIKKCMOL(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_MHJCIKKCMOL_OFFSET))(this, a1);
		}

		::KLKMCNOECAL* MADEODJIOAH(::System::String* a1)
		{
			return ((::KLKMCNOECAL*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_MADEODJIOAH_OFFSET))(this, a1);
		}

		::System::Void JGCCMICAGNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FIFFPFPIEDN_JGCCMICAGNF_OFFSET))(this);
		}

	};
