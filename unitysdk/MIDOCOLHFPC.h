#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/LPBCNFBMCJK.h"
#include "unitysdk/RPG/MQuaternion.h"
#include "unitysdk/RPG/MVector3.h"

#define MIDOCOLHFPC_CTOR_OFFSET UNITYSDK_OFFSET(0xB952370)
#define MIDOCOLHFPC_HNMKLGKGJEL_OFFSET UNITYSDK_OFFSET(0xB951CC0)
#define MIDOCOLHFPC_KENPOPJHJDF_OFFSET UNITYSDK_OFFSET(0xB9522A0)
#define MIDOCOLHFPC_LKLOLPKGKAN_OFFSET UNITYSDK_OFFSET(0xB951E80)
#define MIDOCOLHFPC_LNHAMPDKLLD_OFFSET UNITYSDK_OFFSET(0xB951D30)
#define MIDOCOLHFPC_PFFHBMPFMFJ_OFFSET UNITYSDK_OFFSET(0xB951FB0)

	class MIDOCOLHFPC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_CTOR_OFFSET))(this);
		}

		static ::System::Single HNMKLGKGJEL(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_HNMKLGKGJEL_OFFSET))(a1);
		}

		static ::System::Single LNHAMPDKLLD(::RPG::MVector3 a1, ::RPG::MVector3 a2)
		{
			return ((::System::Single(*)(::RPG::MVector3, ::RPG::MVector3))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_LNHAMPDKLLD_OFFSET))(a1, a2);
		}

		static ::RPG::MQuaternion LKLOLPKGKAN(::System::Single a1)
		{
			return ((::RPG::MQuaternion(*)(::System::Single))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_LKLOLPKGKAN_OFFSET))(a1);
		}

		static ::RPG::MVector3 PFFHBMPFMFJ(::System::Single a1)
		{
			return ((::RPG::MVector3(*)(::System::Single))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_PFFHBMPFMFJ_OFFSET))(a1);
		}

		static ::System::Void KENPOPJHJDF(::RPG::MVector3 a1, ::RPG::MVector3 a2, ::LPBCNFBMCJK a3)
		{
			return ((::System::Void(*)(::RPG::MVector3, ::RPG::MVector3, ::LPBCNFBMCJK))((::PBYTE)hIl2Cpp + MIDOCOLHFPC_KENPOPJHJDF_OFFSET))(a1, a2, a3);
		}

	};
