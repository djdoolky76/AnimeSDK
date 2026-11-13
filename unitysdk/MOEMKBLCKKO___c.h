#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MOEMKBLCKKO;
namespace System { class Object; }

#define MOEMKBLCKKO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FF0EFE0)
#define MOEMKBLCKKO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FF0F020)
#define MOEMKBLCKKO___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1FF0F030)

inline static constexpr unsigned int MOEMKBLCKKO___c_TypeDefinitionIndex = 28284;

	class MOEMKBLCKKO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x539F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOEMKBLCKKO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO___C_CTOR_OFFSET))(this);
		}

		::MOEMKBLCKKO* __cctor_b__18_0()
		{
			return ((::MOEMKBLCKKO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOEMKBLCKKO___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
