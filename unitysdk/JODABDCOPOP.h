#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class EKFMIDBJDIA;
class KFELGAIGHAP;
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define JODABDCOPOP_CJHKDGIIOJM_OFFSET UNITYSDK_OFFSET(0xB298A40)
#define JODABDCOPOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB298670)
#define JODABDCOPOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB298B50)
#define JODABDCOPOP_GNCDPGGMJFJ_OFFSET UNITYSDK_OFFSET(0xB298980)
#define JODABDCOPOP_INFHHPFKMMG_OFFSET UNITYSDK_OFFSET(0xB298940)
#define JODABDCOPOP_LEDGOAALHOL_OFFSET UNITYSDK_OFFSET(0xB2989D0)
#define JODABDCOPOP_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0xB298C30)
#define JODABDCOPOP_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0xB298C70)
#define JODABDCOPOP_PDCHABCBEEO_OFFSET UNITYSDK_OFFSET(0xB2988A0)
#define JODABDCOPOP_TICK_OFFSET UNITYSDK_OFFSET(0xB298680)

inline static constexpr unsigned int JODABDCOPOP_TypeDefinitionIndex = 55160;

	class JODABDCOPOP : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::KFELGAIGHAP* NMMBJIFKJON; // 0x20
		::System::Boolean IONEGBLBPEA; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single CAGKLHHHCJK; // 0x2C
		static ::System::Int32* StaticGet_LPPOAPGGCBK()
		{
			return (::System::Int32*)UnitySDK::FromName("", "JODABDCOPOP")->GetStaticField(0x7E70);
		}

		::System::Void _ctor(::RPG::GameCore::TaskContext* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*))((::PBYTE)hIl2Cpp + JODABDCOPOP_CTOR_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JODABDCOPOP_TICK_OFFSET))(this, a1);
		}

		::System::Void PDCHABCBEEO(::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IEnumerable_1<::RPG::GameCore::TaskConfig*>*))((::PBYTE)hIl2Cpp + JODABDCOPOP_PDCHABCBEEO_OFFSET))(this, a1);
		}

		::System::Void INFHHPFKMMG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODABDCOPOP_INFHHPFKMMG_OFFSET))(this);
		}

		::System::Single GNCDPGGMJFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JODABDCOPOP_GNCDPGGMJFJ_OFFSET))(this);
		}

		::System::Void LEDGOAALHOL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JODABDCOPOP_LEDGOAALHOL_OFFSET))(this, a1);
		}

		::System::Void CJHKDGIIOJM(::EKFMIDBJDIA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EKFMIDBJDIA*))((::PBYTE)hIl2Cpp + JODABDCOPOP_CJHKDGIIOJM_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODABDCOPOP_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODABDCOPOP_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JODABDCOPOP_ONTASKRESET_OFFSET))(this);
		}

	};
