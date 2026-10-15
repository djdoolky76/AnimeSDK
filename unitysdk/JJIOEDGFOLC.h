#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class MEFBCOKEFIN;
namespace RPG::GameCore { class ModifyAudienceGroupAnimType; }
namespace RPG::GameCore { class TaskContext; }

#define JJIOEDGFOLC_CTOR_OFFSET UNITYSDK_OFFSET(0xB2009E0)
#define JJIOEDGFOLC_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB200D40)
#define JJIOEDGFOLC_HPOCMHBDCBD_OFFSET UNITYSDK_OFFSET(0xB2009F0)
#define JJIOEDGFOLC_MAICDFHIDAL_OFFSET UNITYSDK_OFFSET(0xB200B70)
#define JJIOEDGFOLC_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB200EE0)
#define JJIOEDGFOLC_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB200CF0)
#define JJIOEDGFOLC_PKADDEPKJFN_OFFSET UNITYSDK_OFFSET(0xB200BB0)
#define JJIOEDGFOLC_TICK_OFFSET UNITYSDK_OFFSET(0xB200D90)

inline static constexpr unsigned int JJIOEDGFOLC_TypeDefinitionIndex = 58213;

	class JJIOEDGFOLC : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::ModifyAudienceGroupAnimType* OFKGLJOAMLD; // 0x18
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ModifyAudienceGroupAnimType* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ModifyAudienceGroupAnimType*))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_CTOR_OFFSET))(this, a1, a2);
		}

		::MEFBCOKEFIN* HPOCMHBDCBD()
		{
			return ((::MEFBCOKEFIN*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_HPOCMHBDCBD_OFFSET))(this);
		}

		::System::Boolean MAICDFHIDAL()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_MAICDFHIDAL_OFFSET))(this);
		}

		::System::Void PKADDEPKJFN(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_PKADDEPKJFN_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_DISPOSE_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJIOEDGFOLC_ONTASKBEGIN_OFFSET))(this);
		}

	};
