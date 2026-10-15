#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JFFEDGDNJEA;
namespace System { class Object; }

#define JFFEDGDNJEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E6FCE10)
#define JFFEDGDNJEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E6FCE50)
#define JFFEDGDNJEA___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E6FCE60)

inline static constexpr unsigned int JFFEDGDNJEA___c_TypeDefinitionIndex = 30248;

	class JFFEDGDNJEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5D020);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + JFFEDGDNJEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA___C_CTOR_OFFSET))(this);
		}

		::JFFEDGDNJEA* __cctor_b__23_0()
		{
			return ((::JFFEDGDNJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + JFFEDGDNJEA___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
