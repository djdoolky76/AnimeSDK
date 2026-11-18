#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/InlevelCameraState.h"
#include "unitysdk/MoleMole/AnimStatic_TagGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole { class CameraModelSphereData; }
namespace MoleMole { class CameraModuleAvatarDataConfigExt; }
namespace MoleMole::Cameras { class CameraAvatarPrepareData; }
namespace MoleMole::Cameras { class CameraDataAccessor; }
namespace MoleMole::Config { class PipelineCameraAvatarConfigData; }
namespace System { class String; }
namespace UnityEngine { class Camera; }

#define NABDBKKBONG_AGOLMHGGAFN_OFFSET UNITYSDK_OFFSET(0x18F88970)
#define NABDBKKBONG_AOILGBDABHO_OFFSET UNITYSDK_OFFSET(0x18F86330)
#define NABDBKKBONG_BONIJADPLEC_OFFSET UNITYSDK_OFFSET(0x18F86C50)
#define NABDBKKBONG_EGHAEBIBDCK_1_OFFSET UNITYSDK_OFFSET(0x18F86680)
#define NABDBKKBONG_EGHAEBIBDCK_OFFSET UNITYSDK_OFFSET(0x18F86FC0)
#define NABDBKKBONG_GMLCDEEJPJP_OFFSET UNITYSDK_OFFSET(0x18F87ED0)
#define NABDBKKBONG_HAIACLLDIBF_OFFSET UNITYSDK_OFFSET(0x18F88AE0)
#define NABDBKKBONG_HLGELIMOCAP_OFFSET UNITYSDK_OFFSET(0x18F88C70)
#define NABDBKKBONG_ICHCFEEDPCO_OFFSET UNITYSDK_OFFSET(0x18F888D0)
#define NABDBKKBONG_IDAJJECLAOL_OFFSET UNITYSDK_OFFSET(0x18F86EC0)
#define NABDBKKBONG_KHJAHFKHEKC_1_OFFSET UNITYSDK_OFFSET(0x18F885A0)
#define NABDBKKBONG_KHJAHFKHEKC_OFFSET UNITYSDK_OFFSET(0x18F875B0)
#define NABDBKKBONG_MALFDMLDPDN_OFFSET UNITYSDK_OFFSET(0x18F864C0)
#define NABDBKKBONG_NOOJBOLLENK_OFFSET UNITYSDK_OFFSET(0x18F879D0)
#define NABDBKKBONG_PBLGBFIGDAI_OFFSET UNITYSDK_OFFSET(0x18F884A0)
#define NABDBKKBONG_PCDOLPBLFDC_OFFSET UNITYSDK_OFFSET(0x18F88220)
#define NABDBKKBONG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F86320)

inline static constexpr unsigned int NABDBKKBONG_TypeDefinitionIndex = 74069;

