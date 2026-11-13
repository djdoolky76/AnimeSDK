#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GFMEMPALPAM;
namespace System { class Object; }

#define GFMEMPALPAM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20085BF0)
#define GFMEMPALPAM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20085C30)
#define GFMEMPALPAM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x20085C40)

inline static constexpr unsigned int GFMEMPALPAM___c_TypeDefinitionIndex = 33694;

	class GFMEMPALPAM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xC560);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFMEMPALPAM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMEMPALPAM___C_CTOR_OFFSET))(this);
		}

		::GFMEMPALPAM* __cctor_b__23_0()
		{
			return ((::GFMEMPALPAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFMEMPALPAM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
