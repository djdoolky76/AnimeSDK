#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/IDKNGJGGMOI.h"
class MNBNFBAMKKI;
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MFAMLFCHCNN_ACFCMBBLGIC_OFFSET UNITYSDK_OFFSET(0xB8E4460)
#define MFAMLFCHCNN_APAGPHGIAOL_OFFSET UNITYSDK_OFFSET(0xB8E39E0)
#define MFAMLFCHCNN_BCIHFGHCBEE_OFFSET UNITYSDK_OFFSET(0xB8E3690)
#define MFAMLFCHCNN_CGFPHLAEHMN_OFFSET UNITYSDK_OFFSET(0xB8E3D20)
#define MFAMLFCHCNN_CJDNCBHLOGD_OFFSET UNITYSDK_OFFSET(0xB8E4830)
#define MFAMLFCHCNN_CTOR_1_OFFSET UNITYSDK_OFFSET(0xB8E3750)
#define MFAMLFCHCNN_CTOR_OFFSET UNITYSDK_OFFSET(0xB8E33B0)
#define MFAMLFCHCNN_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB8E3630)
#define MFAMLFCHCNN_ENABDEGHPKO_OFFSET UNITYSDK_OFFSET(0xB8E3F90)
#define MFAMLFCHCNN_EOMALFDBNAF_OFFSET UNITYSDK_OFFSET(0xB8E43A0)
#define MFAMLFCHCNN_FBGNCAPKJID_OFFSET UNITYSDK_OFFSET(0xB8E49E0)
#define MFAMLFCHCNN_KILGHDHJIGI_OFFSET UNITYSDK_OFFSET(0xB8E3B80)
#define MFAMLFCHCNN_KPBNLOAFBFC_OFFSET UNITYSDK_OFFSET(0xB8E44B0)
#define MFAMLFCHCNN_MHFNJCLKNMG_OFFSET UNITYSDK_OFFSET(0xB8E4B10)
#define MFAMLFCHCNN_MMGHDKPGNNF_OFFSET UNITYSDK_OFFSET(0xB8E4520)
#define MFAMLFCHCNN_ODGBJHIDJKD_OFFSET UNITYSDK_OFFSET(0xB8E45C0)

inline static constexpr unsigned int MFAMLFCHCNN_TypeDefinitionIndex = 71713;

	class MFAMLFCHCNN : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* OFCNGONGGBJ; // 0x10
		::System::String* GJELMKNIJCM; // 0x18
		::System::Collections::Generic::HashSet_1<::RPG::GameCore::ILBattleAvatarTag>* FPKFGLHNABC; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* MMEFOJPKHLE; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::ILBattleAvatarTag>* CIMAJGOGHJE; // 0x30
		// static const ::System::String* MEELDHMNNDM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void APAGPHGIAOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_APAGPHGIAOL_OFFSET))(this);
		}

		::System::Void KILGHDHJIGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_KILGHDHJIGI_OFFSET))(this);
		}

		::System::Void CGFPHLAEHMN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_CGFPHLAEHMN_OFFSET))(this);
		}

		::System::Void BCIHFGHCBEE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_BCIHFGHCBEE_OFFSET))(this);
		}

		::System::Void EOMALFDBNAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_EOMALFDBNAF_OFFSET))(this);
		}

		::System::Void ACFCMBBLGIC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_ACFCMBBLGIC_OFFSET))(this, a1);
		}

		::System::Void ENABDEGHPKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_ENABDEGHPKO_OFFSET))(this);
		}

		::System::String* KPBNLOAFBFC()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_KPBNLOAFBFC_OFFSET))(this);
		}

		::System::Boolean MMGHDKPGNNF(::MNBNFBAMKKI* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_MMGHDKPGNNF_OFFSET))(this, a1);
		}

		::IDKNGJGGMOI ODGBJHIDJKD(::MNBNFBAMKKI* a1)
		{
			return ((::IDKNGJGGMOI(*)(::PVOID, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_ODGBJHIDJKD_OFFSET))(this, a1);
		}

		::System::Int32 CJDNCBHLOGD(::MNBNFBAMKKI* a1, ::MNBNFBAMKKI* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::MNBNFBAMKKI*, ::MNBNFBAMKKI*))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_CJDNCBHLOGD_OFFSET))(this, a1, a2);
		}

		::System::Void MHFNJCLKNMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_MHFNJCLKNMG_OFFSET))(this);
		}

		::System::UInt32 FBGNCAPKJID(::System::String* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::String*, ::System::UInt32))((::PBYTE)hIl2Cpp + MFAMLFCHCNN_FBGNCAPKJID_OFFSET))(this, a1, a2);
		}

	};
