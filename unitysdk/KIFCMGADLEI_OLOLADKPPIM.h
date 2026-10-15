#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class JsonConfig; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define KIFCMGADLEI_OLOLADKPPIM_BFLENEMBIBM_OFFSET UNITYSDK_OFFSET(0xB41DD00)
#define KIFCMGADLEI_OLOLADKPPIM_CTOR_OFFSET UNITYSDK_OFFSET(0xB41E180)
#define KIFCMGADLEI_OLOLADKPPIM_HKEPJLDBGIG_OFFSET UNITYSDK_OFFSET(0xB41DAF0)

	class KIFCMGADLEI_OLOLADKPPIM : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::JsonConfig*>* HPGAKAOBMCO; // 0x10
		::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>* KADJIDHNIEM; // 0x18
		::System::Void _ctor(::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::String*, ::RPG::GameCore::JsonConfig*>*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_OLOLADKPPIM_CTOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::JsonConfig* HKEPJLDBGIG(::System::String* a1)
		{
			return ((::RPG::GameCore::JsonConfig*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_OLOLADKPPIM_HKEPJLDBGIG_OFFSET))(this, a1);
		}

		::System::Void BFLENEMBIBM(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + KIFCMGADLEI_OLOLADKPPIM_BFLENEMBIBM_OFFSET))(this, a1);
		}

	};
