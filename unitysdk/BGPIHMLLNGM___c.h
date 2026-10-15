#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGPIHMLLNGM;
namespace System { class Object; }

#define BGPIHMLLNGM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDF1970)
#define BGPIHMLLNGM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDF19B0)
#define BGPIHMLLNGM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1DDF19C0)

inline static constexpr unsigned int BGPIHMLLNGM___c_TypeDefinitionIndex = 28917;

	class BGPIHMLLNGM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44DE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGPIHMLLNGM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPIHMLLNGM___C_CTOR_OFFSET))(this);
		}

		::BGPIHMLLNGM* __cctor_b__38_0()
		{
			return ((::BGPIHMLLNGM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGPIHMLLNGM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
