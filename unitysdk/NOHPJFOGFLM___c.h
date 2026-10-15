#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOHPJFOGFLM;
namespace System { class Object; }

#define NOHPJFOGFLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB8BF20)
#define NOHPJFOGFLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB8BF60)
#define NOHPJFOGFLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB8BF70)

inline static constexpr unsigned int NOHPJFOGFLM___c_TypeDefinitionIndex = 27988;

	class NOHPJFOGFLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOHPJFOGFLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM___C_CTOR_OFFSET))(this);
		}

		::NOHPJFOGFLM* __cctor_b__28_0()
		{
			return ((::NOHPJFOGFLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOHPJFOGFLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
