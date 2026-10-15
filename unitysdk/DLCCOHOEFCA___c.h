#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DLCCOHOEFCA;
namespace System { class Object; }

#define DLCCOHOEFCA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1B0DB0)
#define DLCCOHOEFCA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1B0DE0)
#define DLCCOHOEFCA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1B0DF0)

inline static constexpr unsigned int DLCCOHOEFCA___c_TypeDefinitionIndex = 30808;

	class DLCCOHOEFCA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x34920);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DLCCOHOEFCA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA___C_CTOR_OFFSET))(this);
		}

		::DLCCOHOEFCA* __cctor_b__28_0()
		{
			return ((::DLCCOHOEFCA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DLCCOHOEFCA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
