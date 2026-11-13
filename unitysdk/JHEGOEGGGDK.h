#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GGLKJLLMHBN.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/ValueTuple_2.h"
class APGJODNAGHB;
class KGHMBCLFFLG;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }

#define JHEGOEGGGDK_CTOR_OFFSET UNITYSDK_OFFSET(0x19367D30)
#define JHEGOEGGGDK_DGBMKOOLGID_OFFSET UNITYSDK_OFFSET(0x19365DA0)
#define JHEGOEGGGDK_DMLANLDOHOD_OFFSET UNITYSDK_OFFSET(0x19366A50)
#define JHEGOEGGGDK_FLKGLBJCJMA_OFFSET UNITYSDK_OFFSET(0x19367120)
#define JHEGOEGGGDK_FOFOBCGPODK_OFFSET UNITYSDK_OFFSET(0x193676D0)
#define JHEGOEGGGDK_GFLJKFDIBNG_OFFSET UNITYSDK_OFFSET(0x19367620)
#define JHEGOEGGGDK_JEGBJPHEHOI_OFFSET UNITYSDK_OFFSET(0x19367C40)
#define JHEGOEGGGDK_KCPBKEBGDPG_OFFSET UNITYSDK_OFFSET(0x19366930)
#define JHEGOEGGGDK_NMNKCDIOPKH_OFFSET UNITYSDK_OFFSET(0x193667C0)
#define JHEGOEGGGDK_OKGOINJDHNL_OFFSET UNITYSDK_OFFSET(0x19366760)
#define JHEGOEGGGDK__CHECKNEEDREBUILD_OFFSET UNITYSDK_OFFSET(0x19365E30)
#define JHEGOEGGGDK__REBUILD_OFFSET UNITYSDK_OFFSET(0x193665C0)

inline static constexpr unsigned int JHEGOEGGGDK_TypeDefinitionIndex = 64154;

	class JHEGOEGGGDK : public ::GGLKJLLMHBN
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* BMEJDDNOIDM; // 0x28
		::APGJODNAGHB* PEEAFBINELO; // 0x30
		::System::Collections::Generic::Dictionary_2<::KGHMBCLFFLG*, ::System::UInt32>* PEELEAMPBPP; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* LOPPLJEGLFO; // 0x40
		::System::ValueTuple_2<::System::UInt32, ::System::UInt32> FFFFJCOACPK; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_CTOR_OFFSET))(this);
		}

		::System::Void DGBMKOOLGID(::APGJODNAGHB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APGJODNAGHB*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_DGBMKOOLGID_OFFSET))(this, a1);
		}

		::System::Boolean _CheckNeedRebuild()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEGOEGGGDK__CHECKNEEDREBUILD_OFFSET))(this);
		}

		::System::Void _Rebuild()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEGOEGGGDK__REBUILD_OFFSET))(this);
		}

		::System::Void NMNKCDIOPKH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_NMNKCDIOPKH_OFFSET))(this, a1);
		}

		::System::Void KCPBKEBGDPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_KCPBKEBGDPG_OFFSET))(this);
		}

		::System::Void OKGOINJDHNL(::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_OKGOINJDHNL_OFFSET))(this, a1);
		}

		::System::Void FLKGLBJCJMA(::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_FLKGLBJCJMA_OFFSET))(this, a1);
		}

		::System::Void FOFOBCGPODK(::KGHMBCLFFLG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KGHMBCLFFLG*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_FOFOBCGPODK_OFFSET))(this, a1);
		}

		::System::Void GFLJKFDIBNG(::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyList_1<::KGHMBCLFFLG*>*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_GFLJKFDIBNG_OFFSET))(this, a1);
		}

		::System::Void JEGBJPHEHOI(::System::UInt32 a1, ::RPG::GameCore::FixPoint a2, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::FixPoint, ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::FixPoint>*))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_JEGBJPHEHOI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DMLANLDOHOD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHEGOEGGGDK_DMLANLDOHOD_OFFSET))(this);
		}

	};
