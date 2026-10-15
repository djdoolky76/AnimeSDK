#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GAECNILJCEC;
namespace System { class Object; }

#define GAECNILJCEC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3ECFE0)
#define GAECNILJCEC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3ED020)
#define GAECNILJCEC___C___CCTOR_B__108_0_OFFSET UNITYSDK_OFFSET(0x1E3ED030)

inline static constexpr unsigned int GAECNILJCEC___c_TypeDefinitionIndex = 27251;

	class GAECNILJCEC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2680);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GAECNILJCEC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAECNILJCEC___C_CTOR_OFFSET))(this);
		}

		::GAECNILJCEC* __cctor_b__108_0()
		{
			return ((::GAECNILJCEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAECNILJCEC___C___CCTOR_B__108_0_OFFSET))(this);
		}

	};
