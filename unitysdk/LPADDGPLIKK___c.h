#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LPADDGPLIKK;
namespace System { class Object; }

#define LPADDGPLIKK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9C8270)
#define LPADDGPLIKK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9C82A0)
#define LPADDGPLIKK___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1E9C82B0)

inline static constexpr unsigned int LPADDGPLIKK___c_TypeDefinitionIndex = 33646;

	class LPADDGPLIKK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x40E30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LPADDGPLIKK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK___C_CTOR_OFFSET))(this);
		}

		::LPADDGPLIKK* __cctor_b__48_0()
		{
			return ((::LPADDGPLIKK*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPADDGPLIKK___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
