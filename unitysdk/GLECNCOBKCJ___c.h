#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLECNCOBKCJ;
namespace System { class Object; }

#define GLECNCOBKCJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF4E0)
#define GLECNCOBKCJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4BF520)
#define GLECNCOBKCJ___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E4BF530)

inline static constexpr unsigned int GLECNCOBKCJ___c_TypeDefinitionIndex = 31799;

	class GLECNCOBKCJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F2F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLECNCOBKCJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ___C_CTOR_OFFSET))(this);
		}

		::GLECNCOBKCJ* __cctor_b__38_0()
		{
			return ((::GLECNCOBKCJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLECNCOBKCJ___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
