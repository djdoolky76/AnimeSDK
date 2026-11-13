#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCBGMJAICJ;
namespace System { class Object; }

#define LLCBGMJAICJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF444F0)
#define LLCBGMJAICJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF44530)
#define LLCBGMJAICJ___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FF44540)

inline static constexpr unsigned int LLCBGMJAICJ___c_TypeDefinitionIndex = 27531;

	class LLCBGMJAICJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LLCBGMJAICJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBGMJAICJ___C_CTOR_OFFSET))(this);
		}

		::LLCBGMJAICJ* __cctor_b__33_0()
		{
			return ((::LLCBGMJAICJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLCBGMJAICJ___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
