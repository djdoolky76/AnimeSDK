#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OCFPHHCOIHI;
namespace System { class Object; }

#define OCFPHHCOIHI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5020)
#define OCFPHHCOIHI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1DDE5060)
#define OCFPHHCOIHI___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1DDE5070)

inline static constexpr unsigned int OCFPHHCOIHI___c_TypeDefinitionIndex = 29656;

	class OCFPHHCOIHI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x11230);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OCFPHHCOIHI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI___C_CTOR_OFFSET))(this);
		}

		::OCFPHHCOIHI* __cctor_b__18_0()
		{
			return ((::OCFPHHCOIHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + OCFPHHCOIHI___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
