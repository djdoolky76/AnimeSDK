#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDJOLKOIDJJ;
namespace RPG::Client { template <typename T1, typename T2, typename T3> class RogueInstanceCacheManager_3; }

#define BDJOLKOIDJJ_CCTOR_OFFSET UNITYSDK_OFFSET(0x162F0B00)
#define BDJOLKOIDJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x162F0890)
#define BDJOLKOIDJJ_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0x162F09B0)
#define BDJOLKOIDJJ_GET_PRESETID_OFFSET UNITYSDK_OFFSET(0x162F0870)
#define BDJOLKOIDJJ_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0x162F08A0)
#define BDJOLKOIDJJ_OPJGEGLNBLH_OFFSET UNITYSDK_OFFSET(0x162F0940)
#define BDJOLKOIDJJ_SET_PRESETID_OFFSET UNITYSDK_OFFSET(0x162F0880)

inline static constexpr unsigned int BDJOLKOIDJJ_TypeDefinitionIndex = 67723;

	class BDJOLKOIDJJ : public ::System::Object
	{
	public:
		::System::UInt32 _PresetID_k__BackingField; // 0x10
		static ::RPG::Client::RogueInstanceCacheManager_3<::System::UInt32, ::System::UInt32, ::BDJOLKOIDJJ*>** StaticGet_CCAEPODBHDM()
		{
			return (::RPG::Client::RogueInstanceCacheManager_3<::System::UInt32, ::System::UInt32, ::BDJOLKOIDJJ*>**)UnitySDK::FromName("", "BDJOLKOIDJJ")->GetStaticField(0x68E60);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_CCTOR_OFFSET))();
		}

		::System::UInt32 get_PresetID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_GET_PRESETID_OFFSET))(this);
		}

		::System::Void set_PresetID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_SET_PRESETID_OFFSET))(this, a1);
		}

		static ::BDJOLKOIDJJ* LMBKNCAIDLC(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::BDJOLKOIDJJ*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_LMBKNCAIDLC_OFFSET))(a1, a2);
		}

		static ::BDJOLKOIDJJ* OPJGEGLNBLH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::BDJOLKOIDJJ*(*)(::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_OPJGEGLNBLH_OFFSET))(a1, a2);
		}

		::System::Void DIOEAJEHHND(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BDJOLKOIDJJ_DIOEAJEHHND_OFFSET))(this, a1, a2);
		}

	};
