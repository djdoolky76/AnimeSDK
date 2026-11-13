#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NCGFPOKHMBL;
namespace System { class Object; }

#define NCGFPOKHMBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x202F01B0)
#define NCGFPOKHMBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x202F01F0)
#define NCGFPOKHMBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x202F0200)

inline static constexpr unsigned int NCGFPOKHMBL___c_TypeDefinitionIndex = 31598;

	class NCGFPOKHMBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5CB40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NCGFPOKHMBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGFPOKHMBL___C_CTOR_OFFSET))(this);
		}

		::NCGFPOKHMBL* __cctor_b__28_0()
		{
			return ((::NCGFPOKHMBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCGFPOKHMBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
