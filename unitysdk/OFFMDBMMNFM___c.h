#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class OFFMDBMMNFM;
namespace System { class Object; }

#define OFFMDBMMNFM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F0E8760)
#define OFFMDBMMNFM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F0E87A0)
#define OFFMDBMMNFM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F0E87B0)

inline static constexpr unsigned int OFFMDBMMNFM___c_TypeDefinitionIndex = 29646;

	class OFFMDBMMNFM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x123A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + OFFMDBMMNFM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM___C_CTOR_OFFSET))(this);
		}

		::OFFMDBMMNFM* __cctor_b__23_0()
		{
			return ((::OFFMDBMMNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + OFFMDBMMNFM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
