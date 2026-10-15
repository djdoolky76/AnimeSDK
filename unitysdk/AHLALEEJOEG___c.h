#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MGJDNGHDIKG.h"
#include "unitysdk/System/Object.h"
class AHLALEEJOEG;
namespace System { class Object; }

#define AHLALEEJOEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E247730)
#define AHLALEEJOEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E247760)
#define AHLALEEJOEG___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E247770)
#define AHLALEEJOEG___C___CCTOR_B__23_1_OFFSET UNITYSDK_OFFSET(0x1E2477C0)
#define AHLALEEJOEG___C___CCTOR_B__23_2_OFFSET UNITYSDK_OFFSET(0x1E2477D0)

inline static constexpr unsigned int AHLALEEJOEG___c_TypeDefinitionIndex = 33241;

	class AHLALEEJOEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A510);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHLALEEJOEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG___C_CTOR_OFFSET))(this);
		}

		::AHLALEEJOEG* __cctor_b__23_0()
		{
			return ((::AHLALEEJOEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHLALEEJOEG___C___CCTOR_B__23_0_OFFSET))(this);
		}

		::System::Int32 __cctor_b__23_1(::MGJDNGHDIKG a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MGJDNGHDIKG))((::PBYTE)hIl2Cpp + AHLALEEJOEG___C___CCTOR_B__23_1_OFFSET))(this, a1);
		}

		::MGJDNGHDIKG __cctor_b__23_2(::System::Int32 a1)
		{
			return ((::MGJDNGHDIKG(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AHLALEEJOEG___C___CCTOR_B__23_2_OFFSET))(this, a1);
		}

	};
