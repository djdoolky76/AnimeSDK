#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NJPJKJBMKGB;
namespace System { class Object; }

#define NJPJKJBMKGB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB54A30)
#define NJPJKJBMKGB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB54A70)
#define NJPJKJBMKGB___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1EB54A80)

inline static constexpr unsigned int NJPJKJBMKGB___c_TypeDefinitionIndex = 27796;

	class NJPJKJBMKGB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x65CE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NJPJKJBMKGB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB___C_CTOR_OFFSET))(this);
		}

		::NJPJKJBMKGB* __cctor_b__43_0()
		{
			return ((::NJPJKJBMKGB*(*)(::PVOID))((::PBYTE)hIl2Cpp + NJPJKJBMKGB___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
