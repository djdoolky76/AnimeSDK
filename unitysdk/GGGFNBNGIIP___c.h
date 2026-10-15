#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GGGFNBNGIIP;
namespace System { class Object; }

#define GGGFNBNGIIP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E44E140)
#define GGGFNBNGIIP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E44E180)
#define GGGFNBNGIIP___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E44E190)

inline static constexpr unsigned int GGGFNBNGIIP___c_TypeDefinitionIndex = 27492;

	class GGGFNBNGIIP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x15460);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GGGFNBNGIIP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP___C_CTOR_OFFSET))(this);
		}

		::GGGFNBNGIIP* __cctor_b__33_0()
		{
			return ((::GGGFNBNGIIP*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGGFNBNGIIP___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
