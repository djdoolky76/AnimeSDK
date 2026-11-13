#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFEJKBHMEOL;
namespace System { class Object; }

#define NFEJKBHMEOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE9BFD0)
#define NFEJKBHMEOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE9C000)
#define NFEJKBHMEOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FE9C010)

inline static constexpr unsigned int NFEJKBHMEOL___c_TypeDefinitionIndex = 29454;

	class NFEJKBHMEOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5FD30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFEJKBHMEOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEJKBHMEOL___C_CTOR_OFFSET))(this);
		}

		::NFEJKBHMEOL* __cctor_b__33_0()
		{
			return ((::NFEJKBHMEOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFEJKBHMEOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
