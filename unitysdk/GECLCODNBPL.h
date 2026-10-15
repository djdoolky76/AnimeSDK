#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/INLJLNCHJHB.h"
#include "unitysdk/IGKFNIEJGLM.h"
class NGMLJMLDCCG;
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }

#define GECLCODNBPL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x159BC9C0)
#define GECLCODNBPL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x159BCA90)
#define GECLCODNBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x159BCB30)
#define GECLCODNBPL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x159BC600)
#define GECLCODNBPL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x159BC670)
#define GECLCODNBPL_GIGMCLEEFLO_OFFSET UNITYSDK_OFFSET(0x159BC840)
#define GECLCODNBPL_HEJFEKGEMJA_OFFSET UNITYSDK_OFFSET(0x159BC900)
#define GECLCODNBPL_ILFBGGNLAIH_OFFSET UNITYSDK_OFFSET(0x159BC890)
#define GECLCODNBPL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x159BC6C0)
#define GECLCODNBPL__ONBIND_OFFSET UNITYSDK_OFFSET(0x159BC560)

inline static constexpr unsigned int GECLCODNBPL_TypeDefinitionIndex = 71403;

	class GECLCODNBPL : public ::FMPCODLIOLG
	{
	public:
		::NGMLJMLDCCG* NHPOJOIHCGO; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x70
		// static const ::System::String* CCEPOPDIDON; // 0x0
		// static const ::System::String* HNFBLBHDAGC; // 0x0
		// static const ::System::String* DCLMOAEAMKH; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GECLCODNBPL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void GIGMCLEEFLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_GIGMCLEEFLO_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_KANMCJHEFJJ_OFFSET))(this);
		}

		::System::String* ILFBGGNLAIH(::INLJLNCHJHB a1)
		{
			return ((::System::String*(*)(::PVOID, ::INLJLNCHJHB))((::PBYTE)hIl2Cpp + GECLCODNBPL_ILFBGGNLAIH_OFFSET))(this, a1);
		}

		::System::Void HEJFEKGEMJA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GECLCODNBPL_HEJFEKGEMJA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
