#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class ELAPFEAOANP;
class HPOJGFBONKL;
namespace RPG::GameCore { class TextDynamicParamBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NICILMLHFMN_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xBBDEA70)
#define NICILMLHFMN_CCTOR_OFFSET UNITYSDK_OFFSET(0xBBDECF0)

	class NICILMLHFMN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::ELAPFEAOANP*>** StaticGet_EBEKFJIIIFJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::ELAPFEAOANP*>**)UnitySDK::FromName("", "NICILMLHFMN")->GetStaticField(0x3E690);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NICILMLHFMN_CCTOR_OFFSET))();
		}

		static ::HPOJGFBONKL* BEJAJNEFHIB(::RPG::GameCore::TextDynamicParamBase* a1)
		{
			return ((::HPOJGFBONKL*(*)(::RPG::GameCore::TextDynamicParamBase*))((::PBYTE)hIl2Cpp + NICILMLHFMN_BEJAJNEFHIB_OFFSET))(a1);
		}

	};
