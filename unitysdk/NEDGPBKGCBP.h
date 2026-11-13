#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NEDGPBKGCBP_CCTOR_OFFSET UNITYSDK_OFFSET(0x16FD1C00)
#define NEDGPBKGCBP_IAAOCKOEJEN_OFFSET UNITYSDK_OFFSET(0x16FD1CA0)
#define NEDGPBKGCBP_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0x16FD1C20)

inline static constexpr unsigned int NEDGPBKGCBP_TypeDefinitionIndex = 75451;

	class NEDGPBKGCBP : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_DDPPHNJFMIN()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NEDGPBKGCBP")->GetStaticField(0x8930);
		}

		static ::System::UInt32* StaticGet_KMNAOJBJBNC()
		{
			return (::System::UInt32*)UnitySDK::FromName("", "NEDGPBKGCBP")->GetStaticField(0x8934);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_CCTOR_OFFSET))();
		}

		static ::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_KHGIKBFDLFB_OFFSET))();
		}

		static ::System::UInt32 IAAOCKOEJEN()
		{
			return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + NEDGPBKGCBP_IAAOCKOEJEN_OFFSET))();
		}

	};
