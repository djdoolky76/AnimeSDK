#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class EJFDBAPPMDM;

#define EJFDBAPPMDM_BJHPHLBNMHM_OFFSET UNITYSDK_OFFSET(0x1DD3C4A0)
#define EJFDBAPPMDM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DD3AAB0)
#define EJFDBAPPMDM_CFGNCEFEKPA_OFFSET UNITYSDK_OFFSET(0x1DD3B010)
#define EJFDBAPPMDM_CPCDICGNHDO_1_OFFSET UNITYSDK_OFFSET(0x1DD3B090)
#define EJFDBAPPMDM_CPCDICGNHDO_OFFSET UNITYSDK_OFFSET(0x1DD3B050)
#define EJFDBAPPMDM_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1DD3AC30)
#define EJFDBAPPMDM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD3AC50)
#define EJFDBAPPMDM_DCIJEAGHIOA_OFFSET UNITYSDK_OFFSET(0x1DD3C630)
#define EJFDBAPPMDM_DKMDOANCPAO_OFFSET UNITYSDK_OFFSET(0x1DD3B280)
#define EJFDBAPPMDM_DNCEOCKCOHA_OFFSET UNITYSDK_OFFSET(0x1DD3AD70)
#define EJFDBAPPMDM_DOGJNAOCOBN_OFFSET UNITYSDK_OFFSET(0x1DD3B490)
#define EJFDBAPPMDM_HBGCLKCCOOE_1_OFFSET UNITYSDK_OFFSET(0x1DD3B190)
#define EJFDBAPPMDM_HBGCLKCCOOE_OFFSET UNITYSDK_OFFSET(0x1DD3B140)
#define EJFDBAPPMDM_HLJOGLEHHGC_OFFSET UNITYSDK_OFFSET(0x1DD3B310)
#define EJFDBAPPMDM_JIFPPKNBGMH_OFFSET UNITYSDK_OFFSET(0x1DD3ADB0)
#define EJFDBAPPMDM_KELNBBLDKAL_OFFSET UNITYSDK_OFFSET(0x1DD3B2C0)
#define EJFDBAPPMDM_KIHGJBLCJCJ_1_OFFSET UNITYSDK_OFFSET(0x1DD3C2B0)
#define EJFDBAPPMDM_KIHGJBLCJCJ_OFFSET UNITYSDK_OFFSET(0x1DD3C1A0)
#define EJFDBAPPMDM_KKNNLILHBDK_1_OFFSET UNITYSDK_OFFSET(0x1DD3ADD0)
#define EJFDBAPPMDM_KKNNLILHBDK_2_OFFSET UNITYSDK_OFFSET(0x1DD3AE30)
#define EJFDBAPPMDM_KKNNLILHBDK_OFFSET UNITYSDK_OFFSET(0x1DD3AD30)
#define EJFDBAPPMDM_KPDCKFPHFCF_OFFSET UNITYSDK_OFFSET(0x1DD3BA10)
#define EJFDBAPPMDM_LCKCABJFHEA_OFFSET UNITYSDK_OFFSET(0x1DD3AD90)
#define EJFDBAPPMDM_LFNLJJFOKNF_OFFSET UNITYSDK_OFFSET(0x1DD3B240)
#define EJFDBAPPMDM_LKKKJIANGNP_OFFSET UNITYSDK_OFFSET(0x1DD3C3E0)
#define EJFDBAPPMDM_MJJNNKDIEGD_OFFSET UNITYSDK_OFFSET(0x1DD3AFD0)
#define EJFDBAPPMDM_NBEKOLIEEPA_OFFSET UNITYSDK_OFFSET(0x1DD3B360)
#define EJFDBAPPMDM_NJNHEMHNJBD_OFFSET UNITYSDK_OFFSET(0x1DD3B870)
#define EJFDBAPPMDM_PDBNEGMIFAP_OFFSET UNITYSDK_OFFSET(0x1DD3AF00)
#define EJFDBAPPMDM_PNDMINMOEGN_1_OFFSET UNITYSDK_OFFSET(0x1DD3C8B0)
#define EJFDBAPPMDM_PNDMINMOEGN_OFFSET UNITYSDK_OFFSET(0x1DD3C770)

