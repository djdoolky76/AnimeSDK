#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DOOOBFLCMKC;
namespace System { class Object; }

#define DOOOBFLCMKC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1D88A0)
#define DOOOBFLCMKC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1D88E0)
#define DOOOBFLCMKC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E1D88F0)

inline static constexpr unsigned int DOOOBFLCMKC___c_TypeDefinitionIndex = 35049;

	class DOOOBFLCMKC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x38320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C_CTOR_OFFSET))(this);
		}

		::DOOOBFLCMKC* __cctor_b__23_0()
		{
			return ((::DOOOBFLCMKC*(*)(::PVOID))((::PBYTE)hIl2Cpp + DOOOBFLCMKC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
