#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFNKGEIEDOA;
namespace System { class Object; }

#define DFNKGEIEDOA___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20647860)
#define DFNKGEIEDOA___C_CTOR_OFFSET UNITYSDK_OFFSET(0x206478A0)
#define DFNKGEIEDOA___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x206478B0)

inline static constexpr unsigned int DFNKGEIEDOA___c_TypeDefinitionIndex = 32810;

	class DFNKGEIEDOA___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x29570);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C_CTOR_OFFSET))(this);
		}

		::DFNKGEIEDOA* __cctor_b__33_0()
		{
			return ((::DFNKGEIEDOA*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFNKGEIEDOA___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
