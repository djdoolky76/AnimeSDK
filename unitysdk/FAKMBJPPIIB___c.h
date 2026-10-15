#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FAKMBJPPIIB;
namespace System { class Object; }

#define FAKMBJPPIIB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB290)
#define FAKMBJPPIIB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2FB2D0)
#define FAKMBJPPIIB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E2FB2E0)

inline static constexpr unsigned int FAKMBJPPIIB___c_TypeDefinitionIndex = 27464;

	class FAKMBJPPIIB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D280);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FAKMBJPPIIB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB___C_CTOR_OFFSET))(this);
		}

		::FAKMBJPPIIB* __cctor_b__23_0()
		{
			return ((::FAKMBJPPIIB*(*)(::PVOID))((::PBYTE)hIl2Cpp + FAKMBJPPIIB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
