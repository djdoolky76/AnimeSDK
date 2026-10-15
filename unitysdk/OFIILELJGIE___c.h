#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JEBPFBNCALB;
class POIONNNNCMJ;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define OFIILELJGIE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1C579580)
#define OFIILELJGIE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1C5795C0)
#define OFIILELJGIE___C__GET_ISALLREQUIREDMET_B__5_0_OFFSET UNITYSDK_OFFSET(0x1C5795D0)
#define OFIILELJGIE___C___ITERATEOPTIONALTRACKERS_B__36_0_OFFSET UNITYSDK_OFFSET(0x1C579630)

inline static constexpr unsigned int OFIILELJGIE___c_TypeDefinitionIndex = 41825;

	class OFIILELJGIE___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::POIONNNNCMJ*, ::JEBPFBNCALB*>** StaticGet___9__36_0()
		{
			return (::System::Func_2<::POIONNNNCMJ*, ::JEBPFBNCALB*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18EA0);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18EA8);
		}

		static ::System::Func_2<::JEBPFBNCALB*, ::System::Boolean>** StaticGet___9__5_0()
		{
			return (::System::Func_2<::JEBPFBNCALB*, ::System::Boolean>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x18EB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFIILELJGIE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFIILELJGIE___C_CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsAllRequiredMet_b__5_0(::JEBPFBNCALB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::JEBPFBNCALB*))((::PBYTE)hIl2Cpp + OFIILELJGIE___C__GET_ISALLREQUIREDMET_B__5_0_OFFSET))(this, a1);
		}

		::JEBPFBNCALB* __IterateOptionalTrackers_b__36_0(::POIONNNNCMJ* a1)
		{
			return ((::JEBPFBNCALB*(*)(::PVOID, ::POIONNNNCMJ*))((::PBYTE)hIl2Cpp + OFIILELJGIE___C___ITERATEOPTIONALTRACKERS_B__36_0_OFFSET))(this, a1);
		}

	};
