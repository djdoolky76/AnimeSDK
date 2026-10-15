#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LENPMJECBLF;
namespace System { class Object; }

#define LENPMJECBLF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E90B330)
#define LENPMJECBLF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E90B360)
#define LENPMJECBLF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E90B370)

inline static constexpr unsigned int LENPMJECBLF___c_TypeDefinitionIndex = 33867;

	class LENPMJECBLF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32540);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LENPMJECBLF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF___C_CTOR_OFFSET))(this);
		}

		::LENPMJECBLF* __cctor_b__23_0()
		{
			return ((::LENPMJECBLF*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENPMJECBLF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
