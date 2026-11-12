#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OKCGFDFBPBL;
namespace System { class Object; }

#define OKCGFDFBPBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F13A190)
#define OKCGFDFBPBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F13A1D0)
#define OKCGFDFBPBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F13A1E0)

inline static constexpr unsigned int OKCGFDFBPBL___c_TypeDefinitionIndex = 33441;

	class OKCGFDFBPBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C670);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OKCGFDFBPBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCGFDFBPBL___C_CTOR_OFFSET))(this);
		}

		::OKCGFDFBPBL* __cctor_b__28_0()
		{
			return ((::OKCGFDFBPBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OKCGFDFBPBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
