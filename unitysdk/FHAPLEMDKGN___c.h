#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FHAPLEMDKGN;
namespace System { class Object; }

#define FHAPLEMDKGN___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E386010)
#define FHAPLEMDKGN___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E386050)
#define FHAPLEMDKGN___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E386060)

inline static constexpr unsigned int FHAPLEMDKGN___c_TypeDefinitionIndex = 28783;

	class FHAPLEMDKGN___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5EF40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FHAPLEMDKGN___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN___C_CTOR_OFFSET))(this);
		}

		::FHAPLEMDKGN* __cctor_b__18_0()
		{
			return ((::FHAPLEMDKGN*(*)(::PVOID))((::PBYTE)hIl2Cpp + FHAPLEMDKGN___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
