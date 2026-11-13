#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BGJCBCCLIKF.h"
#include "unitysdk/BNCBBFAHOLO.h"
#include "unitysdk/GDHNBCOBAGP.h"
#include "unitysdk/GFFGEOIOGHJ.h"
#include "unitysdk/JAEKEBGFNIM.h"
#include "unitysdk/NBNEGKJDEIL.h"
#include "unitysdk/NDBNDAFONKL.h"
#include "unitysdk/NOPHIDPGBBI.h"
#include "unitysdk/OPLBFGAMDLB.h"
#include "unitysdk/RPG/GameCore/NihiluxElationUIType.h"
#include "unitysdk/System/Object.h"
class MLLHPMHAAPL;

#define POFCJAMEGHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0x184D5830)
#define POFCJAMEGHF_CCTOR_OFFSET UNITYSDK_OFFSET(0x184D5AB0)
#define POFCJAMEGHF_CTOR_OFFSET UNITYSDK_OFFSET(0x184D5AA0)
#define POFCJAMEGHF_GOPJOAEMDOB_OFFSET UNITYSDK_OFFSET(0x184D5A00)
#define POFCJAMEGHF_IEICNFLCPGG_OFFSET UNITYSDK_OFFSET(0x184D58A0)
#define POFCJAMEGHF_IHJHMKPFJLE_OFFSET UNITYSDK_OFFSET(0x184D5960)

inline static constexpr unsigned int POFCJAMEGHF_TypeDefinitionIndex = 74208;

	class POFCJAMEGHF : public ::System::Object
	{
	public:
		static ::BGJCBCCLIKF* StaticGet_ABHHKCLDNMH()
		{
			return (::BGJCBCCLIKF*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C0);
		}

		static ::JAEKEBGFNIM* StaticGet_GNHNENGNBOE()
		{
			return (::JAEKEBGFNIM*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C1);
		}

		static ::GDHNBCOBAGP* StaticGet_FOHJMEGFOLG()
		{
			return (::GDHNBCOBAGP*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C2);
		}

		static ::BNCBBFAHOLO* StaticGet_HIBLMJMGNNM()
		{
			return (::BNCBBFAHOLO*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C3);
		}

		static ::NBNEGKJDEIL* StaticGet_MEJAHBLFLGA()
		{
			return (::NBNEGKJDEIL*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C4);
		}

		static ::NDBNDAFONKL* StaticGet_ENHHLFGMOFF()
		{
			return (::NDBNDAFONKL*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C5);
		}

		static ::OPLBFGAMDLB* StaticGet_DPDPCBJMPEB()
		{
			return (::OPLBFGAMDLB*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C6);
		}

		static ::GFFGEOIOGHJ* StaticGet_NGOPCGHBDFE()
		{
			return (::GFFGEOIOGHJ*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C7);
		}

		static ::NOPHIDPGBBI* StaticGet_LCCKCIDLEIC()
		{
			return (::NOPHIDPGBBI*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x164C8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POFCJAMEGHF_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + POFCJAMEGHF_CCTOR_OFFSET))();
		}

		static ::MLLHPMHAAPL* BPLPBPMEODA(::System::Int32 a1, ::RPG::GameCore::NihiluxElationUIType a2)
		{
			return ((::MLLHPMHAAPL*(*)(::System::Int32, ::RPG::GameCore::NihiluxElationUIType))((::PBYTE)hIl2Cpp + POFCJAMEGHF_BPLPBPMEODA_OFFSET))(a1, a2);
		}

		static ::MLLHPMHAAPL* IHJHMKPFJLE(::System::Int32 a1)
		{
			return ((::MLLHPMHAAPL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + POFCJAMEGHF_IHJHMKPFJLE_OFFSET))(a1);
		}

		static ::MLLHPMHAAPL* IEICNFLCPGG(::System::Int32 a1)
		{
			return ((::MLLHPMHAAPL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + POFCJAMEGHF_IEICNFLCPGG_OFFSET))(a1);
		}

		static ::MLLHPMHAAPL* GOPJOAEMDOB(::System::Int32 a1)
		{
			return ((::MLLHPMHAAPL*(*)(::System::Int32))((::PBYTE)hIl2Cpp + POFCJAMEGHF_GOPJOAEMDOB_OFFSET))(a1);
		}

	};
