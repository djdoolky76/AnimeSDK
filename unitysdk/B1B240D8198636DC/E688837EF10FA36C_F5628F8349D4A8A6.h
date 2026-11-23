#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Common::Timeline::Unity { class ABCAudioEventMarker; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6_E01B22ECE4CE01C8_OFFSET UNITYSDK_OFFSET(0x2081AB0)
#define B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x209A120)
#define B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B1B240D8198636DC
{
	inline static constexpr unsigned int E688837EF10FA36C_F5628F8349D4A8A6_TypeDefinitionIndex = 8508;

	class E688837EF10FA36C_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::B1B240D8198636DC::E688837EF10FA36C_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::B1B240D8198636DC::E688837EF10FA36C_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(E688837EF10FA36C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::ABC::Common::Timeline::Unity::ABCAudioEventMarker*, ::System::Double>** StaticGet_B3B5BB714B5D4029()
		{
			return (::System::Func_2<::ABC::Common::Timeline::Unity::ABCAudioEventMarker*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(E688837EF10FA36C_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Double E01B22ECE4CE01C8(::ABC::Common::Timeline::Unity::ABCAudioEventMarker* B8A196AEAF73E28B)
		{
			return ((::System::Double(*)(::PVOID, ::ABC::Common::Timeline::Unity::ABCAudioEventMarker*))((::PBYTE)hIl2Cpp + B1B240D8198636DC_E688837EF10FA36C_F5628F8349D4A8A6_E01B22ECE4CE01C8_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}
