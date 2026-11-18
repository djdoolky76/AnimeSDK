#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class BLCIDFMMHIL;
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13F09290)
#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13F092D0)
#define MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__GET__INTERACTIONACTIVATEDPREDICATE_B__24_0_OFFSET UNITYSDK_OFFSET(0x13F092E0)

namespace MoleMole
{
	inline static constexpr unsigned int MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex = 72605;

	class MultiInteractionVoTargetSubSystem___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::BLCIDFMMHIL*, ::System::Boolean>** StaticGet___9__24_0()
		{
			return (::System::Func_2<::BLCIDFMMHIL*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4AA60);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MultiInteractionVoTargetSubSystem___c_TypeDefinitionIndex)->GetStaticField(0x4AA68);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get__interactionActivatedPredicate_b__24_0(::BLCIDFMMHIL* interaction)
		{
			return ((::System::Boolean(*)(::PVOID, ::BLCIDFMMHIL*))((::PBYTE)hIl2Cpp + MOLEMOLE_MULTIINTERACTIONVOTARGETSUBSYSTEM___C__GET__INTERACTIONACTIVATEDPREDICATE_B__24_0_OFFSET))(this, interaction);
		}
	};
}
