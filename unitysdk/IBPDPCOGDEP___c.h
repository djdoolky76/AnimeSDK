#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IBPDPCOGDEP;
namespace System { class Object; }

#define IBPDPCOGDEP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20125FB0)
#define IBPDPCOGDEP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20125FF0)
#define IBPDPCOGDEP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20126000)

inline static constexpr unsigned int IBPDPCOGDEP___c_TypeDefinitionIndex = 29897;

	class IBPDPCOGDEP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x47230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IBPDPCOGDEP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP___C_CTOR_OFFSET))(this);
		}

		::IBPDPCOGDEP* __cctor_b__28_0()
		{
			return ((::IBPDPCOGDEP*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBPDPCOGDEP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
