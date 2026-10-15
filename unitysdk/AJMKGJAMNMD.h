#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FourRotateVoxelCameraDirectionMask.h"
#include "unitysdk/System/Object.h"
class BABNOKHOBCF;
class INMMPMDELKE;
class MNCOPNHONHO;
namespace Entitas { template <typename T> class IGroup_1; }
namespace RPG::Client { class RPGProfilerMarkerWithIntData; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AJMKGJAMNMD_CBGIEHNOGGC_OFFSET UNITYSDK_OFFSET(0x12CC2960)
#define AJMKGJAMNMD_CCTOR_OFFSET UNITYSDK_OFFSET(0x12CC2CA0)
#define AJMKGJAMNMD_CKLNEDLEAEB_OFFSET UNITYSDK_OFFSET(0x12CC1810)
#define AJMKGJAMNMD_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC0F40)
#define AJMKGJAMNMD_EXECUTE_OFFSET UNITYSDK_OFFSET(0x12CC1C80)
#define AJMKGJAMNMD_GBKJDANACMM_OFFSET UNITYSDK_OFFSET(0x12CC24C0)
#define AJMKGJAMNMD_HBGFFIMHJBK_OFFSET UNITYSDK_OFFSET(0x12CC2000)
#define AJMKGJAMNMD_HGKHOBDLGAN_OFFSET UNITYSDK_OFFSET(0x12CC20A0)
#define AJMKGJAMNMD_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x12CC10D0)
#define AJMKGJAMNMD_JHBJFGADLEI_OFFSET UNITYSDK_OFFSET(0x12CC1310)
#define AJMKGJAMNMD_KKHINELJOAD_OFFSET UNITYSDK_OFFSET(0x12CC27D0)
#define AJMKGJAMNMD_LHMCCKPHNAP_OFFSET UNITYSDK_OFFSET(0x12CC1290)
#define AJMKGJAMNMD_MEPLDBFBOPE_OFFSET UNITYSDK_OFFSET(0x12CC21F0)
#define AJMKGJAMNMD_MNCFGDLINJB_OFFSET UNITYSDK_OFFSET(0x12CC2C20)
#define AJMKGJAMNMD_OCCOPPKLBBN_OFFSET UNITYSDK_OFFSET(0x12CC22D0)

inline static constexpr unsigned int AJMKGJAMNMD_TypeDefinitionIndex = 76813;

	class AJMKGJAMNMD : public ::System::Object
	{
	public:
		::Entitas::IGroup_1<::INMMPMDELKE*>* CJKEOKDMINK; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Boolean>* AOOEKNAAKBH; // 0x18
		::MNCOPNHONHO* PDENFEFCAGN; // 0x20
		::System::Collections::Generic::List_1<::INMMPMDELKE*>* CFNLBDCGGOC; // 0x28
		::BABNOKHOBCF* FKINCGODJEP; // 0x30
		::System::Int32 KKHAOECDOEC; // 0x38
		::System::Boolean FHACDJADCEK; // 0x3C
		::System::Boolean MOOFJKJEPKD; // 0x3D
		::System::Boolean CMIJNMIOLMA; // 0x3E
		::System::Byte _padding0[0x1];
		::System::Int32 ENLILBBFANB; // 0x40
		::System::Int32 OOLMHABGKPC; // 0x44
		::System::Int32 JEGDCHEIEAK; // 0x48
		static ::RPG::Client::RPGProfilerMarkerWithIntData** StaticGet_CFBBDBLLJHG()
		{
			return (::RPG::Client::RPGProfilerMarkerWithIntData**)UnitySDK::FromName("", "AJMKGJAMNMD")->GetStaticField(0x57430);
		}

		::System::Void _ctor(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJMKGJAMNMD_CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_INITIALIZE_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_EXECUTE_OFFSET))(this);
		}

		::System::Void JHBJFGADLEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_JHBJFGADLEI_OFFSET))(this);
		}

		::System::Void CKLNEDLEAEB(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_CKLNEDLEAEB_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean HGKHOBDLGAN(::INMMPMDELKE* a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::System::Boolean))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_HGKHOBDLGAN_OFFSET))(this, a1, a2);
		}

		::System::Boolean MEPLDBFBOPE(::INMMPMDELKE* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_MEPLDBFBOPE_OFFSET))(this, a1);
		}

		::System::Boolean OCCOPPKLBBN(::INMMPMDELKE* a1, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a2, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a3, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask a4, ::System::Boolean a5)
		{
			return ((::System::Boolean(*)(::PVOID, ::INMMPMDELKE*, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::RPG::GameCore::FourRotateVoxelCameraDirectionMask, ::System::Boolean))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_OCCOPPKLBBN_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::GameCore::FourRotateVoxelCameraDirectionMask HBGFFIMHJBK(::System::Int32 a1)
		{
			return ((::RPG::GameCore::FourRotateVoxelCameraDirectionMask(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_HBGFFIMHJBK_OFFSET))(this, a1);
		}

		::System::Boolean LHMCCKPHNAP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_LHMCCKPHNAP_OFFSET))(this, a1);
		}

		::System::Boolean GBKJDANACMM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_GBKJDANACMM_OFFSET))(this, a1);
		}

		::System::Boolean KKHINELJOAD(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_KKHINELJOAD_OFFSET))(this, a1);
		}

		::System::Boolean CBGIEHNOGGC(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_CBGIEHNOGGC_OFFSET))(this, a1);
		}

		::System::Int32 MNCFGDLINJB(::System::Single a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJMKGJAMNMD_MNCFGDLINJB_OFFSET))(this, a1);
		}

	};
