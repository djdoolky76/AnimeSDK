#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/MonoEffectPluginCharaReplaceMatBase.h"
namespace RPG::Client { class CommonEffectMaterialBlockOne; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_CBKPMHCOCMH_OFFSET UNITYSDK_OFFSET(0xD7FB2B0)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_CTOR_OFFSET UNITYSDK_OFFSET(0xD7FB340)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_IFOEAAAKONL_OFFSET UNITYSDK_OFFSET(0xD7FB020)
#define RPG_CLIENT_MONOEFFECTPLUGINDITHER_IJICJDNHKHN_OFFSET UNITYSDK_OFFSET(0xD7FAC70)

namespace RPG::Client
{
	class MonoEffectPluginDither : public ::RPG::Client::MonoEffectPluginCharaReplaceMatBase
	{
	public:
		::System::Boolean EnableDither; // 0x170
		::System::Byte _padding0[0x3];
		::System::Single DitherAlpha; // 0x174
		::System::Boolean DitherFadeIn; // 0x178
		::System::Byte _padding1[0x7];
		::System::Collections::Generic::List_1<::RPG::Client::CommonEffectMaterialBlockOne*>* DEOKAPMPABA; // 0x180
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_CTOR_OFFSET))(this);
		}

		::System::Void IJICJDNHKHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_IJICJDNHKHN_OFFSET))(this);
		}

		::System::Void IFOEAAAKONL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_IFOEAAAKONL_OFFSET))(this);
		}

		::System::Void CBKPMHCOCMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_MONOEFFECTPLUGINDITHER_CBKPMHCOCMH_OFFSET))(this);
		}

	};
}
