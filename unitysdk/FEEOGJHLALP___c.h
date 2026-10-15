#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FEEOGJHLALP;
namespace System { class Object; }

#define FEEOGJHLALP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E365830)
#define FEEOGJHLALP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E365870)
#define FEEOGJHLALP___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E365880)

inline static constexpr unsigned int FEEOGJHLALP___c_TypeDefinitionIndex = 34280;

	class FEEOGJHLALP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FEEOGJHLALP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP___C_CTOR_OFFSET))(this);
		}

		::FEEOGJHLALP* __cctor_b__28_0()
		{
			return ((::FEEOGJHLALP*(*)(::PVOID))((::PBYTE)hIl2Cpp + FEEOGJHLALP___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
