#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BJALEHOMFKH;
namespace System { class Object; }

#define BJALEHOMFKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FACBA40)
#define BJALEHOMFKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FACBA80)
#define BJALEHOMFKH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FACBA90)

inline static constexpr unsigned int BJALEHOMFKH___c_TypeDefinitionIndex = 30227;

	class BJALEHOMFKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53E50);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BJALEHOMFKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH___C_CTOR_OFFSET))(this);
		}

		::BJALEHOMFKH* __cctor_b__33_0()
		{
			return ((::BJALEHOMFKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJALEHOMFKH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
