#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ONFLANPGHHL;
namespace System { class Object; }

#define ONFLANPGHHL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC2A7C0)
#define ONFLANPGHHL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC2A800)
#define ONFLANPGHHL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1FC2A810)

inline static constexpr unsigned int ONFLANPGHHL___c_TypeDefinitionIndex = 33513;

	class ONFLANPGHHL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x28300);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ONFLANPGHHL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLANPGHHL___C_CTOR_OFFSET))(this);
		}

		::ONFLANPGHHL* __cctor_b__33_0()
		{
			return ((::ONFLANPGHHL*(*)(::PVOID))((::PBYTE)hIl2Cpp + ONFLANPGHHL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
