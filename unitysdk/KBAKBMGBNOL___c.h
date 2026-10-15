#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class KBAKBMGBNOL;
namespace System { class Object; }

#define KBAKBMGBNOL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC0C0)
#define KBAKBMGBNOL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E7BC100)
#define KBAKBMGBNOL___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E7BC110)

inline static constexpr unsigned int KBAKBMGBNOL___c_TypeDefinitionIndex = 30343;

	class KBAKBMGBNOL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xD340);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KBAKBMGBNOL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL___C_CTOR_OFFSET))(this);
		}

		::KBAKBMGBNOL* __cctor_b__33_0()
		{
			return ((::KBAKBMGBNOL*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBAKBMGBNOL___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
