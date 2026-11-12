#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BKJCADFCHAB;
namespace System { class Object; }

#define BKJCADFCHAB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F17CC90)
#define BKJCADFCHAB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F17CCC0)
#define BKJCADFCHAB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F17CCD0)

inline static constexpr unsigned int BKJCADFCHAB___c_TypeDefinitionIndex = 27987;

	class BKJCADFCHAB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4DE40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BKJCADFCHAB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB___C_CTOR_OFFSET))(this);
		}

		::BKJCADFCHAB* __cctor_b__23_0()
		{
			return ((::BKJCADFCHAB*(*)(::PVOID))((::PBYTE)hIl2Cpp + BKJCADFCHAB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
