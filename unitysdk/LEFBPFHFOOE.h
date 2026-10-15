#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class MCDOIAPPMBF;
class ODENMFMNMDF;
namespace RPG::GameCore { class MiParameterConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define LEFBPFHFOOE_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xB64F2D0)
#define LEFBPFHFOOE_CCTOR_OFFSET UNITYSDK_OFFSET(0xB64F550)

	class LEFBPFHFOOE : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::ODENMFMNMDF*>** StaticGet_EBEKFJIIIFJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::ODENMFMNMDF*>**)UnitySDK::FromName("", "LEFBPFHFOOE")->GetStaticField(0x588F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEFBPFHFOOE_CCTOR_OFFSET))();
		}

		static ::MCDOIAPPMBF* BEJAJNEFHIB(::RPG::GameCore::MiParameterConfigBase* a1)
		{
			return ((::MCDOIAPPMBF*(*)(::RPG::GameCore::MiParameterConfigBase*))((::PBYTE)hIl2Cpp + LEFBPFHFOOE_BEJAJNEFHIB_OFFSET))(a1);
		}

	};
