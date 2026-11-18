#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_MONOGRIDSCROLLER___C_IELOACKBIOF_OFFSET UNITYSDK_OFFSET(0x1193B0C0)
#define MOLEMOLE_MONOGRIDSCROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1193B070)
#define MOLEMOLE_MONOGRIDSCROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1193B0B0)

namespace MoleMole
{
	inline static constexpr unsigned int MonoGridScroller___c_TypeDefinitionIndex = 69054;

	class MonoGridScroller___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(MonoGridScroller___c_TypeDefinitionIndex)->GetStaticField(0x4D840);
		}
		static ::System::Comparison_1<::System::Int32>** StaticGet___9__89_0()
		{
			return (::System::Comparison_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(MonoGridScroller___c_TypeDefinitionIndex)->GetStaticField(0x4D848);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 IELOACKBIOF(::System::Int32 DPGFPHIMDEL, ::System::Int32 DLJPLHKELCO)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MONOGRIDSCROLLER___C_IELOACKBIOF_OFFSET))(this, DPGFPHIMDEL, DLJPLHKELCO);
		}
	};
}
