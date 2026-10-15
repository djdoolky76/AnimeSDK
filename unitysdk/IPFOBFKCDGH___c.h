#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IPFOBFKCDGH;
namespace System { class Object; }

#define IPFOBFKCDGH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6B2280)
#define IPFOBFKCDGH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6B22C0)
#define IPFOBFKCDGH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E6B22D0)

inline static constexpr unsigned int IPFOBFKCDGH___c_TypeDefinitionIndex = 28053;

	class IPFOBFKCDGH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55FB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C_CTOR_OFFSET))(this);
		}

		::IPFOBFKCDGH* __cctor_b__28_0()
		{
			return ((::IPFOBFKCDGH*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPFOBFKCDGH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
