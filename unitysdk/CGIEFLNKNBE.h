#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
class HLGELEEENMC;
namespace RPG::Client { class BattleSilverWolf999BatteryUIData; }
namespace RPG::Client { class BattleSilverWolf999CustomUIData; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CGIEFLNKNBE_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xD637460)
#define CGIEFLNKNBE_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xD637530)
#define CGIEFLNKNBE_CTOR_OFFSET UNITYSDK_OFFSET(0xD6375D0)
#define CGIEFLNKNBE_GKABBJDMNEN_OFFSET UNITYSDK_OFFSET(0xD637340)
#define CGIEFLNKNBE_HMLLIEPFIPJ_OFFSET UNITYSDK_OFFSET(0xD6373A0)
#define CGIEFLNKNBE_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xD6370D0)
#define CGIEFLNKNBE_POAJNFJAFJP_OFFSET UNITYSDK_OFFSET(0xD6372F0)
#define CGIEFLNKNBE__ONBIND_OFFSET UNITYSDK_OFFSET(0xD636E30)
#define CGIEFLNKNBE__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xD637020)
#define CGIEFLNKNBE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xD637080)

inline static constexpr unsigned int CGIEFLNKNBE_TypeDefinitionIndex = 73271;

	class CGIEFLNKNBE : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::HLGELEEENMC*>* AFNMLFJFNHL; // 0x60
		::RPG::Client::BattleSilverWolf999CustomUIData* JNEALEEMIIF; // 0x68
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE__ONBIND_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CGIEFLNKNBE__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void POAJNFJAFJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_POAJNFJAFJP_OFFSET))(this);
		}

		::System::Void KANMCJHEFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_KANMCJHEFJJ_OFFSET))(this);
		}

		::RPG::Client::BattleSilverWolf999BatteryUIData* GKABBJDMNEN()
		{
			return ((::RPG::Client::BattleSilverWolf999BatteryUIData*(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_GKABBJDMNEN_OFFSET))(this);
		}

		::System::Void HMLLIEPFIPJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_HMLLIEPFIPJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CGIEFLNKNBE_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
