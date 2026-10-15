#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DAMBPIKLCBL;
namespace System { class Object; }

#define DAMBPIKLCBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E153E80)
#define DAMBPIKLCBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E153EC0)
#define DAMBPIKLCBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E153ED0)

inline static constexpr unsigned int DAMBPIKLCBL___c_TypeDefinitionIndex = 28994;

	class DAMBPIKLCBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x24CB0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DAMBPIKLCBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL___C_CTOR_OFFSET))(this);
		}

		::DAMBPIKLCBL* __cctor_b__28_0()
		{
			return ((::DAMBPIKLCBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + DAMBPIKLCBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
