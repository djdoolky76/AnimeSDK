#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LJJPJCBAHLM;
namespace System { class Object; }

#define LJJPJCBAHLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F987350)
#define LJJPJCBAHLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F987390)
#define LJJPJCBAHLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9873A0)

inline static constexpr unsigned int LJJPJCBAHLM___c_TypeDefinitionIndex = 28308;

	class LJJPJCBAHLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D070);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LJJPJCBAHLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM___C_CTOR_OFFSET))(this);
		}

		::LJJPJCBAHLM* __cctor_b__28_0()
		{
			return ((::LJJPJCBAHLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJPJCBAHLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
