#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCEJKDBLAHM;
namespace System { class Object; }

#define FCEJKDBLAHM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F8A5510)
#define FCEJKDBLAHM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F8A5550)
#define FCEJKDBLAHM___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F8A5560)

inline static constexpr unsigned int FCEJKDBLAHM___c_TypeDefinitionIndex = 30398;

	class FCEJKDBLAHM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x434E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FCEJKDBLAHM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM___C_CTOR_OFFSET))(this);
		}

		::FCEJKDBLAHM* __cctor_b__23_0()
		{
			return ((::FCEJKDBLAHM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCEJKDBLAHM___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
