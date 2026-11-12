#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFPFNFPDFGK;
namespace System { class Object; }

#define NFPFNFPDFGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FE4BD70)
#define NFPFNFPDFGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FE4BDB0)
#define NFPFNFPDFGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FE4BDC0)

inline static constexpr unsigned int NFPFNFPDFGK___c_TypeDefinitionIndex = 28136;

	class NFPFNFPDFGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x69DA0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NFPFNFPDFGK___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK___C_CTOR_OFFSET))(this);
		}

		::NFPFNFPDFGK* __cctor_b__28_0()
		{
			return ((::NFPFNFPDFGK*(*)(::PVOID))((::PBYTE)hIl2Cpp + NFPFNFPDFGK___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
