#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CDIEIOFFMKM;
namespace System { class Object; }

#define CDIEIOFFMKM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E085BD0)
#define CDIEIOFFMKM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E085C10)
#define CDIEIOFFMKM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E085C20)

inline static constexpr unsigned int CDIEIOFFMKM___c_TypeDefinitionIndex = 34101;

	class CDIEIOFFMKM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0xF250);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CDIEIOFFMKM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM___C_CTOR_OFFSET))(this);
		}

		::CDIEIOFFMKM* __cctor_b__23_0()
		{
			return ((::CDIEIOFFMKM*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDIEIOFFMKM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
