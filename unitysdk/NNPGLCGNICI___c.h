#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NNPGLCGNICI;
namespace System { class Object; }

#define NNPGLCGNICI___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1FB68B90)
#define NNPGLCGNICI___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1FB68BC0)
#define NNPGLCGNICI___C___CCTOR_B__118_0_OFFSET UNITYSDK_OFFSET(0x1FB68BD0)

inline static constexpr unsigned int NNPGLCGNICI___c_TypeDefinitionIndex = 28397;

	class NNPGLCGNICI___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x52A60);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NNPGLCGNICI___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPGLCGNICI___C_CTOR_OFFSET))(this);
		}

		::NNPGLCGNICI* __cctor_b__118_0()
		{
			return ((::NNPGLCGNICI*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNPGLCGNICI___C___CCTOR_B__118_0_OFFSET))(this);
		}

	};
