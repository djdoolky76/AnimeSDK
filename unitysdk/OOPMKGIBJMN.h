#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OEEKHELGHKF.h"
#include "unitysdk/OPDCFALBEEP.h"
#include "unitysdk/System/Object.h"
class DELPKNBPNLN;
namespace RPG { template <typename T1, typename T2> class PoolDictionary_2; }
namespace System { class String; }

#define OOPMKGIBJMN_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C9A0B60)
#define OOPMKGIBJMN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9A0BE0)

inline static constexpr unsigned int OOPMKGIBJMN_TypeDefinitionIndex = 43656;

	class OOPMKGIBJMN : public ::System::Object
	{
	public:
		::RPG::PoolDictionary_2<::System::String*, ::OEEKHELGHKF>* FOIACAGEHCD; // 0x10
		::DELPKNBPNLN* JAEPOBKJKOJ; // 0x18
		::OPDCFALBEEP BPAPBAFOMCH; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPMKGIBJMN_CTOR_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOPMKGIBJMN_CLEAR_OFFSET))(this);
		}

	};
