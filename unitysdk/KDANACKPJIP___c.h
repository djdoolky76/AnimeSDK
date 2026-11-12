#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KDANACKPJIP;
namespace System { class Object; }

#define KDANACKPJIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB12F70)
#define KDANACKPJIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB12FA0)
#define KDANACKPJIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FB12FB0)

inline static constexpr unsigned int KDANACKPJIP___c_TypeDefinitionIndex = 29024;

	class KDANACKPJIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x50990);
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
