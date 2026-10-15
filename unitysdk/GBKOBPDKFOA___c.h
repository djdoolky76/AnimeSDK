#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBKOBPDKFOA;
namespace System { class Object; }

#define GBKOBPDKFOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4307A0)
#define GBKOBPDKFOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4307E0)
#define GBKOBPDKFOA___C___CCTOR_B__36_0_OFFSET UNITYSDK_OFFSET(0x1E4307F0)

inline static constexpr unsigned int GBKOBPDKFOA___c_TypeDefinitionIndex = 27803;

	class GBKOBPDKFOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xDA00);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBKOBPDKFOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA___C_CTOR_OFFSET))(this);
		}

		::GBKOBPDKFOA* __cctor_b__36_0()
		{
			return ((::GBKOBPDKFOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBKOBPDKFOA___C___CCTOR_B__36_0_OFFSET))(this);
		}

	};
