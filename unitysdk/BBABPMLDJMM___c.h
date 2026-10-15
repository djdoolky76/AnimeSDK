#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BBABPMLDJMM;
namespace System { class Object; }

#define BBABPMLDJMM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E78FD80)
#define BBABPMLDJMM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E78FDC0)
#define BBABPMLDJMM___C___CCTOR_B__18_0_OFFSET UNITYSDK_OFFSET(0x1E78FDD0)

inline static constexpr unsigned int BBABPMLDJMM___c_TypeDefinitionIndex = 30058;

	class BBABPMLDJMM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D0D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BBABPMLDJMM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM___C_CTOR_OFFSET))(this);
		}

		::BBABPMLDJMM* __cctor_b__18_0()
		{
			return ((::BBABPMLDJMM*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBABPMLDJMM___C___CCTOR_B__18_0_OFFSET))(this);
		}

	};
