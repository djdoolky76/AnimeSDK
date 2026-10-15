#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NBEKHGCNJFD.h"
#include "unitysdk/RPG/Client/SwordTraining/SwordTrainingGameStateType.h"
class ECPHOKOPKBP;
namespace RPG::Client { class SwordTrainingGameInstance; }
namespace System { class Object; }

#define OODDNAHKBIO_ANPDFDKEHIB_OFFSET UNITYSDK_OFFSET(0xBF6AC70)
#define OODDNAHKBIO_AOCGPPJGIPF_OFFSET UNITYSDK_OFFSET(0xBF6A690)
#define OODDNAHKBIO_BJLJAHMLKIO_OFFSET UNITYSDK_OFFSET(0xBF6B5F0)
#define OODDNAHKBIO_CEKPGIFMKIL_OFFSET UNITYSDK_OFFSET(0xBF6A860)
#define OODDNAHKBIO_CEPBDJMMFLC_OFFSET UNITYSDK_OFFSET(0xBF6B270)
#define OODDNAHKBIO_CTOR_OFFSET UNITYSDK_OFFSET(0xBF6A6D0)
#define OODDNAHKBIO_FFKBFPKEPEN_OFFSET UNITYSDK_OFFSET(0xBF6AB50)
#define OODDNAHKBIO_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xBF6AB00)
#define OODDNAHKBIO_KOHOGMCJHBH_OFFSET UNITYSDK_OFFSET(0xBF6B690)
#define OODDNAHKBIO_LDIKDGHPCCL_OFFSET UNITYSDK_OFFSET(0xBF6B370)
#define OODDNAHKBIO_MPHFKAOBHAL_OFFSET UNITYSDK_OFFSET(0xBF6AF80)
#define OODDNAHKBIO___ONBATTLEFINISHED_B__10_0_OFFSET UNITYSDK_OFFSET(0xBF6B710)

inline static constexpr unsigned int OODDNAHKBIO_TypeDefinitionIndex = 75053;

	class OODDNAHKBIO : public ::NBEKHGCNJFD
	{
	public:
		::System::Boolean CKIDNGAAPPB; // 0x28
		::System::Boolean BMACMHIHDNP; // 0x29
		::System::Boolean DBPCILLOFDP; // 0x2A
		::System::Byte _padding0[0x1];
		::System::UInt32 EDAOBLALAEH; // 0x2C
		::System::Void _ctor(::ECPHOKOPKBP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::ECPHOKOPKBP*))((::PBYTE)hIl2Cpp + OODDNAHKBIO_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean AOCGPPJGIPF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_AOCGPPJGIPF_OFFSET))(this);
		}

		::RPG::Client::SwordTraining::SwordTrainingGameStateType JKOKFFCBJLJ()
		{
			return ((::RPG::Client::SwordTraining::SwordTrainingGameStateType(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_JKOKFFCBJLJ_OFFSET))(this);
		}

		::System::Void FFKBFPKEPEN(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + OODDNAHKBIO_FFKBFPKEPEN_OFFSET))(this, a1);
		}

		::System::Void ANPDFDKEHIB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_ANPDFDKEHIB_OFFSET))(this);
		}

		::System::Void MPHFKAOBHAL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OODDNAHKBIO_MPHFKAOBHAL_OFFSET))(this, a1);
		}

		::System::Void CEPBDJMMFLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_CEPBDJMMFLC_OFFSET))(this);
		}

		::System::Void LDIKDGHPCCL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OODDNAHKBIO_LDIKDGHPCCL_OFFSET))(this, a1);
		}

		::System::Void BJLJAHMLKIO(::RPG::Client::SwordTrainingGameInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::SwordTrainingGameInstance*))((::PBYTE)hIl2Cpp + OODDNAHKBIO_BJLJAHMLKIO_OFFSET))(this, a1);
		}

		::System::Void KOHOGMCJHBH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_KOHOGMCJHBH_OFFSET))(this);
		}

		::System::Void CEKPGIFMKIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO_CEKPGIFMKIL_OFFSET))(this);
		}

		::System::Void __OnBattleFinished_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OODDNAHKBIO___ONBATTLEFINISHED_B__10_0_OFFSET))(this);
		}

	};
