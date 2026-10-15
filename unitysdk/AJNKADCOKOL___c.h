#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AJNKADCOKOL;
namespace System { class Object; }

#define AJNKADCOKOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E398E50)
#define AJNKADCOKOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E398E90)
#define AJNKADCOKOL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E398EA0)

inline static constexpr unsigned int AJNKADCOKOL___c_TypeDefinitionIndex = 27751;

	class AJNKADCOKOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3E190);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AJNKADCOKOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL___C_CTOR_OFFSET))(this);
		}

		::AJNKADCOKOL* __cctor_b__28_0()
		{
			return ((::AJNKADCOKOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNKADCOKOL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
