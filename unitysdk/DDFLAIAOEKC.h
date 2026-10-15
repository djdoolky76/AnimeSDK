#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LOCGLAAGEFC;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define DDFLAIAOEKC_CLEAR_OFFSET UNITYSDK_OFFSET(0x1CA1BB70)
#define DDFLAIAOEKC_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA1BC00)

	class DDFLAIAOEKC : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::LOCGLAAGEFC*>* ICCHEFLCDJB; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFLAIAOEKC_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DDFLAIAOEKC_CLEAR_OFFSET))(this);
		}

	};
