#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BLIOAJGEJNN;
namespace System { class Object; }

#define BLIOAJGEJNN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC67760)
#define BLIOAJGEJNN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC677A0)
#define BLIOAJGEJNN___C___CCTOR_B__68_0_OFFSET UNITYSDK_OFFSET(0x1FC677B0)

inline static constexpr unsigned int BLIOAJGEJNN___c_TypeDefinitionIndex = 31313;

	class BLIOAJGEJNN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x583F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C_CTOR_OFFSET))(this);
		}

		::BLIOAJGEJNN* __cctor_b__68_0()
		{
			return ((::BLIOAJGEJNN*(*)(::PVOID))((::PBYTE)hIl2Cpp + BLIOAJGEJNN___C___CCTOR_B__68_0_OFFSET))(this);
		}

	};
