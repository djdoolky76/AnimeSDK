#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/KEFOKEFMHOJ.h"
#include "unitysdk/LABHEAHJHJF.h"
#include "unitysdk/MFDEBKGHEIO.h"
#include "unitysdk/NBLCBLIPBNB.h"
class ENEIHJJPNPI;
class GGMPKKNCLHF;
class MNHFLMDPMMP;
namespace RPG::GameCore { class PropertyAdsorptionConfig; }
namespace SimpleJSON { class JSONNode; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define ENEIHJJPNPI_AKPBOOEELBC_OFFSET UNITYSDK_OFFSET(0x1DF815D0)
#define ENEIHJJPNPI_BKGBLACNHBC_OFFSET UNITYSDK_OFFSET(0x1DF817E0)
#define ENEIHJJPNPI_CTOR_OFFSET UNITYSDK_OFFSET(0x1DF846C0)
#define ENEIHJJPNPI_DHPKJCHHCBN_OFFSET UNITYSDK_OFFSET(0x1DF82AA0)
#define ENEIHJJPNPI_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1DF82A40)
#define ENEIHJJPNPI_DLOGLCGOIIL_OFFSET UNITYSDK_OFFSET(0x1DF81330)
#define ENEIHJJPNPI_GET_ALIASEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1DF81310)
#define ENEIHJJPNPI_IFPDAPHCIAI_OFFSET UNITYSDK_OFFSET(0x1DF82170)
#define ENEIHJJPNPI_JNJJHKDKCHJ_OFFSET UNITYSDK_OFFSET(0x1DF821A0)
#define ENEIHJJPNPI_KOLPFEMFLJE_OFFSET UNITYSDK_OFFSET(0x1DF81670)
#define ENEIHJJPNPI_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DF82EB0)
#define ENEIHJJPNPI_MPIBNJBBOKM_OFFSET UNITYSDK_OFFSET(0x1DF81470)
#define ENEIHJJPNPI_NDPBGJOHDKC_OFFSET UNITYSDK_OFFSET(0x1DF82020)
#define ENEIHJJPNPI_OHGOHOCFKHI_1_OFFSET UNITYSDK_OFFSET(0x1DF81F30)
#define ENEIHJJPNPI_OHGOHOCFKHI_OFFSET UNITYSDK_OFFSET(0x1DF81830)
#define ENEIHJJPNPI_PAHFAMFBMOA_OFFSET UNITYSDK_OFFSET(0x1DF82110)
#define ENEIHJJPNPI_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1DF826E0)
#define ENEIHJJPNPI_SET_ALIASEVALUATOR_OFFSET UNITYSDK_OFFSET(0x1DF81320)

inline static constexpr unsigned int ENEIHJJPNPI_TypeDefinitionIndex = 10866;

	class ENEIHJJPNPI : public ::System::Object
	{
	public:
		::GGMPKKNCLHF* _AliasEvaluator_k__BackingField; // 0x10
		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::StringHash, ::System::Object*>* CAOOBPKAPEO; // 0x18
		::System::Action_3<::RPG::GameCore::StringHash, ::System::Nullable_1<::RPG::GameCore::FixPoint>, ::RPG::GameCore::FixPoint>* CBPIHFNFPLD; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_CTOR_OFFSET))(this);
		}

		::GGMPKKNCLHF* get_AliasEvaluator()
		{
			return ((::GGMPKKNCLHF*(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_GET_ALIASEVALUATOR_OFFSET))(this);
		}

		::System::Void set_AliasEvaluator(::GGMPKKNCLHF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GGMPKKNCLHF*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_SET_ALIASEVALUATOR_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint DLOGLCGOIIL(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_DLOGLCGOIIL_OFFSET))(this, a1);
		}

		::System::Boolean MPIBNJBBOKM(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_MPIBNJBBOKM_OFFSET))(this, a1, a2);
		}

		::RPG::GameCore::FixPoint AKPBOOEELBC(::RPG::GameCore::StringHash a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_AKPBOOEELBC_OFFSET))(this, a1);
		}

		::MFDEBKGHEIO KOLPFEMFLJE(::RPG::GameCore::StringHash a1)
		{
			return ((::MFDEBKGHEIO(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_KOLPFEMFLJE_OFFSET))(this, a1);
		}

		::System::Void BKGBLACNHBC(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_BKGBLACNHBC_OFFSET))(this, a1, a2);
		}

		::System::Void OHGOHOCFKHI(::NBLCBLIPBNB a1)
		{
			return ((::System::Void(*)(::PVOID, ::NBLCBLIPBNB))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_OHGOHOCFKHI_OFFSET))(this, a1);
		}

		::System::Void OHGOHOCFKHI_1(::KEFOKEFMHOJ a1)
		{
			return ((::System::Void(*)(::PVOID, ::KEFOKEFMHOJ))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_OHGOHOCFKHI_1_OFFSET))(this, a1);
		}

		::System::Void NDPBGJOHDKC(::LABHEAHJHJF a1)
		{
			return ((::System::Void(*)(::PVOID, ::LABHEAHJHJF))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_NDPBGJOHDKC_OFFSET))(this, a1);
		}

		::System::Void PAHFAMFBMOA(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_PAHFAMFBMOA_OFFSET))(this, a1);
		}

		::System::Boolean IFPDAPHCIAI(::RPG::GameCore::StringHash a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::StringHash))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_IFPDAPHCIAI_OFFSET))(this, a1);
		}

		::System::Void JNJJHKDKCHJ(::RPG::GameCore::StringHash a1, ::RPG::GameCore::FixPoint a2, ::MNHFLMDPMMP* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StringHash, ::RPG::GameCore::FixPoint, ::MNHFLMDPMMP*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_JNJJHKDKCHJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void PPEGOIODAKI(::ENEIHJJPNPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ENEIHJJPNPI*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_DISPOSE_OFFSET))(this);
		}

		static ::RPG::GameCore::PropertyAdsorptionConfig* DHPKJCHHCBN(::SimpleJSON::JSONNode* a1)
		{
			return ((::RPG::GameCore::PropertyAdsorptionConfig*(*)(::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_DHPKJCHHCBN_OFFSET))(a1);
		}

		::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SimpleJSON::JSONNode*))((::PBYTE)hIl2Cpp + ENEIHJJPNPI_LJACLBNEEEB_OFFSET))(this, a1);
		}

	};
