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

#define POFCJAMEGHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xCC915E0)
#define POFCJAMEGHF_CCTOR_OFFSET UNITYSDK_OFFSET(0xCC91860)
#define POFCJAMEGHF_CTOR_OFFSET UNITYSDK_OFFSET(0xCC91850)
#define POFCJAMEGHF_GOPJOAEMDOB_OFFSET UNITYSDK_OFFSET(0xCC917B0)
#define POFCJAMEGHF_IEICNFLCPGG_OFFSET UNITYSDK_OFFSET(0xCC91650)
#define POFCJAMEGHF_IHJHMKPFJLE_OFFSET UNITYSDK_OFFSET(0xCC91710)

inline static constexpr unsigned int POFCJAMEGHF_TypeDefinitionIndex = 74209;

	class POFCJAMEGHF : public ::System::Object
	{
	public:
		static ::BNCBBFAHOLO* StaticGet_HIBLMJMGNNM()
		{
			return (::BNCBBFAHOLO*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16430);
		}

		static ::BGJCBCCLIKF* StaticGet_ABHHKCLDNMH()
		{
			return (::BGJCBCCLIKF*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16431);
		}

		static ::OPLBFGAMDLB* StaticGet_DPDPCBJMPEB()
		{
			return (::OPLBFGAMDLB*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16432);
		}

		static ::NBNEGKJDEIL* StaticGet_MEJAHBLFLGA()
		{
			return (::NBNEGKJDEIL*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16433);
		}

		static ::NDBNDAFONKL* StaticGet_ENHHLFGMOFF()
		{
			return (::NDBNDAFONKL*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16434);
		}

		static ::JAEKEBGFNIM* StaticGet_GNHNENGNBOE()
		{
			return (::JAEKEBGFNIM*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16435);
		}

		static ::GFFGEOIOGHJ* StaticGet_NGOPCGHBDFE()
		{
			return (::GFFGEOIOGHJ*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16436);
		}

		static ::GDHNBCOBAGP* StaticGet_FOHJMEGFOLG()
		{
			return (::GDHNBCOBAGP*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16437);
		}

		static ::NOPHIDPGBBI* StaticGet_LCCKCIDLEIC()
		{
			return (::NOPHIDPGBBI*)UnitySDK::FromName("", "POFCJAMEGHF")->GetStaticField(0x16438);
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
