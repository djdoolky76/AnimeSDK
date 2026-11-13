#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHOMIGDKHEB.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class BHLIKCMOLLK;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MGKHJKBPDMO_CCTOR_OFFSET UNITYSDK_OFFSET(0x1B345D30)
#define MGKHJKBPDMO_KBMDPNFNKAC_1_OFFSET UNITYSDK_OFFSET(0x1B345C90)
#define MGKHJKBPDMO_KBMDPNFNKAC_OFFSET UNITYSDK_OFFSET(0x1B345BC0)

inline static constexpr unsigned int MGKHJKBPDMO_TypeDefinitionIndex = 58814;

	class MGKHJKBPDMO : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::BHOMIGDKHEB>** StaticGet_FLFFHLKOEJF()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::BHOMIGDKHEB>**)UnitySDK::FromName("", "MGKHJKBPDMO")->GetStaticField(0x707F0);
		}

		static ::System::Int32* StaticGet_ENOKMMBIHKP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "MGKHJKBPDMO")->GetStaticField(0x15910);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MGKHJKBPDMO_CCTOR_OFFSET))();
		}

		static ::BHOMIGDKHEB KBMDPNFNKAC(::System::RuntimeTypeHandle a1)
		{
			return ((::BHOMIGDKHEB(*)(::System::RuntimeTypeHandle))((::PBYTE)hIl2Cpp + MGKHJKBPDMO_KBMDPNFNKAC_OFFSET))(a1);
		}

		static ::BHOMIGDKHEB KBMDPNFNKAC_1(::BHLIKCMOLLK* a1)
		{
			return ((::BHOMIGDKHEB(*)(::BHLIKCMOLLK*))((::PBYTE)hIl2Cpp + MGKHJKBPDMO_KBMDPNFNKAC_1_OFFSET))(a1);
		}

	};
