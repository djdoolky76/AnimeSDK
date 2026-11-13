#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AMDOMPIGBPG;
namespace System { class Object; }

#define AMDOMPIGBPG___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x200276A0)
#define AMDOMPIGBPG___C_CTOR_OFFSET UNITYSDK_OFFSET(0x200276E0)
#define AMDOMPIGBPG___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x200276F0)

inline static constexpr unsigned int AMDOMPIGBPG___c_TypeDefinitionIndex = 35798;

	class AMDOMPIGBPG___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x39560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AMDOMPIGBPG___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG___C_CTOR_OFFSET))(this);
		}

		::AMDOMPIGBPG* __cctor_b__18_0()
		{
			return ((::AMDOMPIGBPG*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMDOMPIGBPG___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
