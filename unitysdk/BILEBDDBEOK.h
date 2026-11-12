#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/EIHGCJMMHCL.h"
class AHMEMALAOCA;
class BILEBDDBEOK;

#define BILEBDDBEOK_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBE483A0)
#define BILEBDDBEOK_CCTOR_OFFSET UNITYSDK_OFFSET(0xBE48960)
#define BILEBDDBEOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBE484D0)
#define BILEBDDBEOK_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBE484E0)
#define BILEBDDBEOK_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0xBE48530)
#define BILEBDDBEOK_LMBKNCAIDLC_OFFSET UNITYSDK_OFFSET(0xBE48810)

inline static constexpr unsigned int BILEBDDBEOK_TypeDefinitionIndex = 58629;

	class BILEBDDBEOK : public ::System::Object
	{
	public:
		::AHMEMALAOCA* FLMODBLFAGD; // 0x10
		::System::Single HODIMDPEHIL; // 0x18
		::System::Boolean BFHMIPCLJOB; // 0x1C
		::System::Boolean EOELDCMAMHD; // 0x1D
		static ::System::UInt32* StaticGet_KAMCGDKHALB()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BILEBDDBEOK")->GetStaticField(0x159E0);
		}

		static ::System::UInt32* StaticGet_NNBBEIBIKLJ()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BILEBDDBEOK")->GetStaticField(0x159E4);
		}

		static ::System::UInt32* StaticGet_KGNMCNMGCND()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "BILEBDDBEOK")->GetStaticField(0x159E8);
		}

		static ::System::Single* StaticGet_BEILIKPDFFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "BILEBDDBEOK")->GetStaticField(0x159EC);
		}

		::System::Void _ctor(::AHMEMALAOCA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AHMEMALAOCA*))((::PBYTE)hIl2Cpp + BILEBDDBEOK_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BILEBDDBEOK_CCTOR_OFFSET))();
		}

		static ::BILEBDDBEOK* BPLPBPMEODA(::AHMEMALAOCA* a1)
		{
			return ((::BILEBDDBEOK*(*)(::AHMEMALAOCA*))((::PBYTE)hIl2Cpp + BILEBDDBEOK_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILEBDDBEOK_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BILEBDDBEOK_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean LMBKNCAIDLC(::EIHGCJMMHCL a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::EIHGCJMMHCL))((::PBYTE)hIl2Cpp + BILEBDDBEOK_LMBKNCAIDLC_OFFSET))(this, a1);
		}

	};
