#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MCHAMBDHPEN;
namespace System { class Object; }

#define MCHAMBDHPEN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9F7490)
#define MCHAMBDHPEN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9F74D0)
#define MCHAMBDHPEN___C___CCTOR_B__78_0_OFFSET UNITYSDK_OFFSET(0x1E9F74E0)

inline static constexpr unsigned int MCHAMBDHPEN___c_TypeDefinitionIndex = 25131;

	class MCHAMBDHPEN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x478C0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MCHAMBDHPEN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHAMBDHPEN___C_CTOR_OFFSET))(this);
		}

		::MCHAMBDHPEN* __cctor_b__78_0()
		{
			return ((::MCHAMBDHPEN*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCHAMBDHPEN___C___CCTOR_B__78_0_OFFSET))(this);
		}

	};
