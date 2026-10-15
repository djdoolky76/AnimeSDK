#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DCNIDBKPPCK;
namespace System { class Object; }

#define DCNIDBKPPCK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E14A6D0)
#define DCNIDBKPPCK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E14A700)
#define DCNIDBKPPCK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E14A710)

inline static constexpr unsigned int DCNIDBKPPCK___c_TypeDefinitionIndex = 26656;

	class DCNIDBKPPCK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x25600);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DCNIDBKPPCK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK___C_CTOR_OFFSET))(this);
		}

		::DCNIDBKPPCK* __cctor_b__33_0()
		{
			return ((::DCNIDBKPPCK*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCNIDBKPPCK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
