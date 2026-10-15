#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HMOGLECADPG;
namespace System { class Object; }

#define HMOGLECADPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E5A98B0)
#define HMOGLECADPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E5A98F0)
#define HMOGLECADPG___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E5A9900)

inline static constexpr unsigned int HMOGLECADPG___c_TypeDefinitionIndex = 28984;

	class HMOGLECADPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3A720);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HMOGLECADPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG___C_CTOR_OFFSET))(this);
		}

		::HMOGLECADPG* __cctor_b__33_0()
		{
			return ((::HMOGLECADPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + HMOGLECADPG___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
