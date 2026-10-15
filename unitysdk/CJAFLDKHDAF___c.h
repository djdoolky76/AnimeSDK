#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class CJAFLDKHDAF;
namespace System { class Object; }

#define CJAFLDKHDAF___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0AC600)
#define CJAFLDKHDAF___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E0AC630)
#define CJAFLDKHDAF___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1E0AC640)

inline static constexpr unsigned int CJAFLDKHDAF___c_TypeDefinitionIndex = 33027;

	class CJAFLDKHDAF___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x17BD0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CJAFLDKHDAF___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF___C_CTOR_OFFSET))(this);
		}

		::CJAFLDKHDAF* __cctor_b__23_0()
		{
			return ((::CJAFLDKHDAF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJAFLDKHDAF___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
