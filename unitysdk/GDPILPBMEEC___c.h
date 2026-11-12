#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HKHEDJKACGK;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define GDPILPBMEEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x168FD200)
#define GDPILPBMEEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x168FD240)
#define GDPILPBMEEC___C__GETAGENDACONFIGS_B__6_0_OFFSET UNITYSDK_OFFSET(0x168FD250)

inline static constexpr unsigned int GDPILPBMEEC___c_TypeDefinitionIndex = 84518;

	class GDPILPBMEEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66100);
		}

		static ::System::Comparison_1<::HKHEDJKACGK*>** StaticGet___9__6_0()
		{
			return (::System::Comparison_1<::HKHEDJKACGK*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x66108);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GDPILPBMEEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDPILPBMEEC___C_CTOR_OFFSET))(this);
		}

		::System::Int32 _GetAgendaConfigs_b__6_0(::HKHEDJKACGK* a1, ::HKHEDJKACGK* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::HKHEDJKACGK*, ::HKHEDJKACGK*))((::PBYTE)hIl2Cpp + GDPILPBMEEC___C__GETAGENDACONFIGS_B__6_0_OFFSET))(this, a1, a2);
		}

	};
