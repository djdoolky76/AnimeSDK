#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GBJMLKNLEPD;
namespace System { class Object; }

#define GBJMLKNLEPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FC4E8A0)
#define GBJMLKNLEPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FC4E8E0)
#define GBJMLKNLEPD___C___CCTOR_B__48_0_OFFSET UNITYSDK_OFFSET(0x1FC4E8F0)

inline static constexpr unsigned int GBJMLKNLEPD___c_TypeDefinitionIndex = 26106;

	class GBJMLKNLEPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x577C0);
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
