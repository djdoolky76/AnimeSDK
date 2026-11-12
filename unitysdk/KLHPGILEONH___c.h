#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ABFLKIBIFDM;
class KLHPGILEONH_PFELJFNFAPF;
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define KLHPGILEONH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xBD747F0)
#define KLHPGILEONH___C_CTOR_OFFSET UNITYSDK_OFFSET(0xBD74830)
#define KLHPGILEONH___C__GENSTATISTICS_B__4_0_OFFSET UNITYSDK_OFFSET(0xBD74840)

inline static constexpr unsigned int KLHPGILEONH___c_TypeDefinitionIndex = 57214;

	class KLHPGILEONH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x553A0);
		}

		static ::System::Func_2<::System::Object*, ::ABFLKIBIFDM*>** StaticGet___9__4_0()
		{
			return (::System::Func_2<::System::Object*, ::ABFLKIBIFDM*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x553A8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KLHPGILEONH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KLHPGILEONH___C_CTOR_OFFSET))(this);
		}

		::ABFLKIBIFDM* _GenStatistics_b__4_0(::KLHPGILEONH_PFELJFNFAPF* a1)
		{
			return ((::ABFLKIBIFDM*(*)(::PVOID, ::KLHPGILEONH_PFELJFNFAPF*))((::PBYTE)hIl2Cpp + KLHPGILEONH___C__GENSTATISTICS_B__4_0_OFFSET))(this, a1);
		}

	};
