#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IADPNINDFOK;
namespace System { class Object; }

#define IADPNINDFOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5D64B0)
#define IADPNINDFOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5D64F0)
#define IADPNINDFOK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E5D6500)

inline static constexpr unsigned int IADPNINDFOK___c_TypeDefinitionIndex = 34886;

	class IADPNINDFOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40730);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IADPNINDFOK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK___C_CTOR_OFFSET))(this);
		}

		::IADPNINDFOK* __cctor_b__18_0()
		{
			return ((::IADPNINDFOK*(*)(::PVOID))((::PBYTE)hIl2Cpp + IADPNINDFOK___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
