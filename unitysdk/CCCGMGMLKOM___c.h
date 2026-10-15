#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CCCGMGMLKOM;
namespace System { class Object; }

#define CCCGMGMLKOM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E044F20)
#define CCCGMGMLKOM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E044F60)
#define CCCGMGMLKOM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E044F70)

inline static constexpr unsigned int CCCGMGMLKOM___c_TypeDefinitionIndex = 30036;

	class CCCGMGMLKOM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xCAA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CCCGMGMLKOM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM___C_CTOR_OFFSET))(this);
		}

		::CCCGMGMLKOM* __cctor_b__33_0()
		{
			return ((::CCCGMGMLKOM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CCCGMGMLKOM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
