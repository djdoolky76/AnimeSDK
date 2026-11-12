#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JJJOADIAEOH;
namespace System { class Object; }

#define JJJOADIAEOH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FA8C840)
#define JJJOADIAEOH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FA8C870)
#define JJJOADIAEOH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FA8C880)

inline static constexpr unsigned int JJJOADIAEOH___c_TypeDefinitionIndex = 35106;

	class JJJOADIAEOH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4F020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JJJOADIAEOH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJOADIAEOH___C_CTOR_OFFSET))(this);
		}

		::JJJOADIAEOH* __cctor_b__33_0()
		{
			return ((::JJJOADIAEOH*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJOADIAEOH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
