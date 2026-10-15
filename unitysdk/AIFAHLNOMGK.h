#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/IGKFNIEJGLM.h"
class KOAOAKKCCPK;
namespace RPG::Client { class AnimatorButton; }
namespace System { class Object; }

#define AIFAHLNOMGK_CAGIAMEFOLL_OFFSET UNITYSDK_OFFSET(0xEBA2BC0)
#define AIFAHLNOMGK_CTOR_OFFSET UNITYSDK_OFFSET(0xEBA2FF0)
#define AIFAHLNOMGK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xEBA2890)
#define AIFAHLNOMGK_DLDAKAPAIJN_OFFSET UNITYSDK_OFFSET(0xEBA2F90)
#define AIFAHLNOMGK_EKBJKHIACDF_1_OFFSET UNITYSDK_OFFSET(0xEBA2DC0)
#define AIFAHLNOMGK_EKBJKHIACDF_OFFSET UNITYSDK_OFFSET(0xEBA2F40)
#define AIFAHLNOMGK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xEBA2900)
#define AIFAHLNOMGK_EPLKAONLPII_OFFSET UNITYSDK_OFFSET(0xEBA2B70)
#define AIFAHLNOMGK_FHHHIJMOBJI_OFFSET UNITYSDK_OFFSET(0xEBA2E70)
#define AIFAHLNOMGK_IAPBKBBFCMI_OFFSET UNITYSDK_OFFSET(0xEBA2D70)
#define AIFAHLNOMGK_MLNNGMPCPNC_OFFSET UNITYSDK_OFFSET(0xEBA2CF0)
#define AIFAHLNOMGK__ONBIND_OFFSET UNITYSDK_OFFSET(0xEBA27F0)

inline static constexpr unsigned int AIFAHLNOMGK_TypeDefinitionIndex = 72180;

	class AIFAHLNOMGK : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::AnimatorButton* KJIOINOOIHP; // 0x60
		::RPG::Client::AnimatorButton* GOBPLEIABEB; // 0x68
		::RPG::Client::AnimatorButton* FMBCOIPFCEA; // 0x70
		::KOAOAKKCCPK* CDMFHPLLFEC; // 0x78
		::System::Boolean LCHGPKDKBBK; // 0x80
		// static const ::System::Object DCBFHJIDIHK; // 0x0
		// static const ::System::String* PPKMJCFGHOH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAGIAMEFOLL(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_CAGIAMEFOLL_OFFSET))(this, a1);
		}

		::System::Void MLNNGMPCPNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_MLNNGMPCPNC_OFFSET))(this);
		}

		::System::Void IAPBKBBFCMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_IAPBKBBFCMI_OFFSET))(this);
		}

		::System::Void FHHHIJMOBJI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_FHHHIJMOBJI_OFFSET))(this);
		}

		::System::Void EKBJKHIACDF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_EKBJKHIACDF_OFFSET))(this, a1);
		}

		::System::Void EKBJKHIACDF_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_EKBJKHIACDF_1_OFFSET))(this);
		}

		::System::Void DLDAKAPAIJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_DLDAKAPAIJN_OFFSET))(this);
		}

		::System::Void EPLKAONLPII(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AIFAHLNOMGK_EPLKAONLPII_OFFSET))(this, a1);
		}

	};
