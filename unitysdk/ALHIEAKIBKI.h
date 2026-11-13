#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBGNOBLIAGL.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace Entitas { template <typename T> class IGroup_1; }
namespace System { class String; }

#define ALHIEAKIBKI_BEDPONKKHNC_OFFSET UNITYSDK_OFFSET(0x197C3FC0)
#define ALHIEAKIBKI_CFDLOJLBKFG_OFFSET UNITYSDK_OFFSET(0x197C38F0)
#define ALHIEAKIBKI_CTOR_OFFSET UNITYSDK_OFFSET(0x197C30D0)
#define ALHIEAKIBKI_EXECUTE_OFFSET UNITYSDK_OFFSET(0x197C3790)
#define ALHIEAKIBKI_FNHOOMOJJJO_OFFSET UNITYSDK_OFFSET(0x197C5640)
#define ALHIEAKIBKI_GEJGNPLMLAM_OFFSET UNITYSDK_OFFSET(0x197C5490)
#define ALHIEAKIBKI_IFPFHPEFKCF_OFFSET UNITYSDK_OFFSET(0x197C3420)
#define ALHIEAKIBKI_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x197C30E0)
#define ALHIEAKIBKI_JPKFDMCIJNF_OFFSET UNITYSDK_OFFSET(0x197C47E0)
#define ALHIEAKIBKI_LMDAFHDCFGF_OFFSET UNITYSDK_OFFSET(0x197C3A80)
#define ALHIEAKIBKI_NFNECIHEOAF_OFFSET UNITYSDK_OFFSET(0x197C44C0)
#define ALHIEAKIBKI_PMMBKACIHNN_OFFSET UNITYSDK_OFFSET(0x197C4660)
#define ALHIEAKIBKI_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x197C4450)

inline static constexpr unsigned int ALHIEAKIBKI_TypeDefinitionIndex = 79275;

	class ALHIEAKIBKI : public ::BBGNOBLIAGL
	{
	public:
		::Entitas::IGroup_1<::HIOEAKHGILF*>* FLOILGDKLJO; // 0x20
		::System::Boolean LBILNHLMOEH; // 0x28
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_EXECUTE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_TEARDOWN_OFFSET))(this);
		}

		::System::Void CFDLOJLBKFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_CFDLOJLBKFG_OFFSET))(this);
		}

		::System::Void NFNECIHEOAF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_NFNECIHEOAF_OFFSET))(this);
		}

		::System::Void PMMBKACIHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_PMMBKACIHNN_OFFSET))(this);
		}

		::System::Void BEDPONKKHNC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_BEDPONKKHNC_OFFSET))(this);
		}

		::System::Void LMDAFHDCFGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_LMDAFHDCFGF_OFFSET))(this);
		}

		::System::Void GEJGNPLMLAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_GEJGNPLMLAM_OFFSET))(this);
		}

		::System::Void IFPFHPEFKCF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_IFPFHPEFKCF_OFFSET))(this, a1);
		}

		::System::Void FNHOOMOJJJO(::System::Int32 a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_FNHOOMOJJJO_OFFSET))(this, a1, a2);
		}

		::System::Void JPKFDMCIJNF(::HIOEAKHGILF* a1, ::System::Single a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + ALHIEAKIBKI_JPKFDMCIJNF_OFFSET))(this, a1, a2, a3);
		}

	};
