#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NOMBOPLGJJC;
namespace System { class Object; }

#define NOMBOPLGJJC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F083720)
#define NOMBOPLGJJC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F083760)
#define NOMBOPLGJJC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F083770)

inline static constexpr unsigned int NOMBOPLGJJC___c_TypeDefinitionIndex = 28560;

	class NOMBOPLGJJC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x72A20);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NOMBOPLGJJC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC___C_CTOR_OFFSET))(this);
		}

		::NOMBOPLGJJC* __cctor_b__28_0()
		{
			return ((::NOMBOPLGJJC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NOMBOPLGJJC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
