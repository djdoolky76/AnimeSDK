#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OLOFPKHFPJL;
namespace System { class Object; }

#define OLOFPKHFPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FD6ABC0)
#define OLOFPKHFPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FD6AC00)
#define OLOFPKHFPJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FD6AC10)

inline static constexpr unsigned int OLOFPKHFPJL___c_TypeDefinitionIndex = 27510;

	class OLOFPKHFPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x215B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C_CTOR_OFFSET))(this);
		}

		::OLOFPKHFPJL* __cctor_b__28_0()
		{
			return ((::OLOFPKHFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + OLOFPKHFPJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
