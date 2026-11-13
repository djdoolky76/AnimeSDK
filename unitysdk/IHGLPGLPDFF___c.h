#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class IHGLPGLPDFF;
namespace System { class Object; }

#define IHGLPGLPDFF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F7F38C0)
#define IHGLPGLPDFF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F7F3900)
#define IHGLPGLPDFF___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1F7F3910)

inline static constexpr unsigned int IHGLPGLPDFF___c_TypeDefinitionIndex = 32176;

	class IHGLPGLPDFF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x46640);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + IHGLPGLPDFF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF___C_CTOR_OFFSET))(this);
		}

		::IHGLPGLPDFF* __cctor_b__18_0()
		{
			return ((::IHGLPGLPDFF*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHGLPGLPDFF___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
