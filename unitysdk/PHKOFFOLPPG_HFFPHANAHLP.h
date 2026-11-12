#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIPGFGBEMG;
class PHKOFFOLPPG;
namespace System { class IDisposable; }
namespace System { class Object; }

#define PHKOFFOLPPG_HFFPHANAHLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF412F0)
#define PHKOFFOLPPG_HFFPHANAHLP_CNHNAJOKJFG_OFFSET UNITYSDK_OFFSET(0x1FF403A0)
#define PHKOFFOLPPG_HFFPHANAHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF401A0)
#define PHKOFFOLPPG_HFFPHANAHLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1FF403F0)
#define PHKOFFOLPPG_HFFPHANAHLP_FGHHLCBBDDM_OFFSET UNITYSDK_OFFSET(0x1FF40EC0)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1FF412D0)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_STAGESTEP_OFFSET UNITYSDK_OFFSET(0x1FF412E0)

inline static constexpr unsigned int PHKOFFOLPPG_HFFPHANAHLP_TypeDefinitionIndex = 45244;

	class PHKOFFOLPPG_HFFPHANAHLP : public ::System::Object
	{
	public:
		::PHKOFFOLPPG* BIMEBOEJNIG; // 0x10
		::System::Object* _Owner_k__BackingField; // 0x18
		::DEIPGFGBEMG* _StageStep_k__BackingField; // 0x20
		static ::System::IDisposable** StaticGet_COAHELMPGLI()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "HFFPHANAHLP")->GetStaticField(0x65B50);
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
