#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace ABC::Common::Timeline::Unity { class DisableOCAndSetShadowUpdateFreqMarker; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6_BD1DFC480EF009BE_OFFSET UNITYSDK_OFFSET(0x2081AB0)
#define B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x2081C60)
#define B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace B1B240D8198636DC
{
	inline static constexpr unsigned int F2C3D38159D832C5_F5628F8349D4A8A6_TypeDefinitionIndex = 8443;

	class F2C3D38159D832C5_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::B1B240D8198636DC::F2C3D38159D832C5_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::B1B240D8198636DC::F2C3D38159D832C5_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(F2C3D38159D832C5_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::ABC::Common::Timeline::Unity::DisableOCAndSetShadowUpdateFreqMarker*, ::System::Double>** StaticGet_A11D69BF37F0CD6C()
		{
			return (::System::Func_2<::ABC::Common::Timeline::Unity::DisableOCAndSetShadowUpdateFreqMarker*, ::System::Double>**)Il2CppClass::FromTypeDefinitionIndex(F2C3D38159D832C5_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Double BD1DFC480EF009BE(::ABC::Common::Timeline::Unity::DisableOCAndSetShadowUpdateFreqMarker* B8A196AEAF73E28B)
		{
			return ((::System::Double(*)(::PVOID, ::ABC::Common::Timeline::Unity::DisableOCAndSetShadowUpdateFreqMarker*))((::PBYTE)hIl2Cpp + B1B240D8198636DC_F2C3D38159D832C5_F5628F8349D4A8A6_BD1DFC480EF009BE_OFFSET))(this, B8A196AEAF73E28B);
		}
	};
}
