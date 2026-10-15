#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMNEDLJOPNM.h"
#include "unitysdk/RPG/GameCore/CakeRaceTargetLockStatus.h"
#include "unitysdk/System/ValueTuple_3.h"
class ENDBKLKOBFP;
class IFBFJDCECML;
class NKGAIPKINJE;
class PBGNKMMDBGD;
class PFMAAAJFLOA;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define OOCLABBPIGD_ALOODOIDANH_OFFSET UNITYSDK_OFFSET(0x1C7B6A80)
#define OOCLABBPIGD_CABDHIDNJOA_OFFSET UNITYSDK_OFFSET(0x1C7B6D30)
#define OOCLABBPIGD_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C7B71B0)
#define OOCLABBPIGD_COMCPJNNMEA_OFFSET UNITYSDK_OFFSET(0x1C7B7140)
#define OOCLABBPIGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C7B6270)
#define OOCLABBPIGD_FBEEACBNALL_OFFSET UNITYSDK_OFFSET(0x1C7B6E10)
#define OOCLABBPIGD_GBMJLLGNCHM_OFFSET UNITYSDK_OFFSET(0x1C7B70B0)
#define OOCLABBPIGD_GKKMIAGJJDG_OFFSET UNITYSDK_OFFSET(0x1C7B6B70)
#define OOCLABBPIGD_NDJEJBCEGNI_OFFSET UNITYSDK_OFFSET(0x1C7B7030)
#define OOCLABBPIGD_NDPFJMBAGJO_OFFSET UNITYSDK_OFFSET(0x1C7B6C80)
#define OOCLABBPIGD_OGAALHNOPON_OFFSET UNITYSDK_OFFSET(0x1C7B6F80)
#define OOCLABBPIGD_PBJLLKIPLIB_OFFSET UNITYSDK_OFFSET(0x1C7B68D0)
#define OOCLABBPIGD_PHANFIFHKCN_OFFSET UNITYSDK_OFFSET(0x1C7B62E0)

inline static constexpr unsigned int OOCLABBPIGD_TypeDefinitionIndex = 37240;

	class OOCLABBPIGD : public ::OMNEDLJOPNM
	{
	public:
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> FHOPKHBANGA; // 0x20
		::System::Byte _padding0[0x4];
		::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> IFMMJDPGEKL; // 0x2C
		static ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>* StaticGet_ACDAPIGIJNL()
		{
			return (::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>*)UnitySDK::FromName("", "OOCLABBPIGD")->GetStaticField(0x62E0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLABBPIGD_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OOCLABBPIGD_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceTargetLockStatus PHANFIFHKCN(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::UInt32 a3)
		{
			return ((::RPG::GameCore::CakeRaceTargetLockStatus(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::UInt32))((::PBYTE)hIl2Cpp + OOCLABBPIGD_PHANFIFHKCN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void ALOODOIDANH(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::System::Boolean))((::PBYTE)hIl2Cpp + OOCLABBPIGD_ALOODOIDANH_OFFSET))(this, a1, a2, a3);
		}

		::PFMAAAJFLOA* GKKMIAGJJDG(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2)
		{
			return ((::PFMAAAJFLOA*(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OOCLABBPIGD_GKKMIAGJJDG_OFFSET))(this, a1, a2);
		}

		::System::Void FBEEACBNALL(::IFBFJDCECML* a1, ::PBGNKMMDBGD* a2, ::RPG::GameCore::CakeRaceTargetLockStatus a3)
		{
			return ((::System::Void(*)(::PVOID, ::IFBFJDCECML*, ::PBGNKMMDBGD*, ::RPG::GameCore::CakeRaceTargetLockStatus))((::PBYTE)hIl2Cpp + OOCLABBPIGD_FBEEACBNALL_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean NDJEJBCEGNI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OOCLABBPIGD_NDJEJBCEGNI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>* GBMJLLGNCHM(::PBGNKMMDBGD* a1)
		{
			return ((::System::Collections::Generic::Dictionary_2<::RPG::GameCore::CakeRaceTargetLockStatus, ::System::Int32>*(*)(::PVOID, ::PBGNKMMDBGD*))((::PBYTE)hIl2Cpp + OOCLABBPIGD_GBMJLLGNCHM_OFFSET))(this, a1);
		}

		::NKGAIPKINJE* CABDHIDNJOA(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32> a1)
		{
			return ((::NKGAIPKINJE*(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>))((::PBYTE)hIl2Cpp + OOCLABBPIGD_CABDHIDNJOA_OFFSET))(this, a1);
		}

		::System::Boolean PBJLLKIPLIB(::PBGNKMMDBGD* a1, ::IFBFJDCECML* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::PBGNKMMDBGD*, ::IFBFJDCECML*))((::PBYTE)hIl2Cpp + OOCLABBPIGD_PBJLLKIPLIB_OFFSET))(this, a1, a2);
		}

		::System::Boolean COMCPJNNMEA(::ENDBKLKOBFP* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENDBKLKOBFP*))((::PBYTE)hIl2Cpp + OOCLABBPIGD_COMCPJNNMEA_OFFSET))(this, a1);
		}

		::System::Boolean NDPFJMBAGJO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLABBPIGD_NDPFJMBAGJO_OFFSET))(this);
		}

		::System::Boolean OGAALHNOPON()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OOCLABBPIGD_OGAALHNOPON_OFFSET))(this);
		}

	};
