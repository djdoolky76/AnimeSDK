#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KHJMLKBLAMP;
namespace System { class Object; }

#define KHJMLKBLAMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E817FE0)
#define KHJMLKBLAMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E818020)
#define KHJMLKBLAMP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E818030)

inline static constexpr unsigned int KHJMLKBLAMP___c_TypeDefinitionIndex = 33849;

	class KHJMLKBLAMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16310);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C_CTOR_OFFSET))(this);
		}

		::KHJMLKBLAMP* __cctor_b__18_0()
		{
			return ((::KHJMLKBLAMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHJMLKBLAMP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
