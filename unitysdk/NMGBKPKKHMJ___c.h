#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OODACBBPJEJ;
namespace System { class Object; }
namespace System { template <typename T> class Comparison_1; }

#define NMGBKPKKHMJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0xC56B320)
#define NMGBKPKKHMJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0xC56B360)
#define NMGBKPKKHMJ___C___ENSURECACHE_B__2_0_OFFSET UNITYSDK_OFFSET(0xC56B370)

inline static constexpr unsigned int NMGBKPKKHMJ___c_TypeDefinitionIndex = 77163;

	class NMGBKPKKHMJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C260);
		}

		static ::System::Comparison_1<::OODACBBPJEJ*>** StaticGet___9__2_0()
		{
			return (::System::Comparison_1<::OODACBBPJEJ*>**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4C268);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMGBKPKKHMJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMGBKPKKHMJ___C_CTOR_OFFSET))(this);
		}

		::System::Int32 __EnsureCache_b__2_0(::OODACBBPJEJ* a1, ::OODACBBPJEJ* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::OODACBBPJEJ*, ::OODACBBPJEJ*))((::PBYTE)hIl2Cpp + NMGBKPKKHMJ___C___ENSURECACHE_B__2_0_OFFSET))(this, a1, a2);
		}

	};
