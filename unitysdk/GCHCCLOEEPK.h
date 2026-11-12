#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/PlayVideoQTEStageState.h"
#include "unitysdk/RPG/Client/PlayVideoQTEVideoPrepareState.h"
#include "unitysdk/System/Object.h"
class AGOAPPMIPPG;
namespace RPG::Client { class ICoroutineGroupController; }

#define GCHCCLOEEPK_CIFKAFHMJPO_OFFSET UNITYSDK_OFFSET(0x168A1B20)
#define GCHCCLOEEPK_CTOR_OFFSET UNITYSDK_OFFSET(0x168A14B0)
#define GCHCCLOEEPK_EECNDHCCPGM_OFFSET UNITYSDK_OFFSET(0x168A1C70)
#define GCHCCLOEEPK_HACGMIEKJPP_OFFSET UNITYSDK_OFFSET(0x168A1DE0)
#define GCHCCLOEEPK_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0x168A1CC0)
#define GCHCCLOEEPK_HOFOKPEMNLF_OFFSET UNITYSDK_OFFSET(0x168A1D10)
#define GCHCCLOEEPK_IHOCDAAMDOA_OFFSET UNITYSDK_OFFSET(0x168A1520)
#define GCHCCLOEEPK_IMKMHOFCOEM_OFFSET UNITYSDK_OFFSET(0x168A1AB0)
#define GCHCCLOEEPK_JIGJDOFEJMI_OFFSET UNITYSDK_OFFSET(0x168A14C0)
#define GCHCCLOEEPK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x168A19B0)
#define GCHCCLOEEPK_KAEPEIHMDKE_OFFSET UNITYSDK_OFFSET(0x168A18B0)
#define GCHCCLOEEPK_KIGBILLGNOH_OFFSET UNITYSDK_OFFSET(0x168A16D0)
#define GCHCCLOEEPK_MLLEIICACNF_OFFSET UNITYSDK_OFFSET(0x168A1E70)

inline static constexpr unsigned int GCHCCLOEEPK_TypeDefinitionIndex = 74938;

	class GCHCCLOEEPK : public ::System::Object
	{
	public:
		::RPG::Client::ICoroutineGroupController* LNICGJKDPIN; // 0x10
		::AGOAPPMIPPG* EEFMDEHLLFI; // 0x18
		::RPG::Client::PlayVideoQTEVideoPrepareState CGDIOHBFPBA; // 0x20
		::System::UInt32 GEEHOLLFIHE; // 0x24
		::RPG::Client::PlayVideoQTEStageState DLNIGFGLPLJ; // 0x28
		::System::Boolean EHJHEHPFJFJ; // 0x2C
		::System::Byte _padding0[0x3];
		::System::Single FFPEAEOANBB; // 0x30
		::System::Void _ctor(::AGOAPPMIPPG* a1, ::RPG::Client::ICoroutineGroupController* a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::AGOAPPMIPPG*, ::RPG::Client::ICoroutineGroupController*, ::System::UInt32))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Void JIGJDOFEJMI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_JIGJDOFEJMI_OFFSET))(this);
		}

		::System::Void KIGBILLGNOH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_KIGBILLGNOH_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean IMKMHOFCOEM(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_IMKMHOFCOEM_OFFSET))(this, a1);
		}

		::System::Boolean EECNDHCCPGM(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_EECNDHCCPGM_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void IHOCDAAMDOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_IHOCDAAMDOA_OFFSET))(this);
		}

		::System::Void HOFOKPEMNLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_HOFOKPEMNLF_OFFSET))(this);
		}

		::System::Void HACGMIEKJPP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_HACGMIEKJPP_OFFSET))(this);
		}

		::System::Void MLLEIICACNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_MLLEIICACNF_OFFSET))(this);
		}

		::System::Void KAEPEIHMDKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_KAEPEIHMDKE_OFFSET))(this);
		}

		::System::Void CIFKAFHMJPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GCHCCLOEEPK_CIFKAFHMJPO_OFFSET))(this);
		}

	};
