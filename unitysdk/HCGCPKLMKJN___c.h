#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HCGCPKLMKJN;
namespace System { class Object; }

#define HCGCPKLMKJN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E50F380)
#define HCGCPKLMKJN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E50F3C0)
#define HCGCPKLMKJN___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E50F3D0)

inline static constexpr unsigned int HCGCPKLMKJN___c_TypeDefinitionIndex = 27410;

	class HCGCPKLMKJN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x2AAE0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HCGCPKLMKJN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCPKLMKJN___C_CTOR_OFFSET))(this);
		}

		::HCGCPKLMKJN* __cctor_b__28_0()
		{
			return ((::HCGCPKLMKJN*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCGCPKLMKJN___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
