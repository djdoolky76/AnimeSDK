#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MJNKKPCCBMP;
namespace System { class Object; }

#define MJNKKPCCBMP___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1EA22110)
#define MJNKKPCCBMP___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA22140)
#define MJNKKPCCBMP___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1EA22150)

inline static constexpr unsigned int MJNKKPCCBMP___c_TypeDefinitionIndex = 33204;

	class MJNKKPCCBMP___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x53CD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MJNKKPCCBMP___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP___C_CTOR_OFFSET))(this);
		}

		::MJNKKPCCBMP* __cctor_b__18_0()
		{
			return ((::MJNKKPCCBMP*(*)(::PVOID))((::PBYTE)hIl2Cpp + MJNKKPCCBMP___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
