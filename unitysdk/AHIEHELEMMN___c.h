#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AHIEHELEMMN;
namespace System { class Object; }

#define AHIEHELEMMN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E271B50)
#define AHIEHELEMMN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E271B80)
#define AHIEHELEMMN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E271B90)

inline static constexpr unsigned int AHIEHELEMMN___c_TypeDefinitionIndex = 32121;

	class AHIEHELEMMN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AHIEHELEMMN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN___C_CTOR_OFFSET))(this);
		}

		::AHIEHELEMMN* __cctor_b__33_0()
		{
			return ((::AHIEHELEMMN*(*)(::PVOID))((::PBYTE)hIl2Cpp + AHIEHELEMMN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
