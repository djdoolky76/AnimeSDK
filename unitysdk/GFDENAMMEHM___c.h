#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFDENAMMEHM;
namespace System { class Object; }

#define GFDENAMMEHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E438350)
#define GFDENAMMEHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E438380)
#define GFDENAMMEHM___C___CCTOR_B__61_0_OFFSET UNITYSDK_OFFSET(0x1E438390)

inline static constexpr unsigned int GFDENAMMEHM___c_TypeDefinitionIndex = 33934;

	class GFDENAMMEHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x12CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFDENAMMEHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDENAMMEHM___C_CTOR_OFFSET))(this);
		}

		::GFDENAMMEHM* __cctor_b__61_0()
		{
			return ((::GFDENAMMEHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFDENAMMEHM___C___CCTOR_B__61_0_OFFSET))(this);
		}

	};
