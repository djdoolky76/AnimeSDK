#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PHFEBIMDLNI.h"
class AIMNKMEFBKE;
class BPHJOOGJPKD;
class GFCOHGKHIPJ;
class IJFIHJJPHNA;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DHAIADCDCCG_AMGEEPFIPPP_OFFSET UNITYSDK_OFFSET(0x1C5BEB80)
#define DHAIADCDCCG_BLEJJMNHDED_OFFSET UNITYSDK_OFFSET(0x1C5BED20)
#define DHAIADCDCCG_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5BE880)
#define DHAIADCDCCG_IEJOLPKOGME_OFFSET UNITYSDK_OFFSET(0x1C5BF310)
#define DHAIADCDCCG_INDDDLOHPEA_OFFSET UNITYSDK_OFFSET(0x1C5BEA80)
#define DHAIADCDCCG_KEGEONMGDPG_OFFSET UNITYSDK_OFFSET(0x1C5BF100)
#define DHAIADCDCCG_LIPKLHBJLKH_OFFSET UNITYSDK_OFFSET(0x1C5BEF60)
#define DHAIADCDCCG_MOBGELFFKJB_OFFSET UNITYSDK_OFFSET(0x1C5BEEC0)
#define DHAIADCDCCG_NIFJPMHONPN_1_OFFSET UNITYSDK_OFFSET(0x1C5BE8F0)
#define DHAIADCDCCG_NIFJPMHONPN_OFFSET UNITYSDK_OFFSET(0x1C5B95E0)
#define DHAIADCDCCG_PCNKFMMKHHN_OFFSET UNITYSDK_OFFSET(0x1C5BF270)
#define DHAIADCDCCG_PINBLHOFNPB_OFFSET UNITYSDK_OFFSET(0x1C5BE8A0)
#define DHAIADCDCCG_PKLFLANJCDG_OFFSET UNITYSDK_OFFSET(0x1C5BEB20)

inline static constexpr unsigned int DHAIADCDCCG_TypeDefinitionIndex = 36538;

	class DHAIADCDCCG : public ::PHFEBIMDLNI
	{
	public:
		::BPHJOOGJPKD* FLMODBLFAGD; // 0x18
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x20
		::IJFIHJJPHNA* KNOIOPPGBNA; // 0x28
		::System::Void _ctor(::IJFIHJJPHNA* a1, ::BPHJOOGJPKD* a2, ::AIMNKMEFBKE* a3)
		{
			return ((::System::Void(*)(::PVOID, ::IJFIHJJPHNA*, ::BPHJOOGJPKD*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + DHAIADCDCCG_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::GFCOHGKHIPJ* PINBLHOFNPB()
		{
			return ((::GFCOHGKHIPJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_PINBLHOFNPB_OFFSET))(this);
		}

		::System::Boolean NIFJPMHONPN(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + DHAIADCDCCG_NIFJPMHONPN_OFFSET))(this, a1);
		}

		::System::Boolean NIFJPMHONPN_1(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DHAIADCDCCG_NIFJPMHONPN_1_OFFSET))(this, a1);
		}

		::IJFIHJJPHNA* INDDDLOHPEA()
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_INDDDLOHPEA_OFFSET))(this);
		}

		::System::Boolean PKLFLANJCDG(::IJFIHJJPHNA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + DHAIADCDCCG_PKLFLANJCDG_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* AMGEEPFIPPP()
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_AMGEEPFIPPP_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* BLEJJMNHDED()
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_BLEJJMNHDED_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::IJFIHJJPHNA*>* MOBGELFFKJB()
		{
			return ((::System::Collections::Generic::List_1<::IJFIHJJPHNA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_MOBGELFFKJB_OFFSET))(this);
		}

		::IJFIHJJPHNA* LIPKLHBJLKH(::IJFIHJJPHNA* a1)
		{
			return ((::IJFIHJJPHNA*(*)(::PVOID, ::IJFIHJJPHNA*))((::PBYTE)hIl2Cpp + DHAIADCDCCG_LIPKLHBJLKH_OFFSET))(this, a1);
		}

		::System::Boolean KEGEONMGDPG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_KEGEONMGDPG_OFFSET))(this);
		}

		::System::Boolean PCNKFMMKHHN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_PCNKFMMKHHN_OFFSET))(this);
		}

		::System::Boolean IEJOLPKOGME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DHAIADCDCCG_IEJOLPKOGME_OFFSET))(this);
		}

	};
