#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJMJMJAMMA;
namespace System { class Object; }

#define NEJMJMJAMMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE3A070)
#define NEJMJMJAMMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE3A0B0)
#define NEJMJMJAMMA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE3A0C0)

inline static constexpr unsigned int NEJMJMJAMMA___c_TypeDefinitionIndex = 26118;

	class NEJMJMJAMMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NEJMJMJAMMA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA___C_CTOR_OFFSET))(this);
		}

		::NEJMJMJAMMA* __cctor_b__33_0()
		{
			return ((::NEJMJMJAMMA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJMJMJAMMA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
