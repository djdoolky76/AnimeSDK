#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDANACKPJIP;
namespace System { class Object; }

#define KDANACKPJIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7FD160)
#define KDANACKPJIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7FD190)
#define KDANACKPJIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7FD1A0)

inline static constexpr unsigned int KDANACKPJIP___c_TypeDefinitionIndex = 28434;

	class KDANACKPJIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x10720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KDANACKPJIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP___C_CTOR_OFFSET))(this);
		}

		::KDANACKPJIP* __cctor_b__33_0()
		{
			return ((::KDANACKPJIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KDANACKPJIP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
