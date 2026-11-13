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

#define GECLCODNBPL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x17CC9DC0)
#define GECLCODNBPL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x17CC9E90)
#define GECLCODNBPL_CTOR_OFFSET UNITYSDK_OFFSET(0x17CC9F30)
#define GECLCODNBPL_GIGMCLEEFLO_OFFSET UNITYSDK_OFFSET(0x17CC9C40)
#define GECLCODNBPL_HEJFEKGEMJA_OFFSET UNITYSDK_OFFSET(0x17CC9D00)
#define GECLCODNBPL_ILFBGGNLAIH_OFFSET UNITYSDK_OFFSET(0x17CC9C90)
#define GECLCODNBPL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0x17CC9AC0)
#define GECLCODNBPL__ONBIND_OFFSET UNITYSDK_OFFSET(0x17CC9910)
#define GECLCODNBPL__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x17CC99F0)
#define GECLCODNBPL__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x17CC9A70)

inline static constexpr unsigned int GECLCODNBPL_TypeDefinitionIndex = 73385;

	class GECLCODNBPL : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::RPG::Client::UIStateCtrl* GIMAEGBDOBL; // 0x68
		::NGMLJMLDCCG* NHPOJOIHCGO; // 0x70
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + GECLCODNBPL__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GECLCODNBPL__SETUPVIEW_OFFSET))(this);
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
