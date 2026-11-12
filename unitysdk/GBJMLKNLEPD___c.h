#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJMLKNLEPD;
namespace System { class Object; }

#define GBJMLKNLEPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F71C2A0)
#define GBJMLKNLEPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F71C2E0)
#define GBJMLKNLEPD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1F71C2F0)

inline static constexpr unsigned int GBJMLKNLEPD___c_TypeDefinitionIndex = 26106;

	class GBJMLKNLEPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x55820);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C_CTOR_OFFSET))(this);
		}

		::GBJMLKNLEPD* __cctor_b__48_0()
		{
			return ((::GBJMLKNLEPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GBJMLKNLEPD___C___CCTOR_B__48_0_OFFSET))(this);
		}

	};
