#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKHJDNMDJNC;
namespace System { class Object; }

#define LKHJDNMDJNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E98FE50)
#define LKHJDNMDJNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E98FE90)
#define LKHJDNMDJNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E98FEA0)

inline static constexpr unsigned int LKHJDNMDJNC___c_TypeDefinitionIndex = 26007;

	class LKHJDNMDJNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4A960);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + LKHJDNMDJNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHJDNMDJNC___C_CTOR_OFFSET))(this);
		}

		::LKHJDNMDJNC* __cctor_b__28_0()
		{
			return ((::LKHJDNMDJNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + LKHJDNMDJNC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
