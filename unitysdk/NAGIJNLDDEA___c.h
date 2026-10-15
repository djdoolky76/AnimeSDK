#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NAGIJNLDDEA;
namespace System { class Object; }

#define NAGIJNLDDEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA948A0)
#define NAGIJNLDDEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA948E0)
#define NAGIJNLDDEA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1EA948F0)

inline static constexpr unsigned int NAGIJNLDDEA___c_TypeDefinitionIndex = 28257;

	class NAGIJNLDDEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CAB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NAGIJNLDDEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA___C_CTOR_OFFSET))(this);
		}

		::NAGIJNLDDEA* __cctor_b__33_0()
		{
			return ((::NAGIJNLDDEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NAGIJNLDDEA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
