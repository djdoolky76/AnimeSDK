#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/Quality.h"
#include "unitysdk/System/Object.h"
class HBFIBDGJLHE;
namespace Collections::Pooled { template <typename T> class PooledSet_1; }
namespace RPG::Client::CityCarFlow { class MonoCityCarConfigure; }
namespace System::Collections::Concurrent { template <typename T1, typename T2> class ConcurrentDictionary_2; }

#define KGGNDGKIHLD_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xB3EC3B0)
#define KGGNDGKIHLD_CTOR_OFFSET UNITYSDK_OFFSET(0xB3EC4A0)
#define KGGNDGKIHLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB3EB850)
#define KGGNDGKIHLD_EHFLDBMLBPM_OFFSET UNITYSDK_OFFSET(0xB3EBC90)
#define KGGNDGKIHLD_HKKFFCBJOKM_OFFSET UNITYSDK_OFFSET(0xB3EC2F0)
#define KGGNDGKIHLD_JMIBHMICFOG_OFFSET UNITYSDK_OFFSET(0xB3EB700)
#define KGGNDGKIHLD_KHNCMBEFIKI_OFFSET UNITYSDK_OFFSET(0xB3EC0B0)
#define KGGNDGKIHLD_OAFKAFLEMFK_OFFSET UNITYSDK_OFFSET(0xB3EB5F0)

	class KGGNDGKIHLD : public ::System::Object
	{
	public:
		::System::Collections::Concurrent::ConcurrentDictionary_2<::System::UInt32, ::HBFIBDGJLHE*>* PHPHJBFOCEL; // 0x10
		::Collections::Pooled::PooledSet_1<::System::UInt32>* OPMMMHCANFL; // 0x18
		::RPG::CustomRP::Quality KCOOKDJPHLF; // 0x20
		::System::UInt32 GGHPONDNCDC; // 0x24
		::System::Single PJJLEJDPNHI; // 0x28
		// static const ::System::Object PMIDCJIDKKD; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_CTOR_OFFSET))(this);
		}

		::System::UInt32 OAFKAFLEMFK(::RPG::Client::CityCarFlow::MonoCityCarConfigure* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::Client::CityCarFlow::MonoCityCarConfigure*))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_OAFKAFLEMFK_OFFSET))(this, a1);
		}

		::System::Boolean JMIBHMICFOG(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_JMIBHMICFOG_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_DISPOSE_OFFSET))(this);
		}

		::System::Void EHFLDBMLBPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_EHFLDBMLBPM_OFFSET))(this);
		}

		::System::Void KHNCMBEFIKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_KHNCMBEFIKI_OFFSET))(this);
		}

		::System::Void HKKFFCBJOKM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_HKKFFCBJOKM_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + KGGNDGKIHLD_BLILDBCEGFH_OFFSET))(this, a1, a2);
		}

	};
