#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class DFFLMEMFPLM;
namespace System { class Object; }

#define DFFLMEMFPLM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1A1D20)
#define DFFLMEMFPLM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E1A1D50)
#define DFFLMEMFPLM___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E1A1D60)

inline static constexpr unsigned int DFFLMEMFPLM___c_TypeDefinitionIndex = 27056;

	class DFFLMEMFPLM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + DFFLMEMFPLM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM___C_CTOR_OFFSET))(this);
		}

		::DFFLMEMFPLM* __cctor_b__28_0()
		{
			return ((::DFFLMEMFPLM*(*)(::PVOID))((::PBYTE)hIl2Cpp + DFFLMEMFPLM___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
