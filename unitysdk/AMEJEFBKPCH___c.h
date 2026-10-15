#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMEJEFBKPCH;
namespace System { class Object; }

#define AMEJEFBKPCH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4F1480)
#define AMEJEFBKPCH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4F14C0)
#define AMEJEFBKPCH___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E4F14D0)

inline static constexpr unsigned int AMEJEFBKPCH___c_TypeDefinitionIndex = 34789;

	class AMEJEFBKPCH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x44E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMEJEFBKPCH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEJEFBKPCH___C_CTOR_OFFSET))(this);
		}

		::AMEJEFBKPCH* __cctor_b__33_0()
		{
			return ((::AMEJEFBKPCH*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMEJEFBKPCH___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
