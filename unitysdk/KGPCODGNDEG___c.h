#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KGPCODGNDEG;
namespace System { class Object; }

#define KGPCODGNDEG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E83D3E0)
#define KGPCODGNDEG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E83D410)
#define KGPCODGNDEG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E83D420)

inline static constexpr unsigned int KGPCODGNDEG___c_TypeDefinitionIndex = 30784;

	class KGPCODGNDEG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x16A80);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KGPCODGNDEG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG___C_CTOR_OFFSET))(this);
		}

		::KGPCODGNDEG* __cctor_b__28_0()
		{
			return ((::KGPCODGNDEG*(*)(::PVOID))((::PBYTE)hIl2Cpp + KGPCODGNDEG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
