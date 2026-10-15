#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCENFLDDJEA;
namespace System { class Object; }

#define NCENFLDDJEA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EAAB9D0)
#define NCENFLDDJEA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EAABA10)
#define NCENFLDDJEA___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EAABA20)

inline static constexpr unsigned int NCENFLDDJEA___c_TypeDefinitionIndex = 28442;

	class NCENFLDDJEA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5E790);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCENFLDDJEA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA___C_CTOR_OFFSET))(this);
		}

		::NCENFLDDJEA* __cctor_b__28_0()
		{
			return ((::NCENFLDDJEA*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCENFLDDJEA___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
