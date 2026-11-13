#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BEDLDBOAPPM;
namespace System { class Object; }

#define BEDLDBOAPPM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F9F9630)
#define BEDLDBOAPPM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F9F9670)
#define BEDLDBOAPPM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F9F9680)

inline static constexpr unsigned int BEDLDBOAPPM___c_TypeDefinitionIndex = 26580;

	class BEDLDBOAPPM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x48A10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C_CTOR_OFFSET))(this);
		}

		::BEDLDBOAPPM* __cctor_b__33_0()
		{
			return ((::BEDLDBOAPPM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BEDLDBOAPPM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
