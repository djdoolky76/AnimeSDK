#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class DGHDHELLBBC;
class IALBJEGDCFI;
class NKIJFPHFJCO;
namespace R3 { class Observable; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Immutable { class ImmutableHashSet; }

#define HAMCAOCNLGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B93010)
#define HAMCAOCNLGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B93050)
#define HAMCAOCNLGB___C__INIT_B__58_11_OFFSET UNITYSDK_OFFSET(0x15B93140)
#define HAMCAOCNLGB___C__INIT_B__58_6_OFFSET UNITYSDK_OFFSET(0x15B93060)

inline static constexpr unsigned int HAMCAOCNLGB___c_TypeDefinitionIndex = 79541;

	class HAMCAOCNLGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DEB0);
		}

		static ::System::Func_2<::DGHDHELLBBC*, ::System::Collections::Immutable::ImmutableHashSet*>** StaticGet___9__58_6()
		{
			return (::System::Func_2<::DGHDHELLBBC*, ::System::Collections::Immutable::ImmutableHashSet*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DEB8);
		}

		static ::System::Func_2<::IALBJEGDCFI*, ::R3::Observable*>** StaticGet___9__58_11()
		{
			return (::System::Func_2<::IALBJEGDCFI*, ::R3::Observable*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6DEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Immutable::ImmutableHashSet* _Init_b__58_6(::DGHDHELLBBC* a1)
		{
			return ((::System::Collections::Immutable::ImmutableHashSet*(*)(::PVOID, ::DGHDHELLBBC*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C__INIT_B__58_6_OFFSET))(this, a1);
		}

		::R3::Observable* _Init_b__58_11(::IALBJEGDCFI* a1)
		{
			return ((::R3::Observable*(*)(::PVOID, ::IALBJEGDCFI*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C__INIT_B__58_11_OFFSET))(this, a1);
		}

	};
