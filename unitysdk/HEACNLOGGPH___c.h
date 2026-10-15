#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class HEACNLOGGPH;
namespace System { class Object; }

#define HEACNLOGGPH___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E556A10)
#define HEACNLOGGPH___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E556A40)
#define HEACNLOGGPH___C___CCTOR_B__98_0_OFFSET UNITYSDK_OFFSET(0x1E556A50)

inline static constexpr unsigned int HEACNLOGGPH___c_TypeDefinitionIndex = 34083;

	class HEACNLOGGPH___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x32940);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + HEACNLOGGPH___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEACNLOGGPH___C_CTOR_OFFSET))(this);
		}

		::HEACNLOGGPH* __cctor_b__98_0()
		{
			return ((::HEACNLOGGPH*(*)(::PVOID))((::PBYTE)hIl2Cpp + HEACNLOGGPH___C___CCTOR_B__98_0_OFFSET))(this);
		}

	};
