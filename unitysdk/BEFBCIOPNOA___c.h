#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEFBCIOPNOA;
namespace System { class Object; }

#define BEFBCIOPNOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA62080)
#define BEFBCIOPNOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA620B0)
#define BEFBCIOPNOA___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1EA620C0)

inline static constexpr unsigned int BEFBCIOPNOA___c_TypeDefinitionIndex = 34071;

	class BEFBCIOPNOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEFBCIOPNOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA___C_CTOR_OFFSET))(this);
		}

		::BEFBCIOPNOA* __cctor_b__38_0()
		{
			return ((::BEFBCIOPNOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEFBCIOPNOA___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
