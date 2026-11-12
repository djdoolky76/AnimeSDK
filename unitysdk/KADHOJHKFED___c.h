#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KADHOJHKFED;
namespace System { class Object; }

#define KADHOJHKFED___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FAF2010)
#define KADHOJHKFED___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FAF2050)
#define KADHOJHKFED___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FAF2060)

inline static constexpr unsigned int KADHOJHKFED___c_TypeDefinitionIndex = 27241;

	class KADHOJHKFED___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AC80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KADHOJHKFED___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KADHOJHKFED___C_CTOR_OFFSET))(this);
		}

		::KADHOJHKFED* __cctor_b__28_0()
		{
			return ((::KADHOJHKFED*(*)(::PVOID))((::PBYTE)hIl2Cpp + KADHOJHKFED___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
