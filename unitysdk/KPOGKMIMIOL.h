#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AAMJLJDBACD.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class GameEntityList; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KPOGKMIMIOL_AALCFBOGFKP_OFFSET UNITYSDK_OFFSET(0xB5D0AA0)
#define KPOGKMIMIOL_COJGKIIKIAI_OFFSET UNITYSDK_OFFSET(0xB5D0870)
#define KPOGKMIMIOL_CTOR_OFFSET UNITYSDK_OFFSET(0xB5D0B30)
#define KPOGKMIMIOL_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB5D0790)
#define KPOGKMIMIOL_OHCJOIANPFG_OFFSET UNITYSDK_OFFSET(0xB5D03C0)

inline static constexpr unsigned int KPOGKMIMIOL_TypeDefinitionIndex = 54229;

	class KPOGKMIMIOL : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::AAMJLJDBACD>*>* HPKCEIDAPBN; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KPOGKMIMIOL_CTOR_OFFSET))(this);
		}

		::System::Void OHCJOIANPFG(::System::String* a1, ::RPG::GameCore::GameEntityList* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::RPG::GameCore::GameEntityList*))((::PBYTE)hIl2Cpp + KPOGKMIMIOL_OHCJOIANPFG_OFFSET))(this, a1, a2);
		}

		::System::Boolean HKEPJLDBGIG(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPOGKMIMIOL_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void AALCFBOGFKP(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KPOGKMIMIOL_AALCFBOGFKP_OFFSET))(this, a1);
		}

		static ::System::Void COJGKIIKIAI(::System::Collections::Generic::List_1<::AAMJLJDBACD>* a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::AAMJLJDBACD>*))((::PBYTE)hIl2Cpp + KPOGKMIMIOL_COJGKIIKIAI_OFFSET))(a1);
		}

	};
