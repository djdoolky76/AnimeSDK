#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DKFJLHHDFKO;
namespace System { class Object; }

#define DKFJLHHDFKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D56A0)
#define DKFJLHHDFKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D56D0)
#define DKFJLHHDFKO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1D56E0)

inline static constexpr unsigned int DKFJLHHDFKO___c_TypeDefinitionIndex = 33418;

	class DKFJLHHDFKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A900);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DKFJLHHDFKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO___C_CTOR_OFFSET))(this);
		}

		::DKFJLHHDFKO* __cctor_b__28_0()
		{
			return ((::DKFJLHHDFKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + DKFJLHHDFKO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
