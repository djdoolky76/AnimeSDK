#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EKOKNJKGCCA;
class JNPCHAAGGGO;
namespace System { class Object; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine::Events { class UnityEventBase; }

#define FLPBCEFLDGH_AKMGNEMGGMD_OFFSET UNITYSDK_OFFSET(0x1EC3F020)
#define FLPBCEFLDGH_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EC3F4F0)
#define FLPBCEFLDGH_GCIDMDHKMEC_OFFSET UNITYSDK_OFFSET(0x1EC3E1D0)
#define FLPBCEFLDGH_JFPIDHPFDCD_OFFSET UNITYSDK_OFFSET(0x1EC3EA30)
#define FLPBCEFLDGH_JNBFOGKPGPC_OFFSET UNITYSDK_OFFSET(0x1EC3E700)

inline static constexpr unsigned int FLPBCEFLDGH_TypeDefinitionIndex = 44076;

	class FLPBCEFLDGH : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::Type*>** StaticGet_KLABJMFDCCP()
		{
			return (::Il2CppArray<::System::Type*>**)UnitySDK::FromName("", "FLPBCEFLDGH")->GetStaticField(0x478D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FLPBCEFLDGH_CCTOR_OFFSET))();
		}

		static ::EKOKNJKGCCA* GCIDMDHKMEC(::System::Object* a1, ::JNPCHAAGGGO* a2)
		{
			return ((::EKOKNJKGCCA*(*)(::System::Object*, ::JNPCHAAGGGO*))((::PBYTE)hIl2Cpp + FLPBCEFLDGH_GCIDMDHKMEC_OFFSET))(a1, a2);
		}

		static ::EKOKNJKGCCA* JFPIDHPFDCD(::System::Object* a1, ::UnityEngine::Events::UnityEventBase* a2, ::Il2CppArray<::System::Type*>* a3)
		{
			return ((::EKOKNJKGCCA*(*)(::System::Object*, ::UnityEngine::Events::UnityEventBase*, ::Il2CppArray<::System::Type*>*))((::PBYTE)hIl2Cpp + FLPBCEFLDGH_JFPIDHPFDCD_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Events::UnityEventBase* AKMGNEMGGMD(::System::Type* a1, ::System::Object* a2, ::System::String* a3)
		{
			return ((::UnityEngine::Events::UnityEventBase*(*)(::System::Type*, ::System::Object*, ::System::String*))((::PBYTE)hIl2Cpp + FLPBCEFLDGH_AKMGNEMGGMD_OFFSET))(a1, a2, a3);
		}

		static ::Il2CppArray<::System::Type*>* JNBFOGKPGPC(::System::Type* a1)
		{
			return ((::Il2CppArray<::System::Type*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + FLPBCEFLDGH_JNBFOGKPGPC_OFFSET))(a1);
		}

	};
