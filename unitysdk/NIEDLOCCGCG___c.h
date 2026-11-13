#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NIEDLOCCGCG;
namespace System { class Object; }

#define NIEDLOCCGCG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EABFA00)
#define NIEDLOCCGCG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EABFA30)
#define NIEDLOCCGCG___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EABFA40)

inline static constexpr unsigned int NIEDLOCCGCG___c_TypeDefinitionIndex = 31676;

	class NIEDLOCCGCG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x62580);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NIEDLOCCGCG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG___C_CTOR_OFFSET))(this);
		}

		::NIEDLOCCGCG* __cctor_b__28_0()
		{
			return ((::NIEDLOCCGCG*(*)(::PVOID))((::PBYTE)hIl2Cpp + NIEDLOCCGCG___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
