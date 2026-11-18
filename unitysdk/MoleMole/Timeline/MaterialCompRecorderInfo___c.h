#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1F6DBC30)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1F6DBC70)
#define MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__GETFRAMETIMES_B__36_0_OFFSET UNITYSDK_OFFSET(0x1F6DBC80)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MaterialCompRecorderInfo___c_TypeDefinitionIndex = 32256;

	class MaterialCompRecorderInfo___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo___c_TypeDefinitionIndex)->GetStaticField(0x28EE0);
		}
		static ::System::Comparison_1<::System::Double>** StaticGet___9__36_0()
		{
			return (::System::Comparison_1<::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(MaterialCompRecorderInfo___c_TypeDefinitionIndex)->GetStaticField(0x28EE8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Int32 _GetFrameTimes_b__36_0(::System::Double a, ::System::Double b)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MATERIALCOMPRECORDERINFO___C__GETFRAMETIMES_B__36_0_OFFSET))(this, a, b);
		}
	};
}
