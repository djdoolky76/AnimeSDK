#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GPPKIMDCPBM;
namespace System { class Object; }

#define GPPKIMDCPBM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1F813B40)
#define GPPKIMDCPBM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1F813B80)
#define GPPKIMDCPBM___C___CCTOR_B__76_0_OFFSET UNITYSDK_OFFSET(0x1F813B90)

inline static constexpr unsigned int GPPKIMDCPBM___c_TypeDefinitionIndex = 32014;

	class GPPKIMDCPBM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x1E780);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GPPKIMDCPBM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPKIMDCPBM___C_CTOR_OFFSET))(this);
		}

		::GPPKIMDCPBM* __cctor_b__76_0()
		{
			return ((::GPPKIMDCPBM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPPKIMDCPBM___C___CCTOR_B__76_0_OFFSET))(this);
		}

	};
