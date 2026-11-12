#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MACPKMEBPGE;
namespace RPG::Client { class MapDef; }
namespace RPG::Client { class MapEntityDef; }
namespace RPG::Client { class MapNpc; }
namespace RPG::Client { class MapNpcDef; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define IMFPKEKLNIK_CTOR_OFFSET UNITYSDK_OFFSET(0xB8027C0)
#define IMFPKEKLNIK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB802860)
#define IMFPKEKLNIK_DOHAMLPILJE_OFFSET UNITYSDK_OFFSET(0xB802E50)
#define IMFPKEKLNIK_FCCKIECMGFL_OFFSET UNITYSDK_OFFSET(0xB802F90)
#define IMFPKEKLNIK_FHNDJGCJBJC_OFFSET UNITYSDK_OFFSET(0xB803230)
#define IMFPKEKLNIK_HCIMJDGKFCH_OFFSET UNITYSDK_OFFSET(0xB8028B0)
#define IMFPKEKLNIK_LJEJFCFCOBJ_OFFSET UNITYSDK_OFFSET(0xB803C60)
#define IMFPKEKLNIK_PAEHKHNCNNA_OFFSET UNITYSDK_OFFSET(0xB8034A0)
#define IMFPKEKLNIK_PJCOENMKGLK_OFFSET UNITYSDK_OFFSET(0xB803410)

inline static constexpr unsigned int IMFPKEKLNIK_TypeDefinitionIndex = 62266;

	class IMFPKEKLNIK : public ::System::Object
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::UInt32>* OJFHGOBDGHK; // 0x10
		::RPG::Client::MapDef* KKKADHHBMLD; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::MACPKMEBPGE*>* HHAAHBFKFGB; // 0x20
		::System::Void _ctor(::RPG::Client::MapDef* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapDef*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_DISPOSE_OFFSET))(this);
		}

		::System::Void HCIMJDGKFCH(::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_HCIMJDGKFCH_OFFSET))(this, a1);
		}

		::System::Void FCCKIECMGFL(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_FCCKIECMGFL_OFFSET))(this, a1);
		}

		::System::Boolean FHNDJGCJBJC(::RPG::Client::MapNpc* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpc*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_FHNDJGCJBJC_OFFSET))(this, a1);
		}

		::System::Void PJCOENMKGLK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_PJCOENMKGLK_OFFSET))(this);
		}

		static ::System::Void PAEHKHNCNNA(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a1, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>* a2)
		{
			return ((::System::Void(*)(::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*, ::System::Collections::Generic::HashSet_1<::RPG::Client::MapEntityDef*>*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_PAEHKHNCNNA_OFFSET))(a1, a2);
		}

		::System::Void LJEJFCFCOBJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_LJEJFCFCOBJ_OFFSET))(this);
		}

		::System::Boolean DOHAMLPILJE(::RPG::Client::MapNpcDef* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::MapNpcDef*))((::PBYTE)hIl2Cpp + IMFPKEKLNIK_DOHAMLPILJE_OFFSET))(this, a1);
		}

	};
