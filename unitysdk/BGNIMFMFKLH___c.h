#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BGNIMFMFKLH;
namespace System { class Object; }

#define BGNIMFMFKLH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x20110EB0)
#define BGNIMFMFKLH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x20110EF0)
#define BGNIMFMFKLH___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x20110F00)

inline static constexpr unsigned int BGNIMFMFKLH___c_TypeDefinitionIndex = 29005;

	class BGNIMFMFKLH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4FB10);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BGNIMFMFKLH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH___C_CTOR_OFFSET))(this);
		}

		::BGNIMFMFKLH* __cctor_b__28_0()
		{
			return ((::BGNIMFMFKLH*(*)(::PVOID))((::PBYTE)hIl2Cpp + BGNIMFMFKLH___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
