#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MENLHHCJNCE;
namespace System { class Object; }

#define MENLHHCJNCE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4C80)
#define MENLHHCJNCE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E4CC0)
#define MENLHHCJNCE___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E9E4CD0)

inline static constexpr unsigned int MENLHHCJNCE___c_TypeDefinitionIndex = 26954;

	class MENLHHCJNCE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E1C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MENLHHCJNCE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE___C_CTOR_OFFSET))(this);
		}

		::MENLHHCJNCE* __cctor_b__23_0()
		{
			return ((::MENLHHCJNCE*(*)(::PVOID))((::PBYTE)hIl2Cpp + MENLHHCJNCE___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
