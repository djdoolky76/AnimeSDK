#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IADPNINDFOK;
namespace System { class Object; }

#define IADPNINDFOK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x2039C8D0)
#define IADPNINDFOK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x2039C910)
#define IADPNINDFOK___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x2039C920)

inline static constexpr unsigned int IADPNINDFOK___c_TypeDefinitionIndex = 35814;

	class IADPNINDFOK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x41FD0);
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
