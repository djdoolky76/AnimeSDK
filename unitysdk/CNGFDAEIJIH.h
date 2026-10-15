#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MEFBCOKEFIN;
namespace RPG::GameCore { class SetAudienceGroupVisible; }
namespace RPG::GameCore { class TaskContext; }

#define CNGFDAEIJIH_CTOR_OFFSET UNITYSDK_OFFSET(0xDA4F240)
#define CNGFDAEIJIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0xDA4F5A0)
#define CNGFDAEIJIH_HPOCMHBDCBD_OFFSET UNITYSDK_OFFSET(0xDA4F250)
#define CNGFDAEIJIH_MAICDFHIDAL_OFFSET UNITYSDK_OFFSET(0xDA4F3D0)
#define CNGFDAEIJIH_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xDA4F740)
#define CNGFDAEIJIH_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xDA4F550)
#define CNGFDAEIJIH_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xDA4F410)
#define CNGFDAEIJIH_TICK_OFFSET UNITYSDK_OFFSET(0xDA4F5F0)

	class CNGFDAEIJIH : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::SetAudienceGroupVisible* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::SetAudienceGroupVisible* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::SetAudienceGroupVisible*))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_CTOR_OFFSET))(this, a1, a2);
		}

		::MEFBCOKEFIN* HPOCMHBDCBD()
		{
			return ((::MEFBCOKEFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_HPOCMHBDCBD_OFFSET))(this);
		}

		::System::Boolean MAICDFHIDAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_MAICDFHIDAL_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNGFDAEIJIH_ONTASKBEGIN_OFFSET))(this);
		}

	};
