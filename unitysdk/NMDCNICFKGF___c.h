#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NMDCNICFKGF;
namespace System { class Object; }

#define NMDCNICFKGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0604C0)
#define NMDCNICFKGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F060500)
#define NMDCNICFKGF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F060510)

inline static constexpr unsigned int NMDCNICFKGF___c_TypeDefinitionIndex = 30369;

	class NMDCNICFKGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x714E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NMDCNICFKGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF___C_CTOR_OFFSET))(this);
		}

		::NMDCNICFKGF* __cctor_b__23_0()
		{
			return ((::NMDCNICFKGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + NMDCNICFKGF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
