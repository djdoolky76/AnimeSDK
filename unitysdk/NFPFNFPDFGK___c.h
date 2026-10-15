#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NFPFNFPDFGK;
namespace System { class Object; }

#define NFPFNFPDFGK___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EB09880)
#define NFPFNFPDFGK___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB098C0)
#define NFPFNFPDFGK___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EB098D0)

inline static constexpr unsigned int NFPFNFPDFGK___c_TypeDefinitionIndex = 27605;

	class NFPFNFPDFGK___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EE90);
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
