#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsComponent; }

#define NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE07F90)
#define NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CE07FD0)
#define NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_0_OFFSET UNITYSDK_OFFSET(0x1CE07FE0)
#define NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_1_OFFSET UNITYSDK_OFFSET(0x1CE07FF0)

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsEntity___c_TypeDefinitionIndex = 36027;

	class EcsEntity___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(EcsEntity___c_TypeDefinitionIndex)->GetStaticField(0x2B6F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __cctor_b__110_0(::Nap::NapECS::EcsComponent* a)
		{
			return ((::System::Boolean(*)(::PVOID, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_0_OFFSET))(this, a);
		}

		::System::Int32 __cctor_b__110_1(::Nap::NapECS::EcsComponent* a, ::Nap::NapECS::EcsComponent* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Nap::NapECS::EcsComponent*, ::Nap::NapECS::EcsComponent*))((::PBYTE)hIl2Cpp + NAP_NAPECS_ECSENTITY___C___CCTOR_B__110_1_OFFSET))(this, a, b);
		}
	};
}
