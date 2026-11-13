#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class AEODHDFIFEB;
namespace System { class Object; }

#define AEODHDFIFEB___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F5E1C20)
#define AEODHDFIFEB___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F5E1C60)
#define AEODHDFIFEB___C___CCTOR_B__23_0_OFFSET UNITYSDK_OFFSET(0x1F5E1C70)

inline static constexpr unsigned int AEODHDFIFEB___c_TypeDefinitionIndex = 30609;

	class AEODHDFIFEB___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x3D090);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AEODHDFIFEB___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB___C_CTOR_OFFSET))(this);
		}

		::AEODHDFIFEB* __cctor_b__23_0()
		{
			return ((::AEODHDFIFEB*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEODHDFIFEB___C___CCTOR_B__23_0_OFFSET))(this);
		}

	};
