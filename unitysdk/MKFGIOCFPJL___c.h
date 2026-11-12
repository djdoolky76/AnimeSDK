#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MKFGIOCFPJL;
namespace System { class Object; }

#define MKFGIOCFPJL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FDAAE10)
#define MKFGIOCFPJL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FDAAE50)
#define MKFGIOCFPJL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1FDAAE60)

inline static constexpr unsigned int MKFGIOCFPJL___c_TypeDefinitionIndex = 26788;

	class MKFGIOCFPJL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5BBC0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MKFGIOCFPJL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL___C_CTOR_OFFSET))(this);
		}

		::MKFGIOCFPJL* __cctor_b__28_0()
		{
			return ((::MKFGIOCFPJL*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKFGIOCFPJL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