inline static constexpr unsigned int EJFDBAPPMDM_TypeDefinitionIndex = 6259;

	class EJFDBAPPMDM : public ::System::Object
	{
	public:
		::System::UInt32 JJJEIGOBHEM; // 0x10
		::System::UInt32 KJIKJLPNHGO; // 0x14
		::System::UInt32 HONIJDKDBGJ; // 0x18
		::System::UInt32 AJJDDMNIFMF; // 0x1C
		static ::EJFDBAPPMDM** StaticGet_FMJPMFEDIJL()
		{
			return (::EJFDBAPPMDM**)UnitySDK::FromName("", "EJFDBAPPMDM")->GetStaticField(0x24190);
		}

		static ::EJFDBAPPMDM** StaticGet_JNLHIMNBDFH()
		{
			return (::EJFDBAPPMDM**)UnitySDK::FromName("", "EJFDBAPPMDM")->GetStaticField(0x24198);
		}

		// static const ::System::Object FPELNCKEOKC; // 0x0
		// static const ::System::Object CNOKOICCKCE; // 0x0
		// static const ::System::Object MDDJDEINLPM; // 0x0
		// static const ::System::Object FBFLBAIAELD; // 0x0
		// static const ::System::Object JGFLODCMNHB; // 0x0
		// static const ::System::Object MKHEDEFMDFP; // 0x0
		// static const ::System::Object GIELHLELOAA; // 0x0
		// static const ::System::Object BDKCAOLNIGB; // 0x0
		// static const ::System::Object IINFPKBHDAG; // 0x0
		// static const ::System::Object KBJEKJJLBFG; // 0x0
		// static const ::System::Object JIFKMPADHDF; // 0x0
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void DNCEOCKCOHA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_DNCEOCKCOHA_OFFSET))(this, a1);
		}

		::System::Void LCKCABJFHEA(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_LCKCABJFHEA_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void JIFPPKNBGMH(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3, ::System::UInt32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_JIFPPKNBGMH_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Int32 KKNNLILHBDK()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KKNNLILHBDK_OFFSET))(this);
		}

		::System::Int32 KKNNLILHBDK_1(::System::Int32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KKNNLILHBDK_1_OFFSET))(this, a1);
		}

		::System::Int32 KKNNLILHBDK_2(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KKNNLILHBDK_2_OFFSET))(this, a1, a2);
		}

		::System::Int32 PDBNEGMIFAP(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_PDBNEGMIFAP_OFFSET))(this, a1, a2);
		}

		::System::Int32 MJJNNKDIEGD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_MJJNNKDIEGD_OFFSET))(this);
		}

		::System::UInt32 CFGNCEFEKPA()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CFGNCEFEKPA_OFFSET))(this);
		}

		::System::Double CPCDICGNHDO()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CPCDICGNHDO_OFFSET))(this);
		}

		::System::Double CPCDICGNHDO_1(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_CPCDICGNHDO_1_OFFSET))(this, a1, a2);
		}

		::System::Single HBGCLKCCOOE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_HBGCLKCCOOE_OFFSET))(this);
		}

		::System::Single HBGCLKCCOOE_1(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_HBGCLKCCOOE_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean LFNLJJFOKNF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_LFNLJJFOKNF_OFFSET))(this);
		}

		::System::Byte DKMDOANCPAO()
		{
			return ((::System::Byte(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_DKMDOANCPAO_OFFSET))(this);
		}

		::System::Single KELNBBLDKAL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KELNBBLDKAL_OFFSET))(this);
		}

		::System::Single HLJOGLEHHGC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_HLJOGLEHHGC_OFFSET))(this);
		}

		::RPG::MVector2 NBEKOLIEEPA(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_NBEKOLIEEPA_OFFSET))(this, a1);
		}

		::RPG::MVector2 DOGJNAOCOBN(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_DOGJNAOCOBN_OFFSET))(this, a1);
		}

		::RPG::MVector3 NJNHEMHNJBD(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_NJNHEMHNJBD_OFFSET))(this, a1);
		}

		::RPG::MVector3 KPDCKFPHFCF(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KPDCKFPHFCF_OFFSET))(this, a1);
		}

		::RPG::MVector2 KIHGJBLCJCJ(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KIHGJBLCJCJ_OFFSET))(this, a1);
		}

		::RPG::MVector2 KIHGJBLCJCJ_1(::System::Single a1, ::System::Single a2)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_KIHGJBLCJCJ_1_OFFSET))(this, a1, a2);
		}

		::RPG::MVector2 LKKKJIANGNP(::System::Single a1)
		{
			return ((::RPG::MVector2(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_LKKKJIANGNP_OFFSET))(this, a1);
		}

		::RPG::MVector3 BJHPHLBNMHM(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_BJHPHLBNMHM_OFFSET))(this, a1);
		}

		::RPG::MVector3 DCIJEAGHIOA(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_DCIJEAGHIOA_OFFSET))(this, a1);
		}

		::RPG::MVector3 PNDMINMOEGN(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_PNDMINMOEGN_OFFSET))(this, a1, a2, a3);
		}

		::RPG::MVector3 PNDMINMOEGN_1(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::RPG::MVector3 a3)
		{
			return ((::RPG::MVector3(*)(::PVOID, ::RPG::MVector3, ::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + EJFDBAPPMDM_PNDMINMOEGN_1_OFFSET))(this, a1, a2, a3);
		}

	};
