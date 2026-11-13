#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJIJCDNNBNI.h"
#include "unitysdk/System/Object.h"
class BDNAPDDNGFL;
class LDMKDNCFGKL;
namespace Google::Protobuf::Collections { template <typename T> class RepeatedField_1; }
namespace RPG::GameCore { class GridFightEnemyDifficultyLvConfigRow; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CILNKGMHIIE_BBGFLHKKLGJ_OFFSET UNITYSDK_OFFSET(0x16E61CC0)
#define CILNKGMHIIE_CTOR_OFFSET UNITYSDK_OFFSET(0x16E62470)
#define CILNKGMHIIE_GONCJNNHJMB_OFFSET UNITYSDK_OFFSET(0x16E62270)
#define CILNKGMHIIE_HEPPBBLLBPN_OFFSET UNITYSDK_OFFSET(0x16E625A0)
#define CILNKGMHIIE_NLDPGMIKLLG_OFFSET UNITYSDK_OFFSET(0x16E62330)

inline static constexpr unsigned int CILNKGMHIIE_TypeDefinitionIndex = 57515;

	class CILNKGMHIIE : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::UInt32>* FCNDMKKBLBI; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* PPFHFCCCJFG; // 0x18
		::RPG::GameCore::GridFightEnemyDifficultyLvConfigRow* JECHCODBJGI; // 0x20
		::System::Collections::Generic::List_1<::NJIJCDNNBNI>* GGLBJMFBLFB; // 0x28
		::Google::Protobuf::Collections::RepeatedField_1<::BDNAPDDNGFL*>* LNGPEJNADAH; // 0x30
		::System::UInt32 JPHDEOJGLJG; // 0x38
		::System::UInt32 LDFEJAAOLKB; // 0x3C
		::System::UInt32 BDCOFIOCJFO; // 0x40
		::System::UInt32 ININNFJHJCM; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_CTOR_OFFSET))(this);
		}

		::System::Void BBGFLHKKLGJ(::Google::Protobuf::Collections::RepeatedField_1<::BDNAPDDNGFL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::BDNAPDDNGFL*>*))((::PBYTE)hIl2Cpp + CILNKGMHIIE_BBGFLHKKLGJ_OFFSET))(this, a1);
		}

		::System::Void GONCJNNHJMB(::Google::Protobuf::Collections::RepeatedField_1<::BDNAPDDNGFL*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Google::Protobuf::Collections::RepeatedField_1<::BDNAPDDNGFL*>*))((::PBYTE)hIl2Cpp + CILNKGMHIIE_GONCJNNHJMB_OFFSET))(this, a1);
		}

		::LDMKDNCFGKL* NLDPGMIKLLG()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_NLDPGMIKLLG_OFFSET))(this);
		}

		::LDMKDNCFGKL* HEPPBBLLBPN()
		{
			return ((::LDMKDNCFGKL*(*)(::PVOID))((::PBYTE)hIl2Cpp + CILNKGMHIIE_HEPPBBLLBPN_OFFSET))(this);
		}

	};
