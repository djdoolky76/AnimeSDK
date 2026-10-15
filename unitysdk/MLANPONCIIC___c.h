#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MLANPONCIIC;
namespace System { class Object; }

#define MLANPONCIIC___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D8A0)
#define MLANPONCIIC___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA7D8E0)
#define MLANPONCIIC___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1EA7D8F0)

inline static constexpr unsigned int MLANPONCIIC___c_TypeDefinitionIndex = 32560;

	class MLANPONCIIC___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x579F0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLANPONCIIC___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC___C_CTOR_OFFSET))(this);
		}

		::MLANPONCIIC* __cctor_b__28_0()
		{
			return ((::MLANPONCIIC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MLANPONCIIC___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
