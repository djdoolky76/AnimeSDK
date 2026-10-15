#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPFHAKOGFHH;
namespace System { class Object; }

#define LPFHAKOGFHH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB520)
#define LPFHAKOGFHH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9CB550)
#define LPFHAKOGFHH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9CB560)

inline static constexpr unsigned int LPFHAKOGFHH___c_TypeDefinitionIndex = 33825;

	class LPFHAKOGFHH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41330);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPFHAKOGFHH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH___C_CTOR_OFFSET))(this);
		}

		::LPFHAKOGFHH* __cctor_b__33_0()
		{
			return ((::LPFHAKOGFHH*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPFHAKOGFHH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
