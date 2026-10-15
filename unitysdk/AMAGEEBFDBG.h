#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BaseModule.h"
class AFMMLCHNCDM;
class DBNGNLBAOAG;
class IDBHBJKEBLK;
class PKBDEEGKBLK;
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Object; }

#define AMAGEEBFDBG_CTOR_OFFSET UNITYSDK_OFFSET(0x15572D40)
#define AMAGEEBFDBG_DISPOSE_OFFSET UNITYSDK_OFFSET(0x155728A0)
#define AMAGEEBFDBG_GET_ACTIVESEASON_OFFSET UNITYSDK_OFFSET(0x15572540)
#define AMAGEEBFDBG_GET_CONFIGINFO_OFFSET UNITYSDK_OFFSET(0x15572500)
#define AMAGEEBFDBG_GET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x15572580)
#define AMAGEEBFDBG_GET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x15572560)
#define AMAGEEBFDBG_GET_PRIZEINFO_OFFSET UNITYSDK_OFFSET(0x15572520)
#define AMAGEEBFDBG_INIT_OFFSET UNITYSDK_OFFSET(0x155725A0)
#define AMAGEEBFDBG_MHCNPJPBPKO_OFFSET UNITYSDK_OFFSET(0x15572C90)
#define AMAGEEBFDBG_NNJLFIONLFH_OFFSET UNITYSDK_OFFSET(0x15572960)
#define AMAGEEBFDBG_OKMFJHJEFBE_OFFSET UNITYSDK_OFFSET(0x15572AE0)
#define AMAGEEBFDBG_SET_ACTIVESEASON_OFFSET UNITYSDK_OFFSET(0x15572550)
#define AMAGEEBFDBG_SET_CONFIGINFO_OFFSET UNITYSDK_OFFSET(0x15572510)
#define AMAGEEBFDBG_SET_ISDATAREADY_OFFSET UNITYSDK_OFFSET(0x15572590)
#define AMAGEEBFDBG_SET_NETWORKSERVICE_OFFSET UNITYSDK_OFFSET(0x15572570)
#define AMAGEEBFDBG_SET_PRIZEINFO_OFFSET UNITYSDK_OFFSET(0x15572530)
#define AMAGEEBFDBG__ADDNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x155727D0)
#define AMAGEEBFDBG__INIT_B__21_0_OFFSET UNITYSDK_OFFSET(0x15572D60)

inline static constexpr unsigned int AMAGEEBFDBG_TypeDefinitionIndex = 61396;

	class AMAGEEBFDBG : public ::RPG::Client::BaseModule
	{
	public:
		::PKBDEEGKBLK* _NetworkService_k__BackingField; // 0x10
		::RPG::Client::Promises::Promise* CAKJBCNLCFC; // 0x18
		::IDBHBJKEBLK* _ConfigInfo_k__BackingField; // 0x20
		::AFMMLCHNCDM* _PrizeInfo_k__BackingField; // 0x28
		::DBNGNLBAOAG* _ActiveSeason_k__BackingField; // 0x30
		::System::Boolean _IsDataReady_k__BackingField; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_CTOR_OFFSET))(this);
		}

		::IDBHBJKEBLK* get_ConfigInfo()
		{
			return ((::IDBHBJKEBLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_GET_CONFIGINFO_OFFSET))(this);
		}

		::System::Void set_ConfigInfo(::IDBHBJKEBLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IDBHBJKEBLK*))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_SET_CONFIGINFO_OFFSET))(this, a1);
		}

		::AFMMLCHNCDM* get_PrizeInfo()
		{
			return ((::AFMMLCHNCDM*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_GET_PRIZEINFO_OFFSET))(this);
		}

		::System::Void set_PrizeInfo(::AFMMLCHNCDM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AFMMLCHNCDM*))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_SET_PRIZEINFO_OFFSET))(this, a1);
		}

		::DBNGNLBAOAG* get_ActiveSeason()
		{
			return ((::DBNGNLBAOAG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_GET_ACTIVESEASON_OFFSET))(this);
		}

		::System::Void set_ActiveSeason(::DBNGNLBAOAG* a1)
		{
			return ((::System::Void(*)(::PVOID, ::DBNGNLBAOAG*))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_SET_ACTIVESEASON_OFFSET))(this, a1);
		}

		::PKBDEEGKBLK* get_NetworkService()
		{
			return ((::PKBDEEGKBLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_GET_NETWORKSERVICE_OFFSET))(this);
		}

		::System::Void set_NetworkService(::PKBDEEGKBLK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PKBDEEGKBLK*))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_SET_NETWORKSERVICE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDataReady()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_GET_ISDATAREADY_OFFSET))(this);
		}

		::System::Void set_IsDataReady(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_SET_ISDATAREADY_OFFSET))(this, a1);
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_INIT_OFFSET))(this);
		}

		::System::Void _AddNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG__ADDNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_DISPOSE_OFFSET))(this);
		}

		::System::Void NNJLFIONLFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_NNJLFIONLFH_OFFSET))(this);
		}

		::System::Void OKMFJHJEFBE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_OKMFJHJEFBE_OFFSET))(this, a1);
		}

		::RPG::Client::Promises::IPromise* MHCNPJPBPKO()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG_MHCNPJPBPKO_OFFSET))(this);
		}

		::System::Void _Init_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMAGEEBFDBG__INIT_B__21_0_OFFSET))(this);
		}

	};
