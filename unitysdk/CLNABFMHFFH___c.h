#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CLNABFMHFFH;
namespace System { class Object; }

#define CLNABFMHFFH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0000)
#define CLNABFMHFFH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0D0040)
#define CLNABFMHFFH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E0D0050)

inline static constexpr unsigned int CLNABFMHFFH___c_TypeDefinitionIndex = 28268;

	class CLNABFMHFFH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1B9F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLNABFMHFFH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH___C_CTOR_OFFSET))(this);
		}

		::CLNABFMHFFH* __cctor_b__28_0()
		{
			return ((::CLNABFMHFFH*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLNABFMHFFH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
