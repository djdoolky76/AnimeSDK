#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LKHJDNMDJNC;
namespace System { class Object; }

#define LKHJDNMDJNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9627E0)
#define LKHJDNMDJNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E962820)
#define LKHJDNMDJNC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E962830)

inline static constexpr unsigned int LKHJDNMDJNC___c_TypeDefinitionIndex = 26007;

	class LKHJDNMDJNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A820);
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
