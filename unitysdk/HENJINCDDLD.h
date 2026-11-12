#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class CLPGGJNLFPL;
class ENEIHJJPNPI;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeGlobalTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define HENJINCDDLD_CGNJAJMEKOI_OFFSET UNITYSDK_OFFSET(0x16BA2B60)
#define HENJINCDDLD_CTOR_OFFSET UNITYSDK_OFFSET(0x16BA1C60)
#define HENJINCDDLD_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16BA1EA0)
#define HENJINCDDLD_IGHNLNEHFOI_OFFSET UNITYSDK_OFFSET(0x16BA2B20)
#define HENJINCDDLD_IMHAOAICOPP_OFFSET UNITYSDK_OFFSET(0x16BA2BA0)
#define HENJINCDDLD_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0x16BA2BF0)
#define HENJINCDDLD_NCMDGGHBPFD_OFFSET UNITYSDK_OFFSET(0x16BA2AE0)
#define HENJINCDDLD_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x16BA1FF0)
#define HENJINCDDLD_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x16BA2910)
#define HENJINCDDLD_TICK_OFFSET UNITYSDK_OFFSET(0x16BA2A10)

inline static constexpr unsigned int HENJINCDDLD_TypeDefinitionIndex = 56282;

	class HENJINCDDLD : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::ENEIHJJPNPI* HGGIIDBDGKD; // 0x20
		::RPG::GameCore::IncludeGlobalTaskListTemplate* OFKGLJOAMLD; // 0x28
		::KFELGAIGHAP* HFOFIODMFGB; // 0x30
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncludeGlobalTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncludeGlobalTaskListTemplate*))((::PBYTE)hIl2Cpp + HENJINCDDLD_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + HENJINCDDLD_TICK_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* NCMDGGHBPFD()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_NCMDGGHBPFD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_IGHNLNEHFOI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* CGNJAJMEKOI()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_CGNJAJMEKOI_OFFSET))(this);
		}

		::KFELGAIGHAP* IMHAOAICOPP(::System::String* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HENJINCDDLD_IMHAOAICOPP_OFFSET))(this, a1);
		}

		::CLPGGJNLFPL* NBHCPBBGAKA()
		{
			return ((::CLPGGJNLFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HENJINCDDLD_NBHCPBBGAKA_OFFSET))(this);
		}

	};
