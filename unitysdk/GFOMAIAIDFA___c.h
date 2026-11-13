#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFOMAIAIDFA;
namespace System { class Object; }

#define GFOMAIAIDFA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20089B10)
#define GFOMAIAIDFA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20089B50)
#define GFOMAIAIDFA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20089B60)

inline static constexpr unsigned int GFOMAIAIDFA___c_TypeDefinitionIndex = 30012;

	class GFOMAIAIDFA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC970);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFOMAIAIDFA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA___C_CTOR_OFFSET))(this);
		}

		::GFOMAIAIDFA* __cctor_b__23_0()
		{
			return ((::GFOMAIAIDFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFOMAIAIDFA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
