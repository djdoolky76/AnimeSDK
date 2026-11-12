#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HAFBKJFLGFJ;
namespace System { class Object; }

#define HAFBKJFLGFJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F818580)
#define HAFBKJFLGFJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8185C0)
#define HAFBKJFLGFJ___C___CCTOR_B__32_0_OFFSET UNITYSDK_OFFSET(0x1F8185D0)

inline static constexpr unsigned int HAFBKJFLGFJ___c_TypeDefinitionIndex = 27326;

	class HAFBKJFLGFJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1EE50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HAFBKJFLGFJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ___C_CTOR_OFFSET))(this);
		}

		::HAFBKJFLGFJ* __cctor_b__32_0()
		{
			return ((::HAFBKJFLGFJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HAFBKJFLGFJ___C___CCTOR_B__32_0_OFFSET))(this);
		}

	};
