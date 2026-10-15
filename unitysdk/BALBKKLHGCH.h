#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateRinHouguOwnerType.h"
#include "unitysdk/System/Object.h"
class EOPFDKJOBIO;
class GCJCLFOLBPP;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define BALBKKLHGCH_BCALNMKJFIL_OFFSET UNITYSDK_OFFSET(0x15E739D0)
#define BALBKKLHGCH_BNHEHJMFBCK_OFFSET UNITYSDK_OFFSET(0x15E73CE0)
#define BALBKKLHGCH_CHKDPOICNFF_OFFSET UNITYSDK_OFFSET(0x15E73AF0)
#define BALBKKLHGCH_CTOR_OFFSET UNITYSDK_OFFSET(0x15E72760)
#define BALBKKLHGCH_DNBHAPCLPLO_OFFSET UNITYSDK_OFFSET(0x15E73690)
#define BALBKKLHGCH_HDEGLLMIFFG_OFFSET UNITYSDK_OFFSET(0x15E72800)
#define BALBKKLHGCH_IHDONIMGKGM_OFFSET UNITYSDK_OFFSET(0x15E73950)
#define BALBKKLHGCH_INBEBLBECHL_OFFSET UNITYSDK_OFFSET(0x15E738C0)
#define BALBKKLHGCH_NGDMDPNAEND_OFFSET UNITYSDK_OFFSET(0x15E74030)
#define BALBKKLHGCH_NKKACIEAEKL_OFFSET UNITYSDK_OFFSET(0x15E73910)
#define BALBKKLHGCH_NMAIDAPFPOO_OFFSET UNITYSDK_OFFSET(0x15E73760)
#define BALBKKLHGCH_OENLACGNMAI_OFFSET UNITYSDK_OFFSET(0x15E73600)
#define BALBKKLHGCH_PILFBNHPPMC_OFFSET UNITYSDK_OFFSET(0x15E72A30)

	class BALBKKLHGCH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::EOPFDKJOBIO*>* HNMFJMEDELE; // 0x10
		::System::Collections::Generic::HashSet_1<::System::UInt32>* OHHMBOEJJHN; // 0x18
		::System::UInt32 KPFDMPKMOEC; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALBKKLHGCH_CTOR_OFFSET))(this);
		}

		::System::Void PILFBNHPPMC(::System::Collections::Generic::IEnumerable_1<::GCJCLFOLBPP*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::GCJCLFOLBPP*>*))((::PBYTE)hIl2Cpp + BALBKKLHGCH_PILFBNHPPMC_OFFSET))(this, a1);
		}

		::System::Void NMAIDAPFPOO(::GCJCLFOLBPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + BALBKKLHGCH_NMAIDAPFPOO_OFFSET))(this, a1);
		}

		::System::Void INBEBLBECHL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALBKKLHGCH_INBEBLBECHL_OFFSET))(this, a1);
		}

		::System::UInt32 NKKACIEAEKL()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BALBKKLHGCH_NKKACIEAEKL_OFFSET))(this);
		}

		::EOPFDKJOBIO* IHDONIMGKGM()
		{
			return ((::EOPFDKJOBIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALBKKLHGCH_IHDONIMGKGM_OFFSET))(this);
		}

		::EOPFDKJOBIO* BCALNMKJFIL(::System::UInt32 a1)
		{
			return ((::EOPFDKJOBIO*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BALBKKLHGCH_BCALNMKJFIL_OFFSET))(this, a1);
		}

		::EOPFDKJOBIO* CHKDPOICNFF(::RPG::GameCore::FateRinHouguOwnerType a1)
		{
			return ((::EOPFDKJOBIO*(*)(::PVOID, ::RPG::GameCore::FateRinHouguOwnerType))((::PBYTE)hIl2Cpp + BALBKKLHGCH_CHKDPOICNFF_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>* BNHEHJMFBCK()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::EOPFDKJOBIO*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BALBKKLHGCH_BNHEHJMFBCK_OFFSET))(this);
		}

		::System::Void HDEGLLMIFFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BALBKKLHGCH_HDEGLLMIFFG_OFFSET))(this);
		}

		static ::System::Void OENLACGNMAI(::EOPFDKJOBIO* a1)
		{
			return ((::System::Void(*)(::EOPFDKJOBIO*))((::PBYTE)hIl2Cpp + BALBKKLHGCH_OENLACGNMAI_OFFSET))(a1);
		}

		static ::EOPFDKJOBIO* NGDMDPNAEND(::System::UInt32 a1)
		{
			return ((::EOPFDKJOBIO*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BALBKKLHGCH_NGDMDPNAEND_OFFSET))(a1);
		}

		static ::System::Void DNBHAPCLPLO(::EOPFDKJOBIO* a1, ::GCJCLFOLBPP* a2)
		{
			return ((::System::Void(*)(::EOPFDKJOBIO*, ::GCJCLFOLBPP*))((::PBYTE)hIl2Cpp + BALBKKLHGCH_DNBHAPCLPLO_OFFSET))(a1, a2);
		}

	};
