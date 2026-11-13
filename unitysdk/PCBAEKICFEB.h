#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MMENAAHCEIJ.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class ACBDGIHICCD;
class ENEIHJJPNPI;
class KFELGAIGHAP;
class PMCOCHDJINJ;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PCBAEKICFEB_BDFCNNOAJMD_OFFSET UNITYSDK_OFFSET(0x1AAC9BF0)
#define PCBAEKICFEB_BJLDMFEPHJG_OFFSET UNITYSDK_OFFSET(0x1AACA050)
#define PCBAEKICFEB_CLEAR_OFFSET UNITYSDK_OFFSET(0x1AAC9F30)
#define PCBAEKICFEB_CTOR_OFFSET UNITYSDK_OFFSET(0x1AACA370)
#define PCBAEKICFEB_GOGCKJEDOMO_OFFSET UNITYSDK_OFFSET(0x1AACA350)
#define PCBAEKICFEB_HEGNDMHLBGN_OFFSET UNITYSDK_OFFSET(0x1AACA360)
#define PCBAEKICFEB_IIHKOBMOONC_OFFSET UNITYSDK_OFFSET(0x1AAC9DE0)
#define PCBAEKICFEB_IPIMJAFLCAI_OFFSET UNITYSDK_OFFSET(0x1AACA0A0)
#define PCBAEKICFEB_JKCPLEJCBML_OFFSET UNITYSDK_OFFSET(0x1AAC9EA0)
#define PCBAEKICFEB_KCKGCEBBCIE_OFFSET UNITYSDK_OFFSET(0x1AACA270)
#define PCBAEKICFEB_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1AAC9230)
#define PCBAEKICFEB_LBMAGONECLE_OFFSET UNITYSDK_OFFSET(0x1AAC95A0)

inline static constexpr unsigned int PCBAEKICFEB_TypeDefinitionIndex = 55274;

	class PCBAEKICFEB : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::RPG::GameCore::GameEntity*>* OOEJOOBDCHC; // 0x10
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* MFKNLHMKNDM; // 0x18
		::RPG::GameCore::GameEntity* PLDMPCFJCJE; // 0x20
		::RPG::GameCore::GameEntity* DLFPPIGGCJG; // 0x28
		::KFELGAIGHAP* HFOFIODMFGB; // 0x30
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x38
		::System::Boolean NLLJJFMOHFC; // 0x40
		::System::Boolean MABFMALCGKF; // 0x41
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::MMENAAHCEIJ a1, ::ACBDGIHICCD* a2)
		{
			return ((::System::Void(*)(::PVOID, ::MMENAAHCEIJ, ::ACBDGIHICCD*))((::PBYTE)hIl2Cpp + PCBAEKICFEB_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::TaskContext* LBMAGONECLE(::PMCOCHDJINJ* a1, ::RPG::GameCore::TaskContext* a2, ::ENEIHJJPNPI* a3, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>* a4)
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID, ::PMCOCHDJINJ*, ::RPG::GameCore::TaskContext*, ::ENEIHJJPNPI*, ::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::String*>*))((::PBYTE)hIl2Cpp + PCBAEKICFEB_LBMAGONECLE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JKCPLEJCBML(::ACBDGIHICCD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ACBDGIHICCD*))((::PBYTE)hIl2Cpp + PCBAEKICFEB_JKCPLEJCBML_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_CLEAR_OFFSET))(this);
		}

		::System::Void BJLDMFEPHJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_BJLDMFEPHJG_OFFSET))(this);
		}

		::System::Void IPIMJAFLCAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_IPIMJAFLCAI_OFFSET))(this);
		}

		::System::Void KCKGCEBBCIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PCBAEKICFEB_KCKGCEBBCIE_OFFSET))(this, a1);
		}

		::System::Void BDFCNNOAJMD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_BDFCNNOAJMD_OFFSET))(this);
		}

		::System::Void IIHKOBMOONC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_IIHKOBMOONC_OFFSET))(this);
		}

		::System::Boolean GOGCKJEDOMO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_GOGCKJEDOMO_OFFSET))(this);
		}

		::RPG::GameCore::TaskContext* HEGNDMHLBGN()
		{
			return ((::RPG::GameCore::TaskContext*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCBAEKICFEB_HEGNDMHLBGN_OFFSET))(this);
		}

	};
