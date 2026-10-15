#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HPGIGMPBIBO;
namespace System { class Object; }

#define HPGIGMPBIBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5C8780)
#define HPGIGMPBIBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5C87C0)
#define HPGIGMPBIBO___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E5C87D0)

inline static constexpr unsigned int HPGIGMPBIBO___c_TypeDefinitionIndex = 31261;

	class HPGIGMPBIBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3EAD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HPGIGMPBIBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO___C_CTOR_OFFSET))(this);
		}

		::HPGIGMPBIBO* __cctor_b__43_0()
		{
			return ((::HPGIGMPBIBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGIGMPBIBO___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
