#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OPHOAKJPGFE;
namespace System { class Object; }

#define OPHOAKJPGFE___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4A30)
#define OPHOAKJPGFE___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DEB4A70)
#define OPHOAKJPGFE___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1DEB4A80)

inline static constexpr unsigned int OPHOAKJPGFE___c_TypeDefinitionIndex = 31232;

	class OPHOAKJPGFE___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2B0A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C_CTOR_OFFSET))(this);
		}

		::OPHOAKJPGFE* __cctor_b__28_0()
		{
			return ((::OPHOAKJPGFE*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPHOAKJPGFE___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
