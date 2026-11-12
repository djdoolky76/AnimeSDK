#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MEHEPKNJPOA_FANDKJFOLKB.h"
class ABDOMMLHNBC;
class CFALFIPEHJH;
namespace RPG::Client::ParkourGame { class ParkourSkillConfig_SuperStar; }

#define MEHEPKNJPOA_BEIIPGBDCOL_CCTOR_OFFSET UNITYSDK_OFFSET(0xC181430)
#define MEHEPKNJPOA_BEIIPGBDCOL_CTOR_OFFSET UNITYSDK_OFFSET(0xC180070)
#define MEHEPKNJPOA_BEIIPGBDCOL_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC180C20)
#define MEHEPKNJPOA_BEIIPGBDCOL_FFADPIDAGLJ_OFFSET UNITYSDK_OFFSET(0xC1811B0)
#define MEHEPKNJPOA_BEIIPGBDCOL_GET_MAXDURATION_OFFSET UNITYSDK_OFFSET(0xC181420)
#define MEHEPKNJPOA_BEIIPGBDCOL_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xC180F50)
#define MEHEPKNJPOA_BEIIPGBDCOL_NPAFMEBNFOB_OFFSET UNITYSDK_OFFSET(0xC180360)

inline static constexpr unsigned int MEHEPKNJPOA_BEIIPGBDCOL_TypeDefinitionIndex = 76324;

	class MEHEPKNJPOA_BEIIPGBDCOL : public ::MEHEPKNJPOA_FANDKJFOLKB
	{
	public:
		::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* EABKOHGCHFP; // 0x28
		::System::Single _MaxDuration_k__BackingField; // 0x30
		static ::System::Int32* StaticGet_INCFEIDEIBO()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BEIIPGBDCOL")->GetStaticField(0x15EE0);
		}

		static ::System::Int32* StaticGet_MDONPCCPPII()
		{
			return (::System::Int32*)UnitySDK::FromName("", "BEIIPGBDCOL")->GetStaticField(0x15EE4);
		}

		::System::Void _ctor(::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::ParkourGame::ParkourSkillConfig_SuperStar*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_DISPOSE_OFFSET))(this);
		}

		::System::Void NPAFMEBNFOB(::CFALFIPEHJH* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CFALFIPEHJH*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_NPAFMEBNFOB_OFFSET))(this, a1);
		}

		::System::Void LJOLGCNKIEH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_LJOLGCNKIEH_OFFSET))(this, a1);
		}

		::System::Void FFADPIDAGLJ(::ABDOMMLHNBC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ABDOMMLHNBC*))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_FFADPIDAGLJ_OFFSET))(this, a1);
		}

		::System::Single get_MaxDuration()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MEHEPKNJPOA_BEIIPGBDCOL_GET_MAXDURATION_OFFSET))(this);
		}

	};
