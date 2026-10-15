#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EGOBMOAGCFL;
namespace System { class Object; }

#define EGOBMOAGCFL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E26E5E0)
#define EGOBMOAGCFL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E26E610)
#define EGOBMOAGCFL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E26E620)

inline static constexpr unsigned int EGOBMOAGCFL___c_TypeDefinitionIndex = 33911;

	class EGOBMOAGCFL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48AE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EGOBMOAGCFL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOBMOAGCFL___C_CTOR_OFFSET))(this);
		}

		::EGOBMOAGCFL* __cctor_b__28_0()
		{
			return ((::EGOBMOAGCFL*(*)(::PVOID))((::PBYTE)hIl2Cpp + EGOBMOAGCFL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
