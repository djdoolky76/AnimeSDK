#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/UIController.h"
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define GKJLNAFFAKO_ADMKEMKCDFD_OFFSET UNITYSDK_OFFSET(0x15A9DAB0)
#define GKJLNAFFAKO_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15A9DD90)
#define GKJLNAFFAKO_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15A9DEB0)
#define GKJLNAFFAKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A9D560)
#define GKJLNAFFAKO_EAHGPDEJIIP_OFFSET UNITYSDK_OFFSET(0x15A9D8F0)
#define GKJLNAFFAKO_IDMNDBNJKEM_OFFSET UNITYSDK_OFFSET(0x15A9DA60)
#define GKJLNAFFAKO_OJJDNLFFLBK_OFFSET UNITYSDK_OFFSET(0x15A9DBD0)
#define GKJLNAFFAKO_OPDHLJFDPIK_OFFSET UNITYSDK_OFFSET(0x15A9DC90)
#define GKJLNAFFAKO_VIEWPREFABPATH_OFFSET UNITYSDK_OFFSET(0x15A9D5A0)
#define GKJLNAFFAKO__CUSTOMBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15A9D5F0)
#define GKJLNAFFAKO__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x15A9D8A0)
#define GKJLNAFFAKO__UNBINDVIEW_OFFSET UNITYSDK_OFFSET(0x15A9D860)

	class GKJLNAFFAKO : public ::RPG::Client::UIController
	{
	public:
		::UnityEngine::UI::Image* EDDPHDAKMMM; // 0x190
		::UnityEngine::Transform* BFNDFBEECCP; // 0x198
		::RPG::GameCore::LevelUIComponent* GEAHNEAGEBG; // 0x1A0
		// static const ::System::Object GGMKIKCMPFO; // 0x0
		// static const ::System::Object PEDBFDGDIKE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_CTOR_OFFSET))(this);
		}

		::System::String* ViewPrefabPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_VIEWPREFABPATH_OFFSET))(this);
		}

		::System::Void _CustomBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO__CUSTOMBINDVIEW_OFFSET))(this);
		}

		::System::Void _UnBindView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO__UNBINDVIEW_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO__SETUPVIEW_OFFSET))(this);
		}

		::System::Void IDMNDBNJKEM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_IDMNDBNJKEM_OFFSET))(this);
		}

		::System::Void ADMKEMKCDFD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_ADMKEMKCDFD_OFFSET))(this, a1);
		}

		::System::Void EAHGPDEJIIP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_EAHGPDEJIIP_OFFSET))(this);
		}

		::System::Void OJJDNLFFLBK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_OJJDNLFFLBK_OFFSET))(this, a1);
		}

		::System::Void OPDHLJFDPIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_OPDHLJFDPIK_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKJLNAFFAKO_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
