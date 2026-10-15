#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HHDHGGCAJJL;
namespace System { class Object; }

#define HHDHGGCAJJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E559CD0)
#define HHDHGGCAJJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E559D10)
#define HHDHGGCAJJL___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E559D20)

inline static constexpr unsigned int HHDHGGCAJJL___c_TypeDefinitionIndex = 34896;

	class HHDHGGCAJJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x31D90);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HHDHGGCAJJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL___C_CTOR_OFFSET))(this);
		}

		::HHDHGGCAJJL* __cctor_b__23_0()
		{
			return ((::HHDHGGCAJJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + HHDHGGCAJJL___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
