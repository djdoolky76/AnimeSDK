#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FOEBKDEDOHL_RF_RaceModeInfoComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define FOEBKDEDOHL_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5F7F70)
#define FOEBKDEDOHL_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C5F7ED0)
#define FOEBKDEDOHL_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C5F7CD0)
#define FOEBKDEDOHL_LJCEMPIENBJ_OFFSET UNITYSDK_OFFSET(0x1C5F7C70)
#define FOEBKDEDOHL_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C5F7E70)
#define FOEBKDEDOHL_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C5F7F20)
#define FOEBKDEDOHL_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C5F7DC0)
#define FOEBKDEDOHL_NNKDKKMCGDH_OFFSET UNITYSDK_OFFSET(0x1C5F7C60)
#define FOEBKDEDOHL_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C5F7C20)
#define FOEBKDEDOHL_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C5F7C10)

inline static constexpr unsigned int FOEBKDEDOHL_TypeDefinitionIndex = 37101;

	class FOEBKDEDOHL : public ::System::Object
	{
	public:
		::System::UInt64 EBDBBAIFBBD; // 0x10
		::FOEBKDEDOHL_RF_RaceModeInfoComponent HFKLFHBEDEM; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_NOJIPMKAGON_OFFSET))(this);
		}

		::System::UInt64 NNKDKKMCGDH()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_NNKDKKMCGDH_OFFSET))(this);
		}

		::System::Void LJCEMPIENBJ(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_LJCEMPIENBJ_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::FOEBKDEDOHL_RF_RaceModeInfoComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FOEBKDEDOHL_RF_RaceModeInfoComponent))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOEBKDEDOHL_NBLPPFGNHHO_OFFSET))(this);
		}

	};
