#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IEJIOGIGFAI;
namespace System { class Object; }

#define IEJIOGIGFAI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E63BF30)
#define IEJIOGIGFAI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E63BF70)
#define IEJIOGIGFAI___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E63BF80)

inline static constexpr unsigned int IEJIOGIGFAI___c_TypeDefinitionIndex = 32847;

	class IEJIOGIGFAI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48C30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IEJIOGIGFAI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI___C_CTOR_OFFSET))(this);
		}

		::IEJIOGIGFAI* __cctor_b__28_0()
		{
			return ((::IEJIOGIGFAI*(*)(::PVOID))((::PBYTE)hIl2Cpp + IEJIOGIGFAI___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
