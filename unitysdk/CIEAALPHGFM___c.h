#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CIEAALPHGFM;
namespace System { class Object; }

#define CIEAALPHGFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0F60)
#define CIEAALPHGFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3A0FA0)
#define CIEAALPHGFM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F3A0FB0)

inline static constexpr unsigned int CIEAALPHGFM___c_TypeDefinitionIndex = 35611;

	class CIEAALPHGFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10E70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CIEAALPHGFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM___C_CTOR_OFFSET))(this);
		}

		::CIEAALPHGFM* __cctor_b__18_0()
		{
			return ((::CIEAALPHGFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CIEAALPHGFM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
