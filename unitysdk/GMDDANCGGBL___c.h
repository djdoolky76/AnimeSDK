#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GMDDANCGGBL;
namespace System { class Object; }

#define GMDDANCGGBL___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2DF0)
#define GMDDANCGGBL___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4A2E30)
#define GMDDANCGGBL___C___CCTOR_B__28_0_OFFSET UNITYSDK_OFFSET(0x1E4A2E40)

inline static constexpr unsigned int GMDDANCGGBL___c_TypeDefinitionIndex = 28395;

	class GMDDANCGGBL___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E710);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GMDDANCGGBL___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL___C_CTOR_OFFSET))(this);
		}

		::GMDDANCGGBL* __cctor_b__28_0()
		{
			return ((::GMDDANCGGBL*(*)(::PVOID))((::PBYTE)hIl2Cpp + GMDDANCGGBL___C___CCTOR_B__28_0_OFFSET))(this);
		}

	};
