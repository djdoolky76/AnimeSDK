#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIPGFGBEMG;
class PHKOFFOLPPG;
namespace System { class IDisposable; }
namespace System { class Object; }

#define PHKOFFOLPPG_HFFPHANAHLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC909F0)
#define PHKOFFOLPPG_HFFPHANAHLP_CNHNAJOKJFG_OFFSET UNITYSDK_OFFSET(0x1EC8FAA0)
#define PHKOFFOLPPG_HFFPHANAHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F8C0)
#define PHKOFFOLPPG_HFFPHANAHLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1EC8FAF0)
#define PHKOFFOLPPG_HFFPHANAHLP_FGHHLCBBDDM_OFFSET UNITYSDK_OFFSET(0x1EC905C0)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1EC909D0)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_STAGESTEP_OFFSET UNITYSDK_OFFSET(0x1EC909E0)

	class PHKOFFOLPPG_HFFPHANAHLP : public ::System::Object
	{
	public:
		::DEIPGFGBEMG* _StageStep_k__BackingField; // 0x10
		::PHKOFFOLPPG* BIMEBOEJNIG; // 0x18
		::System::Object* _Owner_k__BackingField; // 0x20
		static ::System::IDisposable** StaticGet_COAHELMPGLI()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "HFFPHANAHLP")->GetStaticField(0x4E540);
		}

		::System::Void _ctor(::PHKOFFOLPPG* a1, ::System::Object* a2, ::DEIPGFGBEMG* a3)
		{
			return ((::System::Void(*)(::PVOID, ::PHKOFFOLPPG*, ::System::Object*, ::DEIPGFGBEMG*))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_CTOR_OFFSET))(this, a1, a2, a3);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_CCTOR_OFFSET))();
		}

		::System::Object* get_Owner()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_GET_OWNER_OFFSET))(this);
		}

		::DEIPGFGBEMG* get_StageStep()
		{
			return ((::DEIPGFGBEMG*(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_GET_STAGESTEP_OFFSET))(this);
		}

		::System::Boolean CNHNAJOKJFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_CNHNAJOKJFG_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_DISPOSE_OFFSET))(this);
		}

		::System::Void FGHHLCBBDDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHKOFFOLPPG_HFFPHANAHLP_FGHHLCBBDDM_OFFSET))(this);
		}

	};
