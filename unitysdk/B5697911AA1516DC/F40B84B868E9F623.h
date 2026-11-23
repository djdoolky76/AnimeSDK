#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FE9C907BDD20CC3F;
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Reflection { class MemberInfo; }
namespace System::Reflection { class MethodInfo; }

#define B5697911AA1516DC_F40B84B868E9F623_AD1FF015FE59D948_OFFSET UNITYSDK_OFFSET(0x41BF860)
#define B5697911AA1516DC_F40B84B868E9F623_E1D2DCE4A6311843_OFFSET UNITYSDK_OFFSET(0x41BF6C0)
#define B5697911AA1516DC_F40B84B868E9F623_FBCC5EF8EB31CEE4_OFFSET UNITYSDK_OFFSET(0x41BF640)
#define B5697911AA1516DC_F40B84B868E9F623_FCEFD4180FF92B56_OFFSET UNITYSDK_OFFSET(0x41BF4E0)
#define B5697911AA1516DC_F40B84B868E9F623__CTOR_OFFSET UNITYSDK_OFFSET(0x41BF950)

namespace B5697911AA1516DC
{
	inline static constexpr unsigned int F40B84B868E9F623_TypeDefinitionIndex = 20776;

	class F40B84B868E9F623 : public ::System::Object
	{
	public:
		::System::Reflection::MethodInfo* F803A43B25412917; // 0x10
		::System::Reflection::MethodInfo* F242B1227051D5C8; // 0x18
		::System::Reflection::MethodInfo* BE516C83C78A2EE8; // 0x20
		::System::Reflection::MethodInfo* E06D5606EDFF452A; // 0x28
		::System::Reflection::MethodInfo* E8A6DA13D7AC6ED3; // 0x30
		::System::Reflection::MethodInfo* B0C52BA1359051EC; // 0x38
		::System::Reflection::MethodInfo* E88B040D0217FD36; // 0x40
		::System::Reflection::MethodInfo* F91EE0C3EEF3764A; // 0x48
		::System::Reflection::MethodInfo* BB4E533865931335; // 0x50
		::System::Reflection::MethodInfo* A285D48789849F0A; // 0x58

		static ::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>* FBCC5EF8EB31CEE4(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Reflection::MemberInfo*>*(*)(::System::Type*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_FBCC5EF8EB31CEE4_OFFSET))(A288CB28FC2A6DA3);
		}

		static ::System::Boolean E1D2DCE4A6311843(::System::Reflection::MemberInfo* A7D915081857F973)
		{
			return ((::System::Boolean(*)(::System::Reflection::MemberInfo*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_E1D2DCE4A6311843_OFFSET))(A7D915081857F973);
		}

		::FE9C907BDD20CC3F* FCEFD4180FF92B56(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::FE9C907BDD20CC3F*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_FCEFD4180FF92B56_OFFSET))(this, A288CB28FC2A6DA3);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623__CTOR_OFFSET))(this);
		}

		static ::System::Boolean AD1FF015FE59D948(::System::Type* A288CB28FC2A6DA3)
		{
			return ((::System::Boolean(*)(::System::Type*))((::PBYTE)hIl2Cpp + B5697911AA1516DC_F40B84B868E9F623_AD1FF015FE59D948_OFFSET))(A288CB28FC2A6DA3);
		}
	};
}
