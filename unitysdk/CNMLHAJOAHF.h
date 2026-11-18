#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class AvatarLayoutCameraConfig; }
namespace MoleMole::Config { class ConfigAvatarLayoutCameraMisc; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CNMLHAJOAHF_CPDFCDONECK_OFFSET UNITYSDK_OFFSET(0x19A199B0)
#define CNMLHAJOAHF_DGMLFELCAIO_OFFSET UNITYSDK_OFFSET(0x19A1A390)
#define CNMLHAJOAHF_FKKADJJMKCL_OFFSET UNITYSDK_OFFSET(0x19A1A180)
#define CNMLHAJOAHF_JPBNOOMAKNG_OFFSET UNITYSDK_OFFSET(0x19A1A4A0)
#define CNMLHAJOAHF_KPLNGONNIBI_OFFSET UNITYSDK_OFFSET(0x19A19AD0)
#define CNMLHAJOAHF_PFNKIBFKFEK_OFFSET UNITYSDK_OFFSET(0x19A197B0)
#define CNMLHAJOAHF__CCTOR_OFFSET UNITYSDK_OFFSET(0x19A19710)

inline static constexpr unsigned int CNMLHAJOAHF_TypeDefinitionIndex = 82227;

class CNMLHAJOAHF : public ::System::Object
{
public:
	static ::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AvatarLayoutCameraConfig*>** StaticGet_FIEBFFOKIIF()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Cameras::AvatarLayoutCameraConfig*>**)Il2CppClass::FromTypeDefinitionIndex(CNMLHAJOAHF_TypeDefinitionIndex)->GetStaticField(0x37170);
	}
	static ::MoleMole::Config::ConfigAvatarLayoutCameraMisc** StaticGet_HBPBHBPLMMC()
	{
		return (::MoleMole::Config::ConfigAvatarLayoutCameraMisc**)Il2CppClass::FromTypeDefinitionIndex(CNMLHAJOAHF_TypeDefinitionIndex)->GetStaticField(0x37178);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CNMLHAJOAHF__CCTOR_OFFSET))();
	}

	static ::MoleMole::Config::ConfigAvatarLayoutCameraMisc* PFNKIBFKFEK()
	{
		return ((::MoleMole::Config::ConfigAvatarLayoutCameraMisc*(*)())((::PBYTE)hIl2Cpp + CNMLHAJOAHF_PFNKIBFKFEK_OFFSET))();
	}

	static ::System::Void CPDFCDONECK(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_CPDFCDONECK_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void FKKADJJMKCL(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_FKKADJJMKCL_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void KPLNGONNIBI(::System::Boolean EBAJLMBGMFE, ::System::Action* IBNICCGMILF)
	{
		return ((::System::Void(*)(::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_KPLNGONNIBI_OFFSET))(EBAJLMBGMFE, IBNICCGMILF);
	}

	static ::System::Void DGMLFELCAIO(::System::Single HBFKHANEEND, ::System::Action_1<::System::Single>* JOLIEKHCGDJ, ::System::Action_1<::System::String*>* MGAKJHJAGJI, ::System::String* GDGGMIJHAJJ)
	{
		return ((::System::Void(*)(::System::Single, ::System::Action_1<::System::Single>*, ::System::Action_1<::System::String*>*, ::System::String*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_DGMLFELCAIO_OFFSET))(HBFKHANEEND, JOLIEKHCGDJ, MGAKJHJAGJI, GDGGMIJHAJJ);
	}

	static ::MoleMole::Cameras::AvatarLayoutCameraConfig* JPBNOOMAKNG(::System::String* MCOHLHMKLIP)
	{
		return ((::MoleMole::Cameras::AvatarLayoutCameraConfig*(*)(::System::String*))((::PBYTE)hIl2Cpp + CNMLHAJOAHF_JPBNOOMAKNG_OFFSET))(MCOHLHMKLIP);
	}
};
