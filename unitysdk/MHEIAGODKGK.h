#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PIDNKDBOJHD;
namespace RPG::GameCore { class TAMonoTickLodConfig; }
namespace RPG::GameCore { class TAMonoTickLodTemplate; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MHEIAGODKGK_CTOR_OFFSET UNITYSDK_OFFSET(0xB934070)
#define MHEIAGODKGK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB933FC0)
#define MHEIAGODKGK_FICJHFIFIFA_OFFSET UNITYSDK_OFFSET(0xB933F00)
#define MHEIAGODKGK_LDBMFCMJBMO_OFFSET UNITYSDK_OFFSET(0xB933D30)
#define MHEIAGODKGK_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0xB933B20)

inline static constexpr unsigned int MHEIAGODKGK_TypeDefinitionIndex = 73982;

	class MHEIAGODKGK : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TAMonoTickLodTemplate*>* OHJMJNBIAJL; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::PIDNKDBOJHD*>* PEBDCPDBOJJ; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEIAGODKGK_CTOR_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::RPG::GameCore::TAMonoTickLodConfig* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TAMonoTickLodConfig*, ::System::Int32))((::PBYTE)hIl2Cpp + MHEIAGODKGK_OINBDMGFFJL_OFFSET))(this, a1, a2);
		}

		::System::Void LDBMFCMJBMO(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MHEIAGODKGK_LDBMFCMJBMO_OFFSET))(this, a1);
		}

		::PIDNKDBOJHD* FICJHFIFIFA(::System::String* a1)
		{
			return ((::PIDNKDBOJHD*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MHEIAGODKGK_FICJHFIFIFA_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHEIAGODKGK_DISPOSE_OFFSET))(this);
		}

	};
