#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/RuntimeTypeHandle.h"
class APDMIIEDMLI_CFHOMFLPNNO;
class PBNHJIDKMJG;
namespace RPG::GameCore { class MiConditionConfigBase; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define NIFJLPOAIKN_BEJAJNEFHIB_OFFSET UNITYSDK_OFFSET(0xC4CC3D0)
#define NIFJLPOAIKN_CCTOR_OFFSET UNITYSDK_OFFSET(0xC4CC670)

inline static constexpr unsigned int NIFJLPOAIKN_TypeDefinitionIndex = 61235;

	class NIFJLPOAIKN : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::PBNHJIDKMJG*>** StaticGet_EBEKFJIIIFJ()
		{
			return (::System::Collections::Generic::Dictionary_2<::System::RuntimeTypeHandle, ::PBNHJIDKMJG*>**)UnitySDK::FromName("", "NIFJLPOAIKN")->GetStaticField(0x38F80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIFJLPOAIKN_CCTOR_OFFSET))();
		}

		static ::APDMIIEDMLI_CFHOMFLPNNO* BEJAJNEFHIB(::RPG::GameCore::MiConditionConfigBase* a1)
		{
			return ((::APDMIIEDMLI_CFHOMFLPNNO*(*)(::RPG::GameCore::MiConditionConfigBase*))((::PBYTE)hIl2Cpp + NIFJLPOAIKN_BEJAJNEFHIB_OFFSET))(a1);
		}

	};
