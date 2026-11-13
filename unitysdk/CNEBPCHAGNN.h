#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNEBPCHAGNN_RF_RPGDemoBallComponent.h"
#include "unitysdk/RPG/Client/LittleGameShare/ReplicationFlag.h"
#include "unitysdk/System/Object.h"
class AEDGBKOJEFD;
class LNHACPACCKH;

#define CNEBPCHAGNN_CKKPKNGLOOG_OFFSET UNITYSDK_OFFSET(0x17037850)
#define CNEBPCHAGNN_CTOR_OFFSET UNITYSDK_OFFSET(0x1BA5E320)
#define CNEBPCHAGNN_FCHMADJPDOM_OFFSET UNITYSDK_OFFSET(0x1BA5E280)
#define CNEBPCHAGNN_IHLCKDJPLCF_OFFSET UNITYSDK_OFFSET(0x170455E0)
#define CNEBPCHAGNN_KOPHIMBLMNK_OFFSET UNITYSDK_OFFSET(0x170455F0)
#define CNEBPCHAGNN_LBIHOLKGMIB_OFFSET UNITYSDK_OFFSET(0x1BA5E000)
#define CNEBPCHAGNN_MFDMIPEEGHG_OFFSET UNITYSDK_OFFSET(0x1BA5DFB0)
#define CNEBPCHAGNN_NALIIADEEMO_OFFSET UNITYSDK_OFFSET(0x1BA5E220)
#define CNEBPCHAGNN_NBLPPFGNHHO_OFFSET UNITYSDK_OFFSET(0x1BA5E2D0)
#define CNEBPCHAGNN_NJKHGPCDAMI_OFFSET UNITYSDK_OFFSET(0x1BA5E130)
#define CNEBPCHAGNN_NOJIPMKAGON_OFFSET UNITYSDK_OFFSET(0x170455A0)
#define CNEBPCHAGNN_PNJODACLLPH_OFFSET UNITYSDK_OFFSET(0x17045590)

inline static constexpr unsigned int CNEBPCHAGNN_TypeDefinitionIndex = 38106;

	class CNEBPCHAGNN : public ::System::Object
	{
	public:
		::CNEBPCHAGNN_RF_RPGDemoBallComponent HFKLFHBEDEM; // 0x10
		::System::Boolean NGDCPOGLJHH; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single PHPKIPNNKLI; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_CTOR_OFFSET))(this);
		}

		::System::Boolean PNJODACLLPH()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_PNJODACLLPH_OFFSET))(this);
		}

		::System::Void NOJIPMKAGON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_NOJIPMKAGON_OFFSET))(this);
		}

		::System::Single IHLCKDJPLCF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_IHLCKDJPLCF_OFFSET))(this);
		}

		::System::Void CKKPKNGLOOG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_CKKPKNGLOOG_OFFSET))(this, a1);
		}

		::System::Boolean KOPHIMBLMNK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_KOPHIMBLMNK_OFFSET))(this);
		}

		::System::Void MFDMIPEEGHG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_MFDMIPEEGHG_OFFSET))(this, a1);
		}

		::System::Void LBIHOLKGMIB(::AEDGBKOJEFD* a1, ::RPG::Client::LittleGameShare::ReplicationFlag a2)
		{
			return ((::System::Void(*)(::PVOID, ::AEDGBKOJEFD*, ::RPG::Client::LittleGameShare::ReplicationFlag))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_LBIHOLKGMIB_OFFSET))(this, a1, a2);
		}

		::System::Void NJKHGPCDAMI(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_NJKHGPCDAMI_OFFSET))(this, a1);
		}

		::System::Void NALIIADEEMO(::LNHACPACCKH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LNHACPACCKH*))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_NALIIADEEMO_OFFSET))(this, a1);
		}

		::System::Boolean FCHMADJPDOM(::CNEBPCHAGNN_RF_RPGDemoBallComponent a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::CNEBPCHAGNN_RF_RPGDemoBallComponent))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_FCHMADJPDOM_OFFSET))(this, a1);
		}

		::System::Boolean NBLPPFGNHHO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CNEBPCHAGNN_NBLPPFGNHHO_OFFSET))(this);
		}

	};
