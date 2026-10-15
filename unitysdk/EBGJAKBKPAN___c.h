#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EBGJAKBKPAN;
namespace System { class Object; }

#define EBGJAKBKPAN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2376D0)
#define EBGJAKBKPAN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E237710)
#define EBGJAKBKPAN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E237720)

inline static constexpr unsigned int EBGJAKBKPAN___c_TypeDefinitionIndex = 34274;

	class EBGJAKBKPAN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4AD70);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EBGJAKBKPAN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN___C_CTOR_OFFSET))(this);
		}

		::EBGJAKBKPAN* __cctor_b__28_0()
		{
			return ((::EBGJAKBKPAN*(*)(::PVOID))((::PBYTE)hIl2Cpp + EBGJAKBKPAN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
