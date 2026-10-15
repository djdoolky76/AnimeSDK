#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEFFOCFJNBF;
namespace System { class Object; }

#define AEFFOCFJNBF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDBDF50)
#define AEFFOCFJNBF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDBDF90)
#define AEFFOCFJNBF___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DDBDFA0)

inline static constexpr unsigned int AEFFOCFJNBF___c_TypeDefinitionIndex = 32645;

	class AEFFOCFJNBF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x33DF0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEFFOCFJNBF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF___C_CTOR_OFFSET))(this);
		}

		::AEFFOCFJNBF* __cctor_b__28_0()
		{
			return ((::AEFFOCFJNBF*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEFFOCFJNBF___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
