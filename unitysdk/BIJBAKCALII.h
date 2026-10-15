#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BIJBAKCALII;
class GIAKECJMGIF;
namespace RPG::GameCore { class MazePuzzleSwitchMascotRow; }

#define BIJBAKCALII_ALJIOCDBMKO_OFFSET UNITYSDK_OFFSET(0xB4ADD60)
#define BIJBAKCALII_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB4ADCF0)
#define BIJBAKCALII_CJKMJKEODGJ_OFFSET UNITYSDK_OFFSET(0xB4AE0D0)
#define BIJBAKCALII_CTOR_OFFSET UNITYSDK_OFFSET(0xB4ADD50)
#define BIJBAKCALII_FHBKKGDMPOB_OFFSET UNITYSDK_OFFSET(0xB4ADDB0)
#define BIJBAKCALII_GET_COLLECTCOINNUM_OFFSET UNITYSDK_OFFSET(0xB4AE330)
#define BIJBAKCALII_GET_ID_OFFSET UNITYSDK_OFFSET(0xB4AE270)
#define BIJBAKCALII_JKMKCDHFEFN_OFFSET UNITYSDK_OFFSET(0xB4AE1D0)
#define BIJBAKCALII_JPIOIIPEKJB_OFFSET UNITYSDK_OFFSET(0xB4ADEB0)
#define BIJBAKCALII_KEEACCOMJCF_OFFSET UNITYSDK_OFFSET(0xB4ADF10)
#define BIJBAKCALII_KMDHKBIBMEG_OFFSET UNITYSDK_OFFSET(0xB4ADE70)
#define BIJBAKCALII_LGCDANAKMJH_OFFSET UNITYSDK_OFFSET(0xB4AE290)
#define BIJBAKCALII_PDAENODHFCM_OFFSET UNITYSDK_OFFSET(0xB4AE170)
#define BIJBAKCALII_SET_COLLECTCOINNUM_OFFSET UNITYSDK_OFFSET(0xB4AE340)
#define BIJBAKCALII_SET_ID_OFFSET UNITYSDK_OFFSET(0xB4AE280)

	class BIJBAKCALII : public ::System::Object
	{
	public:
		::System::UInt32 _CollectCoinNum_k__BackingField; // 0x10
		::System::UInt32 _ID_k__BackingField; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_CTOR_OFFSET))(this);
		}

		static ::BIJBAKCALII* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::BIJBAKCALII*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + BIJBAKCALII_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void ALJIOCDBMKO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIJBAKCALII_ALJIOCDBMKO_OFFSET))(this, a1);
		}

		::System::Boolean FHBKKGDMPOB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_FHBKKGDMPOB_OFFSET))(this);
		}

		::System::Boolean KEEACCOMJCF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BIJBAKCALII_KEEACCOMJCF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::UInt32 KMDHKBIBMEG()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_KMDHKBIBMEG_OFFSET))(this);
		}

		::System::UInt32 JPIOIIPEKJB()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_JPIOIIPEKJB_OFFSET))(this);
		}

		::System::UInt32 get_ID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_GET_ID_OFFSET))(this);
		}

		::System::Void set_ID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIJBAKCALII_SET_ID_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::UInt32>* LGCDANAKMJH()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_LGCDANAKMJH_OFFSET))(this);
		}

		::Il2CppArray<::System::UInt32>* CJKMJKEODGJ()
		{
			return ((::Il2CppArray<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_CJKMJKEODGJ_OFFSET))(this);
		}

		::Il2CppArray<::GIAKECJMGIF*>* JKMKCDHFEFN()
		{
			return ((::Il2CppArray<::GIAKECJMGIF*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_JKMKCDHFEFN_OFFSET))(this);
		}

		::System::UInt32 get_CollectCoinNum()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_GET_COLLECTCOINNUM_OFFSET))(this);
		}

		::System::Void set_CollectCoinNum(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + BIJBAKCALII_SET_COLLECTCOINNUM_OFFSET))(this, a1);
		}

		::RPG::GameCore::MazePuzzleSwitchMascotRow* PDAENODHFCM()
		{
			return ((::RPG::GameCore::MazePuzzleSwitchMascotRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIJBAKCALII_PDAENODHFCM_OFFSET))(this);
		}

	};
