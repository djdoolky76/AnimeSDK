#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GLCGPJLPPPD;
namespace System { class Object; }

#define GLCGPJLPPPD___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E491030)
#define GLCGPJLPPPD___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E491060)
#define GLCGPJLPPPD___C___CCTOR_B__43_0_OFFSET UNITYSDK_OFFSET(0x1E491070)

inline static constexpr unsigned int GLCGPJLPPPD___c_TypeDefinitionIndex = 32089;

	class GLCGPJLPPPD___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1C8B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GLCGPJLPPPD___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD___C_CTOR_OFFSET))(this);
		}

		::GLCGPJLPPPD* __cctor_b__43_0()
		{
			return ((::GLCGPJLPPPD*(*)(::PVOID))((::PBYTE)hIl2Cpp + GLCGPJLPPPD___C___CCTOR_B__43_0_OFFSET))(this);
		}

	};
