#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PELFPKFFFBO;
namespace System { class Object; }

#define PELFPKFFFBO___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F1E9610)
#define PELFPKFFFBO___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F1E9650)
#define PELFPKFFFBO___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F1E9660)

inline static constexpr unsigned int PELFPKFFFBO___c_TypeDefinitionIndex = 31701;

	class PELFPKFFFBO___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x30B10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PELFPKFFFBO___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO___C_CTOR_OFFSET))(this);
		}

		::PELFPKFFFBO* __cctor_b__28_0()
		{
			return ((::PELFPKFFFBO*(*)(::PVOID))((::PBYTE)hIl2Cpp + PELFPKFFFBO___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
