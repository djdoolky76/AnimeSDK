#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HIGAMEJNCJJ;
namespace System { class Object; }

#define HIGAMEJNCJJ___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5951A0)
#define HIGAMEJNCJJ___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5951E0)
#define HIGAMEJNCJJ___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E5951F0)

inline static constexpr unsigned int HIGAMEJNCJJ___c_TypeDefinitionIndex = 32759;

	class HIGAMEJNCJJ___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3CEC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HIGAMEJNCJJ___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ___C_CTOR_OFFSET))(this);
		}

		::HIGAMEJNCJJ* __cctor_b__28_0()
		{
			return ((::HIGAMEJNCJJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + HIGAMEJNCJJ___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