class NABDBKKBONG : public ::System::Object
{
public:
	// static const ::System::String* PLIFHKIMFFP; // 0x0
	// static const ::System::String* JMIJMAHBAAA; // 0x0
	// static const ::System::String* PLPLMDKLKBA; // 0x0
	// static const ::System::String* AILDLHLPEOL; // 0x0
	// static const ::System::String* AOMHNIOFGPG; // 0x0
	// static const ::System::Single FIAEEEOPOKB; // 0x0
	// static const ::System::Single EIDFPMMCBIN; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NABDBKKBONG__CTOR_OFFSET))(this);
	}

	static ::UnityEngine::Vector3 AOILGBDABHO(::UnityEngine::Quaternion HJBGKECKIMB)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + NABDBKKBONG_AOILGBDABHO_OFFSET))(HJBGKECKIMB);
	}

	static ::System::Boolean MALFDMLDPDN(::UnityEngine::Camera* KONLMDBCDCK, ::System::Single FEKIBKHEFHF, ::System::Int32 FBNGKPGLADH, ::UnityEngine::Vector3 FCNPOKNKMOD)
	{
		return ((::System::Boolean(*)(::UnityEngine::Camera*, ::System::Single, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABDBKKBONG_MALFDMLDPDN_OFFSET))(KONLMDBCDCK, FEKIBKHEFHF, FBNGKPGLADH, FCNPOKNKMOD);
	}

	static ::System::Single BONIJADPLEC(::MoleMole::Cameras::CameraAvatarPrepareData* NHEPEEIPENO, ::MoleMole::Config::InlevelCameraState IIHGNBNLLNG)
	{
		return ((::System::Single(*)(::MoleMole::Cameras::CameraAvatarPrepareData*, ::MoleMole::Config::InlevelCameraState))((::PBYTE)hIl2Cpp + NABDBKKBONG_BONIJADPLEC_OFFSET))(NHEPEEIPENO, IIHGNBNLLNG);
	}

	static ::UnityEngine::Vector3 IDAJJECLAOL(::UnityEngine::Vector3 FAIJJKHPILN)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABDBKKBONG_IDAJJECLAOL_OFFSET))(FAIJJKHPILN);
	}

	static ::System::Boolean EGHAEBIBDCK(::System::Single KKKODHPKIMB, ::System::Single HNBMHKOHDNE, ::System::Single KHPPKNBOGIB, ::System::Single FEKIBKHEFHF, ::System::Int32 FBNGKPGLADH, ::System::Single& OMLOJDBFGPA, ::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 LPFDOBAPEEH, ::UnityEngine::Vector3 PBONHJMJFJL)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABDBKKBONG_EGHAEBIBDCK_OFFSET))(KKKODHPKIMB, HNBMHKOHDNE, KHPPKNBOGIB, FEKIBKHEFHF, FBNGKPGLADH, OMLOJDBFGPA, FCNPOKNKMOD, LPFDOBAPEEH, PBONHJMJFJL);
	}

	static ::UnityEngine::Vector3 NOOJBOLLENK(::UnityEngine::Vector3 EJCBEJMGFAJ, ::UnityEngine::Vector3 EBFCACIEKBC, ::System::Single IMLLDOHDCNC)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NABDBKKBONG_NOOJBOLLENK_OFFSET))(EJCBEJMGFAJ, EBFCACIEKBC, IMLLDOHDCNC);
	}

	static ::System::Single GMLCDEEJPJP(::UnityEngine::RaycastHit& MLKNIGOLOLE, ::UnityEngine::Vector3 HOALPKBOEAD, ::System::Single IILKJJOBMOI)
	{
		return ((::System::Single(*)(::UnityEngine::RaycastHit&, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NABDBKKBONG_GMLCDEEJPJP_OFFSET))(MLKNIGOLOLE, HOALPKBOEAD, IILKJJOBMOI);
	}

	::UnityEngine::Vector3 PCDOLPBLFDC(::System::Single OMGJJOIHJCN, ::UnityEngine::Vector3 OBCCBKKFPKP, ::UnityEngine::Vector3 BBEPANGHDCM, ::System::Single KPGBJFPIAHD, ::System::Single DNONPCFJPJN, ::System::Single LFNNPKIKGMD, ::UnityEngine::Vector3& BFHDCAFAAEB)
	{
		return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + NABDBKKBONG_PCDOLPBLFDC_OFFSET))(this, OMGJJOIHJCN, OBCCBKKFPKP, BBEPANGHDCM, KPGBJFPIAHD, DNONPCFJPJN, LFNNPKIKGMD, BFHDCAFAAEB);
	}

	static ::System::Boolean PBLGBFIGDAI(::MoleMole::Cameras::CameraDataAccessor* LJBPECKCCEA, ::MoleMole::AnimStatic_TagGroup AELLPLBJELA)
	{
		return ((::System::Boolean(*)(::MoleMole::Cameras::CameraDataAccessor*, ::MoleMole::AnimStatic_TagGroup))((::PBYTE)hIl2Cpp + NABDBKKBONG_PBLGBFIGDAI_OFFSET))(LJBPECKCCEA, AELLPLBJELA);
	}

	static ::System::Boolean KHJAHFKHEKC(::UnityEngine::Vector3 NDGBIKFNGOI, ::System::Single IILKJJOBMOI, ::System::Single PKHPPCCOKOM, ::System::Int32 FBNGKPGLADH, ::System::Single& OMLOJDBFGPA, ::Il2CppArray<::UnityEngine::Vector3>* KJKJANBNKDK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::System::Single&, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + NABDBKKBONG_KHJAHFKHEKC_OFFSET))(NDGBIKFNGOI, IILKJJOBMOI, PKHPPCCOKOM, FBNGKPGLADH, OMLOJDBFGPA, KJKJANBNKDK);
	}

	static ::System::Boolean EGHAEBIBDCK_1(::System::Single KKKODHPKIMB, ::System::Single HNBMHKOHDNE, ::System::Single KHPPKNBOGIB, ::System::Single FEKIBKHEFHF, ::System::Int32 FBNGKPGLADH, ::UnityEngine::Vector3 FCNPOKNKMOD, ::UnityEngine::Vector3 LPFDOBAPEEH, ::UnityEngine::Vector3 PBONHJMJFJL)
	{
		return ((::System::Boolean(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABDBKKBONG_EGHAEBIBDCK_1_OFFSET))(KKKODHPKIMB, HNBMHKOHDNE, KHPPKNBOGIB, FEKIBKHEFHF, FBNGKPGLADH, FCNPOKNKMOD, LPFDOBAPEEH, PBONHJMJFJL);
	}

	static ::UnityEngine::Vector2 ICHCFEEDPCO(::System::Single KKKODHPKIMB, ::System::Single HNBMHKOHDNE, ::System::Single KHPPKNBOGIB)
	{
		return ((::UnityEngine::Vector2(*)(::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NABDBKKBONG_ICHCFEEDPCO_OFFSET))(KKKODHPKIMB, HNBMHKOHDNE, KHPPKNBOGIB);
	}

	static ::MoleMole::CameraModelSphereData* AGOLMHGGAFN(::MoleMole::Config::PipelineCameraAvatarConfigData* AMCLPKFNHKH, ::MoleMole::CameraModuleAvatarDataConfigExt* DFMKILICPFB, ::System::String* PMDEIFDLKLE)
	{
		return ((::MoleMole::CameraModelSphereData*(*)(::MoleMole::Config::PipelineCameraAvatarConfigData*, ::MoleMole::CameraModuleAvatarDataConfigExt*, ::System::String*))((::PBYTE)hIl2Cpp + NABDBKKBONG_AGOLMHGGAFN_OFFSET))(AMCLPKFNHKH, DFMKILICPFB, PMDEIFDLKLE);
	}

	::System::Single HAIACLLDIBF(::System::Single OMGJJOIHJCN, ::System::Single OBCCBKKFPKP, ::System::Single BBEPANGHDCM, ::System::Single KPGBJFPIAHD, ::System::Single DNONPCFJPJN, ::System::Single LFNNPKIKGMD, ::System::Single& BFHDCAFAAEB)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single&))((::PBYTE)hIl2Cpp + NABDBKKBONG_HAIACLLDIBF_OFFSET))(this, OMGJJOIHJCN, OBCCBKKFPKP, BBEPANGHDCM, KPGBJFPIAHD, DNONPCFJPJN, LFNNPKIKGMD, BFHDCAFAAEB);
	}

	static ::System::Boolean KHJAHFKHEKC_1(::UnityEngine::Vector3 NDGBIKFNGOI, ::System::Single IILKJJOBMOI, ::System::Single PKHPPCCOKOM, ::System::Int32 FBNGKPGLADH, ::Il2CppArray<::UnityEngine::Vector3>* KJKJANBNKDK)
	{
		return ((::System::Boolean(*)(::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + NABDBKKBONG_KHJAHFKHEKC_1_OFFSET))(NDGBIKFNGOI, IILKJJOBMOI, PKHPPCCOKOM, FBNGKPGLADH, KJKJANBNKDK);
	}

	static ::UnityEngine::Vector3 HLGELIMOCAP(::UnityEngine::Vector3 CECIIGKOEDP)
	{
		return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NABDBKKBONG_HLGELIMOCAP_OFFSET))(CECIIGKOEDP);
	}
};
