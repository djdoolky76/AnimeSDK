#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FDECDCEDPNM;
namespace System { class Object; }

#define FDECDCEDPNM___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1E3547B0)
#define FDECDCEDPNM___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3547F0)
#define FDECDCEDPNM___C___CCTOR_B__38_0_OFFSET UNITYSDK_OFFSET(0x1E354800)

inline static constexpr unsigned int FDECDCEDPNM___c_TypeDefinitionIndex = 35083;

	class FDECDCEDPNM___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("", "<>c")->GetStaticField(0x5B210);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FDECDCEDPNM___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM___C_CTOR_OFFSET))(this);
		}

		::FDECDCEDPNM* __cctor_b__38_0()
		{
			return ((::FDECDCEDPNM*(*)(::PVOID))((::PBYTE)hIl2Cpp + FDECDCEDPNM___C___CCTOR_B__38_0_OFFSET))(this);
		}

	};
