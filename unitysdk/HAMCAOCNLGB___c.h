#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
class DGHDHELLBBC;
class IALBJEGDCFI;
class NKIJFPHFJCO;
namespace R3 { template <typename T> class Observable_1; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Immutable { template <typename T> class ImmutableHashSet_1; }

#define HAMCAOCNLGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B87610)
#define HAMCAOCNLGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x15B87650)
#define HAMCAOCNLGB___C__INIT_B__58_11_OFFSET UNITYSDK_OFFSET(0x15B87740)
#define HAMCAOCNLGB___C__INIT_B__58_6_OFFSET UNITYSDK_OFFSET(0x15B87660)

inline static constexpr unsigned int HAMCAOCNLGB___c_TypeDefinitionIndex = 79540;

	class HAMCAOCNLGB___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::DGHDHELLBBC*, ::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*>** StaticGet___9__58_6()
		{
			return (::System::Func_2<::DGHDHELLBBC*, ::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F1C0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F1C8);
		}

		static ::System::Func_2<::IALBJEGDCFI*, ::R3::Observable_1<::NKIJFPHFJCO*>*>** StaticGet___9__58_11()
		{
			return (::System::Func_2<::IALBJEGDCFI*, ::R3::Observable_1<::NKIJFPHFJCO*>*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x6F1D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C_CTOR_OFFSET))(this);
		}

		::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>* _Init_b__58_6(::DGHDHELLBBC* a1)
		{
			return ((::System::Collections::Immutable::ImmutableHashSet_1<::UnityEngine::Vector2Int>*(*)(::PVOID, ::DGHDHELLBBC*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C__INIT_B__58_6_OFFSET))(this, a1);
		}

		::R3::Observable_1<::NKIJFPHFJCO*>* _Init_b__58_11(::IALBJEGDCFI* a1)
		{
			return ((::R3::Observable_1<::NKIJFPHFJCO*>*(*)(::PVOID, ::IALBJEGDCFI*))((::PBYTE)hIl2Cpp + HAMCAOCNLGB___C__INIT_B__58_11_OFFSET))(this, a1);
		}

	};
