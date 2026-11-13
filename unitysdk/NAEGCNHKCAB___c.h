#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAEGCNHKCAB;
namespace System { class Object; }

#define NAEGCNHKCAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x201472C0)
#define NAEGCNHKCAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20147300)
#define NAEGCNHKCAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20147310)

inline static constexpr unsigned int NAEGCNHKCAB___c_TypeDefinitionIndex = 29966;

	class NAEGCNHKCAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x56650);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAEGCNHKCAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB___C_CTOR_OFFSET))(this);
		}

		::NAEGCNHKCAB* __cctor_b__23_0()
		{
			return ((::NAEGCNHKCAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAEGCNHKCAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
