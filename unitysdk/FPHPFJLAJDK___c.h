#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FPHPFJLAJDK;
namespace System { class Object; }

#define FPHPFJLAJDK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E40A500)
#define FPHPFJLAJDK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E40A540)
#define FPHPFJLAJDK___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E40A550)

inline static constexpr unsigned int FPHPFJLAJDK___c_TypeDefinitionIndex = 29142;

	class FPHPFJLAJDK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69660);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FPHPFJLAJDK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK___C_CTOR_OFFSET))(this);
		}

		::FPHPFJLAJDK* __cctor_b__33_0()
		{
			return ((::FPHPFJLAJDK*(*)(::PVOID))((::PBYTE)hIl2Cpp + FPHPFJLAJDK___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
