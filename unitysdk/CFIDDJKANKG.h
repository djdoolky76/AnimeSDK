#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class CLPGGJNLFPL;
class ENEIHJJPNPI;
class KFELGAIGHAP;
namespace RPG::GameCore { class GameEntityList; }
namespace RPG::GameCore { class IncludeTaskListTemplate; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CFIDDJKANKG_CGNJAJMEKOI_OFFSET UNITYSDK_OFFSET(0xCC48930)
#define CFIDDJKANKG_CTOR_OFFSET UNITYSDK_OFFSET(0xCC475E0)
#define CFIDDJKANKG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xCC47760)
#define CFIDDJKANKG_IGHNLNEHFOI_OFFSET UNITYSDK_OFFSET(0xCC488F0)
#define CFIDDJKANKG_IMHAOAICOPP_OFFSET UNITYSDK_OFFSET(0xCC48970)
#define CFIDDJKANKG_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xCC48A20)
#define CFIDDJKANKG_NCMDGGHBPFD_OFFSET UNITYSDK_OFFSET(0xCC488B0)
#define CFIDDJKANKG_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xCC478C0)
#define CFIDDJKANKG_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xCC48660)
#define CFIDDJKANKG_TICK_OFFSET UNITYSDK_OFFSET(0xCC487C0)

inline static constexpr unsigned int CFIDDJKANKG_TypeDefinitionIndex = 55107;

	class CFIDDJKANKG : public ::GELIALJDFBL
	{
	public:
		::KFELGAIGHAP* HFOFIODMFGB; // 0x18
		::RPG::GameCore::IncludeTaskListTemplate* OFKGLJOAMLD; // 0x20
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* BPGGBFAHLHM; // 0x28
		::ENEIHJJPNPI* HGGIIDBDGKD; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::String*, ::KFELGAIGHAP*>* ONOOIGMOCMB; // 0x38
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x40
		::RPG::GameCore::GameEntityList* OOEJOOBDCHC; // 0x48
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::IncludeTaskListTemplate* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::IncludeTaskListTemplate*))((::PBYTE)hIl2Cpp + CFIDDJKANKG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CFIDDJKANKG_TICK_OFFSET))(this, a1);
		}

		::ENEIHJJPNPI* NCMDGGHBPFD()
		{
			return ((::ENEIHJJPNPI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_NCMDGGHBPFD_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* IGHNLNEHFOI()
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_IGHNLNEHFOI_OFFSET))(this);
		}

		::RPG::GameCore::GameEntityList* CGNJAJMEKOI()
		{
			return ((::RPG::GameCore::GameEntityList*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_CGNJAJMEKOI_OFFSET))(this);
		}

		::KFELGAIGHAP* IMHAOAICOPP(::System::String* a1)
		{
			return ((::KFELGAIGHAP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CFIDDJKANKG_IMHAOAICOPP_OFFSET))(this, a1);
		}

		::CLPGGJNLFPL* NBHCPBBGAKA()
		{
			return ((::CLPGGJNLFPL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CFIDDJKANKG_NBHCPBBGAKA_OFFSET))(this);
		}

	};
