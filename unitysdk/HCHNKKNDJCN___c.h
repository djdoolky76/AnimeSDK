#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCHNKKNDJCN;
namespace System { class Object; }

#define HCHNKKNDJCN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E512720)
#define HCHNKKNDJCN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E512760)
#define HCHNKKNDJCN___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E512770)

inline static constexpr unsigned int HCHNKKNDJCN___c_TypeDefinitionIndex = 34375;

	class HCHNKKNDJCN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AD40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCHNKKNDJCN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN___C_CTOR_OFFSET))(this);
		}

		::HCHNKKNDJCN* __cctor_b__33_0()
		{
			return ((::HCHNKKNDJCN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCHNKKNDJCN___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
