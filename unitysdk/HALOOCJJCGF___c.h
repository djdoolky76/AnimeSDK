#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HALOOCJJCGF;
namespace System { class Object; }

#define HALOOCJJCGF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F81D6D0)
#define HALOOCJJCGF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F81D710)
#define HALOOCJJCGF___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1F81D720)

inline static constexpr unsigned int HALOOCJJCGF___c_TypeDefinitionIndex = 35276;

	class HALOOCJJCGF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1F420);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HALOOCJJCGF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF___C_CTOR_OFFSET))(this);
		}

		::HALOOCJJCGF* __cctor_b__33_0()
		{
			return ((::HALOOCJJCGF*(*)(::PVOID))((::PBYTE)hIl2Cpp + HALOOCJJCGF___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
