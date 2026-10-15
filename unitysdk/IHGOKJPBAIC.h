#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IHGOKJPBAIC_RF_PredicateComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define IHGOKJPBAIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6D82C0)
#define IHGOKJPBAIC_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1C6D8220)
#define IHGOKJPBAIC_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1C6D80F0)
#define IHGOKJPBAIC_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1C6D8190)
#define IHGOKJPBAIC_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1C6D8270)
#define IHGOKJPBAIC_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1C6D8140)
#define IHGOKJPBAIC_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x1C6D80B0)
#define IHGOKJPBAIC_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x1C6D80A0)

inline static constexpr unsigned int IHGOKJPBAIC_TypeDefinitionIndex = 36836;

	class IHGOKJPBAIC : public ::System::Object
	{
	public:
		::IHGOKJPBAIC_RF_PredicateComponent HFKLFHBEDEM; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::IHGOKJPBAIC_RF_PredicateComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::IHGOKJPBAIC_RF_PredicateComponent))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGOKJPBAIC_NBLPPFGNHHO_OFFSET))(this);
		}

	};
