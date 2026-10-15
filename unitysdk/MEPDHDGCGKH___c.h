#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEPDHDGCGKH;
namespace System { class Object; }

#define MEPDHDGCGKH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9E5250)
#define MEPDHDGCGKH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9E5290)
#define MEPDHDGCGKH___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E9E52A0)

inline static constexpr unsigned int MEPDHDGCGKH___c_TypeDefinitionIndex = 29703;

	class MEPDHDGCGKH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4E250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEPDHDGCGKH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH___C_CTOR_OFFSET))(this);
		}

		::MEPDHDGCGKH* __cctor_b__18_0()
		{
			return ((::MEPDHDGCGKH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPDHDGCGKH___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
