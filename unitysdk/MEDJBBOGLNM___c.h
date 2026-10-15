#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class MEDJBBOGLNM;
namespace System { class Object; }

#define MEDJBBOGLNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E9DC9E0)
#define MEDJBBOGLNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9DCA20)
#define MEDJBBOGLNM___C___CCTOR_B__33_0_OFFSET UNITYSDK_OFFSET(0x1E9DCA30)

inline static constexpr unsigned int MEDJBBOGLNM___c_TypeDefinitionIndex = 29042;

	class MEDJBBOGLNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x4D170);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C_CTOR_OFFSET))(this);
		}

		::MEDJBBOGLNM* __cctor_b__33_0()
		{
			return ((::MEDJBBOGLNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEDJBBOGLNM___C___CCTOR_B__33_0_OFFSET))(this);
		}

	};
