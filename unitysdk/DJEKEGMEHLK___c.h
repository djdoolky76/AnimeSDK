#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DJEKEGMEHLK;
namespace System { class Object; }

#define DJEKEGMEHLK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E19BB50)
#define DJEKEGMEHLK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E19BB80)
#define DJEKEGMEHLK___C___CCTOR_B__83_0_OFFSET UNITYSDK_OFFSET(0x1E19BB90)

inline static constexpr unsigned int DJEKEGMEHLK___c_TypeDefinitionIndex = 27322;

	class DJEKEGMEHLK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32C40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DJEKEGMEHLK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEKEGMEHLK___C_CTOR_OFFSET))(this);
		}

		::DJEKEGMEHLK* __cctor_b__83_0()
		{
			return ((::DJEKEGMEHLK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DJEKEGMEHLK___C___CCTOR_B__83_0_OFFSET))(this);
		}

	};
