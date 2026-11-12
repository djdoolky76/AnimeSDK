#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IECODOPOOBL;
namespace System { class Object; }

#define IECODOPOOBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F953790)
#define IECODOPOOBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9537D0)
#define IECODOPOOBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1F9537E0)

inline static constexpr unsigned int IECODOPOOBL___c_TypeDefinitionIndex = 27553;

	class IECODOPOOBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x45440);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IECODOPOOBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL___C_CTOR_OFFSET))(this);
		}

		::IECODOPOOBL* __cctor_b__28_0()
		{
			return ((::IECODOPOOBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + IECODOPOOBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
