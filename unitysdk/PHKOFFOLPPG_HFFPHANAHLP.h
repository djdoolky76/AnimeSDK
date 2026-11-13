#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DEIPGFGBEMG;
class PHKOFFOLPPG;
namespace System { class IDisposable; }
namespace System { class Object; }

#define PHKOFFOLPPG_HFFPHANAHLP_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E54CE90)
#define PHKOFFOLPPG_HFFPHANAHLP_CNHNAJOKJFG_OFFSET UNITYSDK_OFFSET(0x1E54BF40)
#define PHKOFFOLPPG_HFFPHANAHLP_CTOR_OFFSET UNITYSDK_OFFSET(0x1E54BD40)
#define PHKOFFOLPPG_HFFPHANAHLP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1E54BF90)
#define PHKOFFOLPPG_HFFPHANAHLP_FGHHLCBBDDM_OFFSET UNITYSDK_OFFSET(0x1E54CA60)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_OWNER_OFFSET UNITYSDK_OFFSET(0x1E54CE70)
#define PHKOFFOLPPG_HFFPHANAHLP_GET_STAGESTEP_OFFSET UNITYSDK_OFFSET(0x1E54CE80)

inline static constexpr unsigned int PHKOFFOLPPG_HFFPHANAHLP_TypeDefinitionIndex = 45244;

	class PHKOFFOLPPG_HFFPHANAHLP : public ::System::Object
	{
	public:
		::System::Object* _Owner_k__BackingField; // 0x10
		::DEIPGFGBEMG* _StageStep_k__BackingField; // 0x18
		::PHKOFFOLPPG* BIMEBOEJNIG; // 0x20
		static ::System::IDisposable** StaticGet_COAHELMPGLI()
		{
			return (::System::IDisposable**)UnitySDK::FromName("", "HFFPHANAHLP")->GetStaticField(0x61F60);
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
