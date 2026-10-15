#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LEJMFOOIHFN;
namespace System { class Object; }

#define LEJMFOOIHFN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9074E0)
#define LEJMFOOIHFN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E907520)
#define LEJMFOOIHFN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E907530)

inline static constexpr unsigned int LEJMFOOIHFN___c_TypeDefinitionIndex = 33987;

	class LEJMFOOIHFN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32080);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LEJMFOOIHFN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN___C_CTOR_OFFSET))(this);
		}

		::LEJMFOOIHFN* __cctor_b__28_0()
		{
			return ((::LEJMFOOIHFN*(*)(::PVOID))((::PBYTE)hIl2Cpp + LEJMFOOIHFN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
