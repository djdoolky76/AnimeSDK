#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
class KAJJEJMHCGD;
class LIKNJLCIAGI;

#define KAJJEJMHCGD_APKBIOMKAFI_1_OFFSET UNITYSDK_OFFSET(0x1C6DC300)
#define KAJJEJMHCGD_APKBIOMKAFI_OFFSET UNITYSDK_OFFSET(0x1C6DC130)
#define KAJJEJMHCGD_BFOKNNFMBDF_OFFSET UNITYSDK_OFFSET(0x1C6DB590)
#define KAJJEJMHCGD_CTOR_1_OFFSET UNITYSDK_OFFSET(0x1C6DC030)
#define KAJJEJMHCGD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C6DC020)
#define KAJJEJMHCGD_IAEKDNGGBEN_OFFSET UNITYSDK_OFFSET(0x1C6DC4B0)
#define KAJJEJMHCGD_NFLEIHFFHPB_1_OFFSET UNITYSDK_OFFSET(0x1C6DC390)
#define KAJJEJMHCGD_NFLEIHFFHPB_OFFSET UNITYSDK_OFFSET(0x1C6DC1D0)
#define KAJJEJMHCGD_PPEGOIODAKI_OFFSET UNITYSDK_OFFSET(0x1C6DC0B0)

inline static constexpr unsigned int KAJJEJMHCGD_TypeDefinitionIndex = 37251;

	class KAJJEJMHCGD : public ::System::Object
	{
	public:
		::System::UInt64 MFCHJFPOCIA; // 0x10
		::System::Int32 ALIKFDCKGJB; // 0x18
		::System::Int32 EBJKJAGJGPK; // 0x1C
		::RPG::MVector3 HKPKPOFIDAA; // 0x20
		::System::Int32 MOFEHOKGEJE; // 0x2C
		::System::Single NJDHHMLEHFL; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::KAJJEJMHCGD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::KAJJEJMHCGD*))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_CTOR_1_OFFSET))(this, a1);
		}

		::System::Void APKBIOMKAFI(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::UInt64 a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_APKBIOMKAFI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void NFLEIHFFHPB(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_NFLEIHFFHPB_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void APKBIOMKAFI_1(::RPG::MVector3 a1, ::System::UInt64 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::UInt64, ::System::Single))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_APKBIOMKAFI_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NFLEIHFFHPB_1(::RPG::MVector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::MVector3, ::System::Single))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_NFLEIHFFHPB_1_OFFSET))(this, a1, a2);
		}

		::KAJJEJMHCGD* PPEGOIODAKI(::KAJJEJMHCGD* a1)
		{
			return ((::KAJJEJMHCGD*(*)(::PVOID, ::KAJJEJMHCGD*))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_PPEGOIODAKI_OFFSET))(this, a1);
		}

		::System::Boolean BFOKNNFMBDF(::KAJJEJMHCGD* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::KAJJEJMHCGD*))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_BFOKNNFMBDF_OFFSET))(this, a1);
		}

		::System::Void IAEKDNGGBEN(::LIKNJLCIAGI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::LIKNJLCIAGI*))((::PBYTE)hIl2Cpp + KAJJEJMHCGD_IAEKDNGGBEN_OFFSET))(this, a1);
		}

	};
