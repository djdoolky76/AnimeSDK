#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJMJMJAMMA;
namespace System { class Object; }

#define NEJMJMJAMMA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EACAA70)
#define NEJMJMJAMMA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EACAAB0)
#define NEJMJMJAMMA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EACAAC0)

inline static constexpr unsigned int NEJMJMJAMMA___c_TypeDefinitionIndex = 25621;

	class NEJMJMJAMMA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x629F0);
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
