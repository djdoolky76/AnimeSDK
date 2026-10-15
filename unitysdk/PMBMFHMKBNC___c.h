#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class PMBMFHMKBNC;
namespace System { class Object; }

#define PMBMFHMKBNC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DFA9090)
#define PMBMFHMKBNC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DFA90D0)
#define PMBMFHMKBNC___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1DFA90E0)

inline static constexpr unsigned int PMBMFHMKBNC___c_TypeDefinitionIndex = 30734;

	class PMBMFHMKBNC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D140);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + PMBMFHMKBNC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC___C_CTOR_OFFSET))(this);
		}

		::PMBMFHMKBNC* __cctor_b__23_0()
		{
			return ((::PMBMFHMKBNC*(*)(::PVOID))((::PBYTE)hIl2Cpp + PMBMFHMKBNC___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
