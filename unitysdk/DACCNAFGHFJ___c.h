#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DACCNAFGHFJ;
namespace System { class Object; }

#define DACCNAFGHFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202A1C80)
#define DACCNAFGHFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202A1CC0)
#define DACCNAFGHFJ___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x202A1CD0)

inline static constexpr unsigned int DACCNAFGHFJ___c_TypeDefinitionIndex = 28926;

	class DACCNAFGHFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DACCNAFGHFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ___C_CTOR_OFFSET))(this);
		}

		::DACCNAFGHFJ* __cctor_b__23_0()
		{
			return ((::DACCNAFGHFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + DACCNAFGHFJ___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
