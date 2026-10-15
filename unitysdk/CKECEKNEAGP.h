#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/NHHNOOPNDEA.h"
class AIMNKMEFBKE;
class BEIFEIGCEGF;
class PLAJONHLDJN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKECEKNEAGP_BBBLJOGECDB_OFFSET UNITYSDK_OFFSET(0x1C5D6E00)
#define CKECEKNEAGP_CNOIPPBEAHP_OFFSET UNITYSDK_OFFSET(0x1C5D6B50)
#define CKECEKNEAGP_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5D6630)
#define CKECEKNEAGP_DIHFLBCAGIN_OFFSET UNITYSDK_OFFSET(0x1C5D69E0)
#define CKECEKNEAGP_EHJJCPDAHCL_OFFSET UNITYSDK_OFFSET(0x1C5D6640)
#define CKECEKNEAGP_HFGLKHMPHJG_OFFSET UNITYSDK_OFFSET(0x1C5D7050)
#define CKECEKNEAGP_KLCAJEBKDIE_OFFSET UNITYSDK_OFFSET(0x1C5D7270)
#define CKECEKNEAGP_LAENBLNACOI_OFFSET UNITYSDK_OFFSET(0x1C5D73B0)
#define CKECEKNEAGP_LDDKNBGLGLK_OFFSET UNITYSDK_OFFSET(0x1C58EE80)
#define CKECEKNEAGP_LFGLCGMGCGA_OFFSET UNITYSDK_OFFSET(0x1C5D70F0)

inline static constexpr unsigned int CKECEKNEAGP_TypeDefinitionIndex = 36508;

	class CKECEKNEAGP : public ::System::Object
	{
	public:
		::PLAJONHLDJN* IBGLIGGOIEK; // 0x10
		::AIMNKMEFBKE* EEFMDEHLLFI; // 0x18
		::System::Void _ctor(::PLAJONHLDJN* a1, ::AIMNKMEFBKE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::PLAJONHLDJN*, ::AIMNKMEFBKE*))((::PBYTE)hIl2Cpp + CKECEKNEAGP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Collections::Generic::List_1<::NHHNOOPNDEA>* EHJJCPDAHCL()
		{
			return ((::System::Collections::Generic::List_1<::NHHNOOPNDEA>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_EHJJCPDAHCL_OFFSET))(this);
		}

		::System::Int32 LDDKNBGLGLK(::System::Collections::Generic::List_1<::NHHNOOPNDEA>* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Collections::Generic::List_1<::NHHNOOPNDEA>*))((::PBYTE)hIl2Cpp + CKECEKNEAGP_LDDKNBGLGLK_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* CNOIPPBEAHP(::BEIFEIGCEGF* a1, ::System::Boolean a2)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::BEIFEIGCEGF*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKECEKNEAGP_CNOIPPBEAHP_OFFSET))(this, a1, a2);
		}

		::System::Int32 BBBLJOGECDB(::BEIFEIGCEGF* a1, ::System::Collections::Generic::List_1<::System::UInt32>* a2, ::System::Boolean a3)
		{
			return ((::System::Int32(*)(::PVOID, ::BEIFEIGCEGF*, ::System::Collections::Generic::List_1<::System::UInt32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CKECEKNEAGP_BBBLJOGECDB_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 KLCAJEBKDIE()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_KLCAJEBKDIE_OFFSET))(this);
		}

		::System::Int32 HFGLKHMPHJG()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_HFGLKHMPHJG_OFFSET))(this);
		}

		::System::UInt64 LAENBLNACOI()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_LAENBLNACOI_OFFSET))(this);
		}

		::System::Boolean DIHFLBCAGIN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_DIHFLBCAGIN_OFFSET))(this);
		}

		::System::Int32 LFGLCGMGCGA()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKECEKNEAGP_LFGLCGMGCGA_OFFSET))(this);
		}

	};
